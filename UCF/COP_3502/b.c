/*
stack:
    allocated space not moving, memory requirements are known at compile time; after compiles, can perfectly predict how much memory will be needed; space used whether input taken
    memory only reserved while function is running; declaring a variable and array is statically located: cannot return array after funct b/c array deleted after funct
    code:int size; scanf(“%d”, &size); nt Arr[size]; size of arr ! known bfore compile: therfor uses a memory pool called stack to allocate this memory, high chance of crash b/c stack
    size limited and can crash if too large; memory auto destroyed/freed after funct

dynamic:
    memory space ! known at compile time; no name of allocated memory, instead pointer to adress; memory ! freed auto; takes space from heap memory, ! stack
    malloc: void *malloc(size_t size) allocates unused space; space contains garbadge vals; returns a pointer to the beginning of the memory allocated; if memory ! found, null returned
        syntax: int *p = (int *) malloc(sizeof(int)); casting null pointer to int pointer with (int *), b/c malloc returns null pointer, that points to that address
    calloc: void *calloc(size_t n, size_t e); allocates array of size n with each element of size e; unlike malloc, each space initialized to 0; int *p = (int *) calloc(1, sizeof(int));
    memory leak: int *p1 = malloc . . .; int *p2 = malloc . . .; for(loop) {scan into &p1[i]} p2 = p1; return p1: memory leak, b/c after p2=p1, both pointers are pointing to p2; allocated
        memory for p2 got disconnected since we don't know adress anymore and still alive, but no longer able to freed and just takes space
    realloc: when allocated size ! enough: wrong approach is to allocate new mem and copy old to new and free old; alternative is realloc: void *realloc(void *ptr, size_t size), where
        ptr is old pointer and size is new size. realloc allocates size amount of bytes and copies the content from the allocated data in ptr and returns void pointer, for example, if
        values is an int pointer and already allocated to numVals size, then realloc with values = (int*)realloc(values,(numVals+EXTRA)*sizeof(int));
    array returning: now can return array with dynamically allocated memory to first address, no longer destroyed after funct, can free from main
    struct: to make dynamiaclly allocated struct point: struct point * temp; temp = (struct point*)malloc(sizeof(struct point)); scanf(“%d %d”, &(temp->x), &(temp->y));
        dynamic struct array: struct point* temp; temp = (struct point*)malloc(size*sizeof(struct point)); for (loop) {initialize}
        when dynamic struct with dynamic array inside: ex. in struct* temp malloc, there is int* digits malloc, then do inward to out: free(temp->digits) then free(temp)
        when dynamic pointer with dynamic struct inside: allocated array elements will only store a POINTER to the struct; temp p* canot hold address of other p*, so double pointer:
            struct point** temp = (struct point**)malloc(size*sizeof(struct point*)); each temp[i] = (struct point*)malloc(sizeof(struct point)), dealloc: free(my_pts[i]) then free(my_pts);
        when dynamicaly allocate 2-dim arr: int** array = (int**)malloc(sizeof(int*)*n); int i; for (i=0; i<n; i++) array[i] = (int*)malloc(sizeof(int)*m); dealloc: for (i=0; i<n; i++)
            free(array[i]); free(array);

linked list:
    seq of connected nodes containing data items, each node contains connection to next link; use in lieu of array b/c array stores in contiguous spaces, fixed size, and insertion/deletion
    difficult b/c if want to shift 5th element in 1000n array, must shift 995 indexes after 5; linked lists dynamic with length increase and decrease possible, !!contiguos, and inser/del only
    req few node changes; many types:
        simple/singly linked list: navigation is forward only: node two parts 1. info 2. link--pointer next that holds add of next: typedef struct node{int info;struct node *next;}node;
        doubly linked list: items can be navigated forward and backward: makes inserting and deleting easier; typedef struct nod {int info;struct nod *prev, *next;} node; imagine null bfore head
            important, note head points to 1st item, but 1st item previous == null and ! head
            1. insert @ begin: new temp node for insertion: temp->info = item; temp->prev = NULL; temp->next = head; then, if head null: head=temp, else head->prev=temp then head=temp;
            2. insert @ end: if head=null, (temp->prev=null;head=temp); else, set t=head and traverse until (t->next=null), then t->next=temp; temp->prev=t
            3. insert in btwn: create new temp node and fill fields, traverse where to insert, assign prev and next of temp based on t and t->next, adjust t-next; adjust prev of t->next (if ! null)
        circular linked list: list item contains link of the first element as next and the first element has a link to the last element as previous: look @ lab_assignment2
    basic concepts: head: first node with seperate node type pointer used to keep track of head; IMPORTANT as if lose adrs head, lose all list; empty list if head=null (p* points to nothin)
    basic operations of linked lists:
        traversal: going from head to other node: node *t; t = head; while (t->NEXT != NULL) t = t->; create new pointer t so ! change head and lose prev items when traversing
        insertion: adds element to list: create temp node and fill data and next, look for position to insert, link temp node appropriately; IMPORTANT: draw out and visualize; 3 cases:
            1. inserting @ begining: two cases: list empty or existing (who is head and who after head now); first check if (head==null) head=temp; if list empty, then else { temp->next = head;
            head=temp} (this links our node next to 1st elmnt (head points to this 1st elmnt), then set head to new node) return head;
            2. inserting @ end: two cases: same as above; if empty (head==null) head=temp; else make traversal node, set=head, while (t->next!=null ) t=t->next; [just traversing] then outside
            while loop: [in this case, the item current is last b/c next null, then] t->next=temp; [where temp is new node]
            3. inserting btwn nodes: many cases whether @ begin, end, or actlly btwn; can use this for ordering; when case for beginig, If (head == NULL or head->info >= item) insert begin;
            for scenarios when @ end or btwn, can combine: t = head; while (t->Next != NULL && t->next->info < item) t = t->Next; then join by {temp->next = t->next; t->next = temp} [temp new node]
        deletion: deletes a given item from the list; can be @ begin, end, or btwn; most used when delting specfc item: must search; if @ begin: temp = head; head = head->next; free(temp);
            else: t = head; while (t->next != NULL && t->next->info != item) t = t->next; If(t->next == NULL ) return head; [item was not found]; temp = t->next; t->next = t->next->next; free(temp)
            imagine temp here is just node of item looking for, then t->next = t->next->next sets node previos from item's next to node after item and frees the item
        display: displays the complete list in a forward manner
        search: search for a given item, can use double linked list for optimal performance



*/


