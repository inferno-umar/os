#include<stdio.h>
#include<unistd.h>
int main()
{
  // fork() Create a child process 

    int pid;
    pid=fork();
   
    if (pid > 0) 
       {
        printf("\n Before fork");  
        printf("\n The Parent Process ID is :- %d", getppid());  
        printf("\nParent Process exexuted successfully \n");
       }
    else if(pid == 0)
       {
        printf("\n After fork");  
        printf("\n The New Child Process Created by fork system call %d \n", getpid());  
       }
return 0;
}

