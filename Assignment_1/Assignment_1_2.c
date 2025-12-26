#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>

int main()
{
    int fd = 0;

    fd = open("./Demo.txt",O_RDONLY,O_RDONLY,O_WRONLY,O_WRONLY,O_APPEND | O_CREAT);

    if(fd == -1)
    {
        printf("Unable to Open file \n");
        printf("Error Statement : %s\n",strerror(errno));
    }
    else
   {
        printf("File Succefull get Oepened \n");
   } 

   return 0;
}
