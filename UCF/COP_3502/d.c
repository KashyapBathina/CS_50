/*
recursion:
    body of function calls func itself; however, must make breaking point to prevent infinite loop; ie, can call f2 inside f1 or f1 inside f1
    example: void rec2(int x) {if x==0 return;   rec2(x-1); printf("%d", x)}, prints 1,2,3 . . . bc printf kept in call stack--! data struct stack but a system stack used to
        handle func calls; when funct called, new frame pushed onto call stack that contains info about funct, params, vars, and return adress, when funct returned, frame popped
        in above example, printfs added to stack for each recursion until x==0, then returns and pops backwards until all printfs; other way to visualize, when==0, returns allows
        to go back and finish code, which means past recursion, which was waiting for finish of current can now operate, then prints, which allows past past . . . until all popp
    example: power calculation-b^e: int power(int base, int exponent) { if (exponent==0) return 1;    else return (base*power(base,exponent-1))}, ie, (5,2), return 5 * power(5,1)
        -> (5,1), return 5 power(5,0) -> (5,0) return 1; therfore (5,1) return 5 * 1 = 5 and (5,2) return 5 * 5 = 25
    general struct: 1. if (terminating condition), do final action; else, take 1 step closer to terminating condition by calling recursively on a smaller subproblem
        2. if (!(terminating condition)), take 1 step . . . 
*/
