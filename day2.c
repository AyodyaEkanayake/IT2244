//if else condition

if(condition)
{
   //body of if statement
}
else
{
   //body of else statement
}

//example: Enter your age and verify your eligible or not for election voting using if else condition

vi condition.c


#include <stdio.h>
int main(){
   int age;
   printf("Enter your age: ");
   scanf("%d",&age);
   
   if(age < 0 && age > 120)
   {
	   printf("\nInvalid age");
   }
   else if(age > 18)
   {
     printf("\nYou are eligible for voting");
   }
   else
   {
     printf("\nyou are not eligible");
   }
   return 0;
}




//Ternary operator

vi ternary.c

test_condition ? expression1 : expression2;

#include <stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age>=18)? printf("You are eligible for voting") : printf("You are not eligible for voting\n");
	return 0;
}



//Switch statment 

ex1: Enter the value between 1 to 7 and create a program for following output

Today is sunday!

ex2:  write a code for small astrology based on your life path number for that get date of birth from user then calculate life path number (use switch case)
ex: Date : 23

vi switch1.c


#include <stdio.h>
int main(){
	int day;
	printf("Enter a number between 1 to 7: ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
		   printf("Today is Monday");
		   break;
		case 2:
		   printf("\nToday is Tuesday");
		   break;
		case 3:
		   printf("\nToday is Wednesday");
		   break;
		case 4:
		   printf("\nToday is Thursday");
		   break;
		case 5:
		   printf("\nToday is Friday");
		   break;
		case 6:
		   printf("\nToday is Saturday");
		   break;
		case 7:
		   printf("\nToday is Sunday");
		   break;
		default:
		   printf("\nInvalid input! Plz enter number between 1 to 7");
	}
	return 0;
}




calculation for life path number:

 a= date%10    3
 b= date/10    2
 c= a+b
 
 if life path number:
    1.Lucky
	2.Carefully do your work
	3.Stronger
	4.Happy
	5.Can get help
	6.Doubt
	7.Sad
	8.Like
	9.Courage


#include <stdio.h>

int main()	
{
	int date;
	printf("Enter your birth date: ")
	scanf("%d",&date);
	
	switch(date){
		case 1:
		  printf("Lucky");
		case 2:
		  printf("Carefully do your work");
		case 3:
		  printf("Stronger");
		case 4:
		  printf("Happy");
		case 5:
		  printf("Can get help");
        case 6:
		  printf("Doubt");
        case 7:
		  printf("Sad");	
        case 8:
		  printf("Like");		  
		case 9:
		  printf("Courage"); 
		default:
		  printf("Invalid input");
	}
}
	
	

ex3:

Give list of numbers then calculate the summation and multiplication using for loop
ex:
  1 2 3 4 5
  summation=15
  multiplication=120
  


ex4:

Print the integeres from 1to 10 using while loop




ex5: 
 Write a c program to generate and print the fibonacci sereis upto a specified number of terms.
 The program  should take the number of terms as input from the user and then display the correspoding Fiboncci sequence

vi fibonacci.c

#include <stdio.h>

int main(){
	int terms,first=0,second=1,next;
	
	printf("Enter number of terms: ");
	scanf("%d",&terms);
    
	if(terms <= 0)
	{
		printf("Plz enter a positive integer.");
	}	
    else if(terms == 1)
	{
		printf("Fiboncci series is: %d",first);
	}		
	else
	{
		printf("Fiboncci series is: %d,%d",first, second);
		
		
		for(int i=3; i<= terms;i++)
		{
			next = first+second;
			printf(",%d", next);
			first=second;
			second=next;
		}
		printf("\n");
	}
	return 0;
	
}



ex6:

Write a C program to calculate the factorial of a given non-negative integeres


vi factorial.c

#include <stdio.h>

int main(){
	int num,fact=1;
	printf("Enter a non-non-negative integer: ");
	scanf("%d", &num);
	
	if(num < 0)
	{
		printf("Factorial is not define for non-negative numbers");
	}
	else{
		for(int i=1; i <= num; i++)
	    {
		  fact = fact *i;
	    }
	    printf("The factorial of %d is: %d",num,fact);
	
	}

	
	return 0;
}

ex7:
Write a C program that:
Accepts two strings as input from the user 
Concatenates the two strings displays the concatenate result


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Accept two strings from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); // Use fgets to read the input including spaces
    str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character from the input

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  // Use fgets to read the input including spaces
    str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character from the input

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Display the concatenated result
    printf("The concatenated result is: %s\n", str1);

    return 0;
}
















###############if else 
if(condition){
  //body of if statment;
}
else{
  //body of else statment;
}
Example: Enter your age and verify your aligible or not for election voting 
using if else condition .


#########Ternary operator
test_condition ? expression1 : expression2;

####switch operator
switch(variable/expression){
   case 1:
     //body of case 1
     break;
   case 2:
     //body of case 2
     break;

   case n:
     //body of case n
     break;

  default:
    // body of default
   }
Example 1: Enter the value between 1 to 7 and create a program for following output:
Enter the number between 1 to 7 : 1
Today is Sunday!

Example 2:
write a code for small astrology based on your life path number for that  get date of birth 
from user then calculate life path number.(use switch case)
output:
     case 1-Date: 23
	 case 2-Date: 29

     calculation for life path number:                    
			  a=date%10     3                                
			  b=date/10     2
			  c=a+b         5
	  if life path number :
			  1:Lucky
			  2:Carefuly do your work
			  3:Storger
			  4:Happy
			  5:Can get help
			  6:Doubt
			  7:Sad 
			  8:Like
			  9:Courage

Example 3:
Give list of numbers then calculate the summation and multiplication using for loop.
 Example:-
    1 2 3 4 5                             
	summation = 15                         
    multiplication =120
	
Example 4:
Print the integers from 1  to 10 using while loop.

EXAMPLE 5:
Write a C program to generate and print the Fibonacci series up to a specified 
number of terms. The program should take the number of terms as input from the 
user and then display the corresponding Fibonacci sequence.

EXAMPLE 6:
Write a C program to calculate the factorial of a given non-negative integer.

Example 7:
Write a C program that:
Accepts two strings as input from the user.
Concatenates the two strings Displays the concatenated result.

Example 8:
Write a C program that takes a binary number (as an integer) as input and 
converts it to its decimal equivalent.





Example 9:
Write a C program that:
Accepts an array of integers from the user.
Finds and displays the maximum and minimum values in the array.

Example 10:
C program to generate Pascal's Triangle.

Output:
no of rows =5
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1

