#include <stdio.h>
int main()
{
    printf("Hello world!");
 return 0;
}

gcc first.c -o first

//use only file name without extension
./first



Outputs
[2021ict61@fedora ~]$ vi first.c
[2021ict61@fedora ~]$ gcc first.c -o first
[2021ict61@fedora ~]$ ./first
Hello world!


second.c
#######variables
// the ways we can assign the variables

int age;
age=25;
int age=25;
_________________________________________
#include<stdio.h>
int main()
{  
    int age=25;
    //printf(age);
    printf("%d",age);
return 0;
}


//assign new value for same variable
#include <stdio.h>
int main()
{
	int age=25;
	printf("%d",age);
	age=23;
	printf("\nNew age: %d",age);
	return 0;
}
int age=25;
printf("%d",age);

printf("c programming");

age=31;
printf("\nNew age:%d",age);


__________________________________
fourth.c

##################################
#include <stdio.h>
int main(){
	int firstNumber = 25;
	printf("\nFirst Number:%d",firstNumber);
	
	int secondNumber = firstNumber;
	
	printf("\nSecond Number:%d",secondNumber);
	
	
}


#declare multiple variables in single line

#include <stdio.h>
int main() {
    int age = 25;
		printf("%d",age);
		
		printf("\n C Programming!")
		
		age = 31;
		
		printf("\n New Age:%d",age);
    return 0;                
}

_______________________________________
#variable naming conventions

can't create variable name 


_________________________________________________
vi fourth.c


####data types




five.c

#include <stdio.h>
int main(){
	double number=12.45;
    printf("%1f",number); //12.450000(6 bytes)
    return 0;
}


float number1=10.9f;
printf("%f",number1);




______________________________________
age.c
//User input
#include <stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	printf("%d",age);
	scanf("%d",&age);
	
	printf("Age=%d",age);
	
	
	double number;
	char alpha;
	printf("Enter double input: ");
	scanf("%lf",&number);
	printf("\nYour double input is: %f",number);
	
}


__________________________________
userinput.c
####Take multiple inputs together

#include <stdio.h>
int main(){
  double number;
  char alpha;
  printf("Enter inputs: ");
  scanf("%1f %c" ,&number,&alpha);

}

//Comments
//-single line   ctrl+/
/* */- multiline //ctrl+shift+/



####C operators

arithmetic operators
+
-
*
/
%- remainder



//Calculator
#include <stdio.h>
int main(){
	int num1;
	int num2;	
	printf("Enter two numbers: ");
	scanf("%d %d",&num1 , &num2);
	
	
	printf("\nAddition is %d",num1 + num2 );
	printf("\nSubstraction is %d",num1 * num2 );
	printf("\nDivision is %.2f",(float)num1 / num2 );
	printf("\nMultiplication is %d",num1 % num2 );
}
_________________________________________________________________________________________________

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display options to user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover newline

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
