
///////////////receiver  
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
   char Rbuff[521];
   fd=open("desd",O_RDONLY);
    if(fd==-1)
    {
    
     printf("file not open\n");
     return 0;
    }

    else
    {
    	read(fd,Rbuff,127);
	close(fd);
	printf("data read \n %s\n",Rbuff);
    
    }



return 0;
}
