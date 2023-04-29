/*                               Experiment no: 1B  
                                                              NAME: 
                                                              ROLL NO: 
                                                              BATCH: 03

                                    AIM: Implementing  System call programe in C.

*/


#include<unistd.h>
#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>

int main()
{
    int fd1,fd2,n;               // fd1 and fd2 declare variable            
        char buff[100];          // we have create buffer  its maximum capacity is 100.

        fd1=open("first.txt",O_RDONLY | O_CREAT);  // using this it will open file name as "KAHKASHA.txt"
         fd2=open("secccod.txt",O_APPEND | O_WRONLY | O_CREAT);
            n=read(fd1,buff,50); // it will ready the file upto 50 character
        write(fd2,buff,n);        // using it will add the content 
}