/*
This code implements some basic operation of singly linked list like inserting in
the beginning and end, delete operation, and display operation
*/
#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int data;
    struct node *next;
}node;


//this function takes an item and insert it in the linked list pointed by root.
node* insert_front(node *root, int item) {
    node *temp;
    //create a new node and fill-up the node
    temp= (node *) malloc(sizeof(node));
    temp->data=item;
    temp->next=NULL;

    if(root==NULL) //if there is no node in the linked list
        root=temp;
    else { //there is an existing linked list, so put existing root after temp
        temp->next = root; //put the existing root after temp
        root = temp; //make the temp as the root!
    }
    return root;
}


//this function takes an item and insert it in the end of the linked list
node* insert_end(node* root, int item)
{
    node *t;
    node *temp;
    //create a new node and fill-up the node
    temp= (node *) malloc(sizeof(node));
    temp->data=item;
    temp->next=NULL;

    if(root==NULL) //if there is no node in the linked list, make temp as the root
        root=temp;

    else {//there is an existing linked list and we need to traverse to reach the end node
        t=root; //t is being used to start traversing
        while(t->next!=NULL) //keep going till the end
            t=t->next;

        t->next=temp; //t is at the last node of the linked list, so add temp after t.
    }

    return root;
}


/*this function deletes the first occurrence of a given item from linked list.
it returns the updated/original root
*/
node* DelList(node *root, int item)
{
    node *t;
    node *temp;
    if(root==NULL) //if there is no linked list, just return root/null
        return root;

    if(root->data==item) {//if root contains the item, remove the current root and change it to the next node
        temp=root; //put existing root to temp so that we can free it. Otherwise, there will be memory leak
        root=root->next; //change the root by the next node of the current root.
        free(temp);
        return root;
    }
    //the code will reach here if the item is not in the root. So, we need to traverse.
    t=root;
    /*keep going until we reach to the end or we find the item.
    note that we look ahead so that we will be one node before the node we will
    be deleting
    */
    while(t->next!=NULL && t->next->data != item)
        t=t->next;

    if(t->next==NULL) //if the above loop breaks for this reason, it means the item does not exist. So, return from the function
        return root;
    /*if the code reach here, it indicates the loop exited as the item was found
    now, the node we want to delete is in t->next.*/
    temp=t->next; //we will delete t->next. So, putting it in temp
    t->next=t->next->next; //change the t->next to the the next of the node we will be deleting
    free(temp);
    return root;
}


void display(node* t)
{
    printf("\nPrinting your linked list.......");
    while(t!=NULL) {
        printf("%d ",t->data);
        t=t->next;
    }
}


int main()
{
    node *root=NULL; //very important line. Otherwise all function will fail
    node *t;
    int ch,ele,v, del;

    while(1) {
        printf("\nMenu: 1. insert at front, 2. insert at end, 3. Delete 4.exit: ");
        scanf("%d",&ch);

        if(ch==4) {
            printf("\nGOOD BYE>>>>\n");
            break;
        }

        if(ch==1) {
            printf("\nEnter data(an integer): ");
            scanf("%d",&ele);
            root = insert_front(root, ele);
            display(root);
        }

        if(ch==2) {
            printf("\nEnter information(an integer): ");
            scanf("%d",&ele);
            root = insert_end(root, ele);
            display(root);
        }

        if(ch==3) {
            printf("\nEnter info which u want to DELETE: ");
            scanf("%d",&del);
            root=DelList(root, del);
            display(root);
        }
    }
    return 0;
}
