/*

                                        Experiment No : 9
                                                                            NAME: 
                                                                            ROLL NO. : 
                                                                            BATCH : 3
                                                                            SEM - 4

                                        Aim - " Write a program in C demonstrate the concept of page replacement policies for
                                                  handling page faults eg: FIFO, LRU etc. "

				 
				

ALGORITHM


1. Start the process

2. Declare the size with respect to page length

3. Check the need of replacement from the page to memory

4. Check the need of replacement from old page to new page in memory

5. Forma queue to hold all pages

6. Insert the page require memory into the queue

7. Check for bad replacement and page fault

8. Get the number of processes to be inserted

9. Display the values

10. Stop the process

*/ 
	 


#include<stdio.h>
int main()
{
int i,j,n,a[50],frame[10],no,k,avail,count=0;
            printf("\n ENTER THE NUMBER OF PAGES:\n");
scanf("%d",&n);
            printf("\n ENTER THE PAGE NUMBER :\n");
            for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
            printf("\n ENTER THE NUMBER OF FRAMES :");
            scanf("%d",&no);
for(i=0;i<no;i++)
            frame[i]= -1;
                        j=0;
                        printf("\tref string\t page frames\n");
for(i=1;i<=n;i++)
                        {
                                    printf("%d\t\t",a[i]);
                                    avail=0;
                                    for(k=0;k<no;k++)
if(frame[k]==a[i])
                                                avail=1;
                                    if (avail==0)
                                    {
                                                frame[j]=a[i];
                                                j=(j+1)%no;
                                                count++;
                                                for(k=0;k<no;k++)
                                                printf("%d\t",frame[k]);
}
                                    printf("\n");
}
                        printf("Page Fault Is %d",count);
                        return 0;
}

/*
   ENTER THE NUMBER OF PAGES:
4

 ENTER THE PAGE NUMBER :
1
2
3
4

 ENTER THE NUMBER OF FRAMES :3
	ref string	 page frames
1		1	-1	-1	
2		1	2	-1	
3		1	2	3	
4		4	2	3	
Page Fault Is 4

  
 */ 
