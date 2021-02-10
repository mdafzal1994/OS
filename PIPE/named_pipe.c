#include<sys/types.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>
#include<stdio.h>

int main()
{
   int fd;
   char Wbuff[]="hello cdac\n";
   fd=open("desd",O_WRONLY);
    if(fd==-1)
    {
    
     printf("file not open\n");
     return 0;
    }

    else
    {
    	write(fd,Wbuff,sizeof(Wbuff));
	close(fd);
	printf("data wite\n");
    
    }



return 0;
}
