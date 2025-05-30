//vi f5.c

#include<stdio.h>
#include<unistd.h>



int main()
{
	    int num1,num2,num3;
		
        printf("Enter num1:\n ");
	    scanf("%d",&num1);
	
	    printf("Enter num2: \n");
	    scanf("%d",&num2);

        printf("Enter num3: \n");
	    scanf("%d",&num3);
		 
	 
    int q=fork();
	
	if( q == 0)
	{
		printf("I am Child Q of P\n");
		printf("My process id is: %d\n", getpid());
		printf("My parent process id is: %d\n", getppid());
		
		int a= fork();
		if( a == 0)
		{
			int fact =1;
			printf("I am child A of  Q\n");
			printf("My process id is: %d\n", getpid());
			printf("My parent process id is: %d\n", getppid());
			
			for(int i=1;i <= num1; i++)
			{
			    fact = fact * i;				
			}
			printf("The factorial of %d is %d:\n ", num1 , fact);
		}
		
		
	}
	else 
	{   
        int r = fork();
		
		if(r == 0)
		{
			printf("I am sibilig R\n");
		    printf("My process id is: %d\n", getpid());
		    printf("My parent process id is: %d\n", getppid());
			
			
			int b = fork();
			if( b == 0)
			{
				printf("I am child B\n");
				printf("My process id is: %d\n", getpid());
				printf("My parent process id is: %d\n", getppid());
				
				int first=0,second=1,next;   
				if(num2 <= 0)
				{
					printf("Plz enter a positive integer.");
				}	
				else if(num2 == 1)
				{
					printf("Fiboncci series is: %d",first);
				}		
				else
				{
					printf("Fiboncci series is: %d,%d",first, second);
					
			
					for(int i=3; i<= num2;i++)
					{
						next = first+second;
						printf(",%d", next);
						first=second;
						second=next;
					}
					printf("\n");
				}
			}
			else 
			{
				int c = fork();
				if(c == 0)
				{
					printf("I am sibilig C\n");
					printf("My process id is: %d\n", getpid());
					printf("My parent process id is: %d\n", getppid());
				
				   int i, j, isPrime;


				   for (i = 2; i <= num3; i++) {
					  isPrime = 1;  

					  for (j = 2; j * j <= i; j++) {
						if (i % j == 0) {
							isPrime = 0; 
							break;
						}
					  }

					if (isPrime)
						printf("%d ", i);
				}

				printf("\n");
			   }
               else
			   {
				   printf("I am Parent P\n");
				   printf("My process id is: %d\n", getpid());	
			   }
               return 0;			   
			   
			}	
		}	
    }
}