
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include <sys/stat.h>

int main()
{
    struct stat sobj;
    int iRet = 0;

    iRet = stat("./Demo.txt",&sobj);

    printf("Total size : %ld\n",sobj.st_size);
    printf("Inode number : %ld\n",sobj.st_ino);
    printf("Hardlink count : %ld\n",sobj.st_nlink);
    printf("Ownership: UID=%ju   GID=%ju\n",(uintmax_t) sb.st_uid, (uintmax_t) sb.st_gid);
   
    printf("File type:                ");

    switch (sb.st_mode & S_IFMT) 
    {
           case S_IFBLK:  
                    printf("block device\n");           
                    break;

           case S_IFCHR:  
                printf("character device\n");        
                break;

           case S_IFDIR:  
                printf("directory\n");               
                break;

           case S_IFIFO:  
                printf("FIFO/pipe\n");              
                break;

           case S_IFLNK:  
                printf("symlink\n");                 
                break;
                
           case S_IFREG:  
                printf("regular file\n");            
                break;

           case S_IFSOCK: 
                printf("socket\n");                  
                break;

           default:       
                printf("unknown?\n");                
                break;
        }

    printf("Ownership: UID=%ju   GID=%ju\n",(uintmax_t) sb.st_uid, (uintmax_t) sb.st_gid);
    printf("Last status change:       %s", ctime(&sb.st_ctime));
    printf("Last file access:         %s", ctime(&sb.st_atime));
    printf("Last file modification:   %s", ctime(&sb.st_mtime));

    return 0;

}
