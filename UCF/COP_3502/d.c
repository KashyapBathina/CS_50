/*
recursion:
    body of function calls func itself; however, must make breaking point to prevent infinite loop; ie, can call f2 inside f1 or f1 inside f1
    example: void rec2(int x) {if x==0 return;   rec2(x-1); printf("%d", x)}, prints 1,2,3 . . . bc printf kept in call stack--! data struct stack but a system stack used to
    handle func calls; when funct called, new frame pushed onto call stack that contains info about funct, params, vars, and return adress, when funct finished, frame popped
    in above example
*/
