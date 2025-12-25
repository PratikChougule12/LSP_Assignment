#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>

int main()
{
    int fd = 0;

    fd = access("Demo.txt",F_OK |R_OK | W_OK);

    if(fd == -1)
    {
        printf("Unable to Access \n");
        printf("Error Statement : %s\n",strerror(errno));
    }
    else
   {
        printf("Acess for files :%s\n",fd);
   } 

   return 0;
}