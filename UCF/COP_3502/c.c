/*
stack:
    abstract data type; last in first out; anything added goes on top; anything removed must be on top; ie stack of plates; basic operations: push, pop, isempty, isfull, peek
    push: when maxSize = 6; stack[maxSize]; top=-1 -> push(char x) {stack[++top] = x}(remember ++i increments first (why ++ front) and returns incremented val; also ++top
        inside [] still icrements top and is the same as ++top; stack[top]); what push does is set increase index and set index = x
    pop: return stack[top--]; returns value before -- and sets top--; note doesn't remove element at past top, just changes refrnce point so can be overwritten by push
    peek: return stack[top]; returns top item in the stack
    many ways to implement:
        array with global variables:
            push: if (top >= maxSize -1) {printf(stack overflow)}  else {stack[++top]=x}
            pop: if (top<0) {printf(stack overflow)} else {return stack[top--]}
            isempty: if (stack<0) {printf(stack empty)} else {printf(! empty)}
            isfull: if (top>=maxSize-1) {printf(full)}
        linked list: insert at the head while pushing, and remove from the head while popping
    many uses for this data type:
        balance of parenthesis:
            ie whether "(([))) makes sense: solution=read string char left to right, if (,[,{, then push on stack -> if ),],}, pop and check if get corresponding closer ->
            when reach end, check if stack empty:
        infix/postfix expression evaluation:
            infix--a + b *c or (a + b) * c - d * e; postfix--operators after operand: a + b -> ab+ && a + b * c = abc*+; operators are always in correct evaluation order
            can use stack to express and evaluate; solution=1. read infix left to right -> 2. if operand (ie +, b/c operand ! go in stack), append to postfix string -> 3.
            comparing current operator read in vs operator on top of stack -> if current priority higher, current pushed to top stack; -> if same or lower, popping operators
            from stack until priority current higher than operator at top of stack -> popped appended to postfix in order popped -> current pushed to stack; if closing parenth,
            pop until open parenth found in stack, then append popped items to postfix expect parenthesis; priority: 1. power 2. /*% 3. +-
            ex: 4 * 2 + 3 + 8/4: solution:
                1. postfix = 4                  stack: empty
                2. postfix = 4                  stack: *
                3. postfix = 4 2                stack: *
                4. postfix = 4 2 *              stack: +, current is +, since current < top, pop until priority current higher and append popped to postfix
                5. postfix = 4 2 * 3            stack: +
                6. postfix = 4 2 * 3 +          stack: +, current is next +, since current same as top (+), pop until priority current higher and append + to post
                7. postfix = 4 2 * 3 + 8        stack: +
                8. postfix = 4 2 * 3 + 8        stack: + /, current is > top (+), push / to top stack
                9. postfix = 4 2 * 3 + 8 4      stack: + /
                10. postfix = 4 2 * 3 + 8 4 / + stack: since finished reading infix, pop everything out of stack / first and then + and append
            evaluation from postfix: 1. read expression left to right 2. if operand (ie a, no longer if operator), push to stack 3. if operator, pop two operands from stack,
            evaluate two operands with operator, push evaluation, or result, into stack 4. repeat until end of expression

queues:
    first in first out, anyting added goes to rear, removed from front; removed from order they were inserted (ie checkout line). implemented w array || linked list
    enqueue: add new item    dequeue: get and remove item from front of queue    isempty: determine if empty    isfull: determine if full    peek: get elmnt @ front w/o remov
    array implementation:
        maxsize = 6; queue[maxsize]rear = 0; front = 0; enqueue(char x) = if (rear<maxsize) {queue[rear++] = x,} else {printf(full)} dequeue() = if (front==rear)print(empty)
        else {return Queue[Front++]}; peek() = return queue[front]; note, not actually deleting data when deque, just hiding
        linear queue: cannot reuse empty spaces after deleting; problem with linear is that b/c doing front++ and rear++ eventually causes to cap @ maxsize as size decreses
        circular queue: can reuse empty slots from front; solution to above problem with size limit: utilizing empty spaces after deleting, can use % mod operator
            must keep track elements so can see whether queue full or empty slot: to find circular index (ie if no space end of que, go back front), at (f+noe) % size, where
            noe=num of elmnts, size=size of queue then increase noe++; do this if noe<size (if there is capacity), in this case, can stop, or make more memory
            realloc: b/c challenges using (f+noe) % size formula, solution-after realloc, copy all data before final, to index starting from old size and afterwards, then
                finally add item to next slot-> then can use spaces in front again with (f+noe) % size formula
            summary enque: 1. get item wanna insert 2. check if que full by comparing noe and size -> if not full, add item @ index (f+noe)%size; noe++ -> if full, realloc,
                copy data from left of front to right side, add item after that, noe++, increase capacity;
            summary deque: remove data from front 1. check que empty (noe==0) 2. copy data data from front into val 3. increase front = (front+1)%size;noe--;return val
            struct implementation: struct que {int* elements; }

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define maxSize 100
char stack[maxSize];
int top = -1;


void push(char x) {
    if (top>= maxSize-1) {
        printf("stack overflow");
    }
    else {
        stack[++top] = x;
    }
}

int pop() {
    if (top<0) {
        return -999;
    }
    else
        return stack[top--];
}

int isempty() {
    if (top<0)
        return 1;
    else
        return 0;
}

int isbalanced (char* str) {
    int result = 1;

    for (int i=0; i<strlen(str);i++) {
        // note "(" double quotes is a string literal with null \0, '(' is single char
        if (str[i] == '(' || str[i] == '[' || str[i] == '{' ) {
            push(str[i]);
        }
        else {
            char x = pop();

            if (str[i] == ')') {
                if (x != '(')
                    return 0;
            }
            if (str[i] == ']') {
                if (x != '[')
                    return 0;
            }
            if (str[i] == '}') {
                if (x != '{')
                    return 0;
            }
        }
    }

    if (isempty()==0)
        return 0;
    else
        return 1;
}

int main() {
    char str[100];

    printf("Enter parenthesis expression: ");
    scanf("%s", str);
    printf("Input: %s\n", str);
    int result = isbalanced(str);

    if (result == 0) {
        printf("not balanced!\n");
    }
    else
        printf("balanced!\n");
}
