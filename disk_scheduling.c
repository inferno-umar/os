/*
                                                Experiment No : 10
                              
                                                                                        
                                                                                     NAME : 
                                                                                     ROLL NO. : 
                                                                                     BATCH : 03
                                                                                     SEM : 04

                           Aim : Write a program in C to do disk scheduling - FCFS, SCAN, C-SCAN


*/

// Program:
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, req[50], mov = 0, cp;
    printf("\nEnter the current position:: ");
    scanf("%d", &cp);
    printf("\nEnter the number of requests:: ");
    scanf("%d", &n);
    printf("\nEnter the request order::\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &req[i]);
    }
    mov = mov + abs(cp - req[0]); // abs is used to calculate the absolute value
    printf("\n%d -> %d", cp, req[0]);
    for (i = 1; i < n; i++)
    {
        mov = mov + abs(req[i] - req[i - 1]);
        printf(" -> %d", req[i]);
    }
    printf("\n");
    printf("\nTotal head movement = %d\n", mov);
}




/*

Output:

aiktc@aiktc:~/Desktop/21CO34$ gcc Exp10.c
aiktc@aiktc:~/Desktop/21CO34$ ./a.out

Enter the current position:: 4

Enter the number of requests:: 5

Enter the request order::
4
2
1
3
5

4 -> 4 -> 2 -> 1 -> 3 -> 5

Total head movement = 7

aiktc@aiktc:~/Desktop/21CO34$


Conclusion : Thus, we have successfully implemented FCFS, SCAN, C-SCAN.
      
*/
