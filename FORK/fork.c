#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h>

#include<stdio.h>

	int main()
	{
		pid_t t;
		
		char Wbuff[22]="hello";
		char Rbuff[128];
	
		char child2_Rbuff[128];
		int fpipe;
		int pfd[1];

		int child2_pipe[1];
		int child_pipe_fd;
		fpipe=pipe(pfd);
		t=fork();
		
			
		fpipe=pipe(pfd);
		if(t==0)
		{
			read(pfd[0],Rbuff,12);  //// ist child 
			
			close(pfd[0]);
			printf("i am child\n");

                       Rbuff=Rbuff+5;
                         
			child_pipe_fd=forck();
				if(child_pipe_fd==0)
		                {
                       			 read(child2_pipe[0],child2_Rbuff,12);  //// ist child

                        		close(child2_pipe[0]);
                        		printf("i am child 2   %s\n");
				}

				else if(child_pipe_fd>0)
			                {
                        			//read(pfd[1],Wbuff,12);
                        			write(pfd[1],Rbuff,6);
                  				printf("i am parert 1\n");
                  				close(pfd[1]);

                			}

		
		}
		else if(t>0)
		{
			//read(pfd[1],Wbuff,12);
			write(pfd[1],"hello\n",6);
		  printf("i am parent\n");
		  close(pfd[1]);
		
		}
	

	return 0;
	}



