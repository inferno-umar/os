/*

                                        Experiment No : 8
                                                                            NAME: 
                                                                            ROLL NO. : 
                                                                            BATCH : 3
                                                                            SEM - 4

                                        Aim - Write a program to demonstrate the concept of dynamic partitioning placement algorithms 
                                        Best Fit, First Fit, Worst-Fit etc

*/

	

	
#include<stdio.h>
 
void main()
{
int bsize[10], psize[10], bno, pno, flags[10], allocation[10], i, j;
 
for(i = 0; i < 10; i++)
{
flags[i] = 0;
allocation[i] = -1;
}
printf("Enter no. of blocks: ");
scanf("%d", &bno);
printf("\nEnter size of each block: ");
for(i = 0; i < bno; i++)
scanf("%d", &bsize[i]);
 
printf("\nEnter no. of processes: ");
scanf("%d", &pno);
printf("\nEnter size of each process: ");
for(i = 0; i < pno; i++)
scanf("%d", &psize[i]);
for(i = 0; i < pno; i++)         //allocation as per first fit
for(j = 0; j < bno; j++)
if(flags[j] == 0 && bsize[j] >= psize[i])
{
allocation[j] = i;
flags[j] = 1;
break;
}
//display allocation details
printf("\nBlock no.\tsize\t\tprocess no.\t\tsize");
for(i = 0; i < bno; i++)
{
printf("\n%d\t\t%d\t\t", i+1, bsize[i]);
if(flags[i] == 1)
printf("%d\t\t\t%d",allocation[i]+1,psize[allocation[i]]);
else
printf("Not allocated");
}
}

/*
  
  
  Enter no. of blocks: 4

Enter size of each block: 2
3
4
5

Enter no. of processes: 3

Enter size of each process: 5
4
3

Block no.	size		process no.		size
1		2		Not allocated
2		3		3			3
3		4		2			4
4		5		1			5

------------------

 */

                                       
