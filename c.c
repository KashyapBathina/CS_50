/*
stack:
    abstract data type; last in first out; anything added goes on top; anything removed must be on top; ie stack of plates; basic operations: push, pop, isempty, isfull, peek
    push: when maxSize = 6; stack[maxSize]; top=-1 -> push(char x) {stack[++top] = x}(remember ++i increments first (why ++ front) and returns incremented val; also ++top
        inside [] still icrements top and is the same as ++top; stack[top]); what push does is set increase index and set index = x
    pop: return stack[top--]; returns value before -- and sets top--, so
    peek: return stack[top]; returns top item in the stack


*/
