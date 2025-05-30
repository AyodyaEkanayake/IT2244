// fork() -->copy a process
// pid() -->child process -0


// 01.
vi fork.c

#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("\nHello world");
	int f = fork();
	int p = getpid();
	
	printf("\n The pid is %d",p);
	printf("\n The pid is %d",f);
	
	return 0;
}

gcc fork.c -o fork
./fork


// 02.

vi fork1.c

#include<stdio.h>
#include<unistd.h>
int main()
{
	fork();
	fork();
	printf("\nHello world\n");
	
	
	return 0;
}

gcc fork1.c -o fork1
./fork1


// 03.
	
vi fork2.c

#include<stdio.h>
#include<unistd.h>
int main()
{

	int f = fork();
	
	if(f == 0)
	{
		printf("Child process\n");
	}
	else
	{
		printf("Parent process\n");
	}
	
	
	return 0;
}

gcc fork2.c -o fork2
./fork2


// 04.

vi fork3.c

#include<stdio.h>
#include<unistd.h>
int main()
{

	int f = fork();
	
	if(f == 0)
	{
		printf("I am B child\n");
		
		int f1 = fork();
		if(f1 == 0)
	{
		printf("I am C Sibling\n");
	}
	else
	{
		printf("I am A parent\n");
	}
	}
	
	
	return 0;
}


gcc fork3.c -o fork3
./fork3


// 05.

vi fork4.c

#include<stdio.h>
#include<unistd.h>
int main()
{
	int f = fork();
	
	if(f == 0)
	{
		printf("I am child\n");
		printf("My parent id: %d\n",getppid());
		
	}
	else
	{
		int f1 = fork();
		if(f1 == 0)
		{
			printf("I am Sibling\n");
			printf("My parent id: %d\n",getppid());
		}
		else
		{
			printf("I am parent\n");
			printf("My parent id: %d\n",getpid());
			printf("My parent id: %d\n",getppid());
		}
	}
	
	
	return 0;
}

gcc fork4.c -o fork4
./fork4
