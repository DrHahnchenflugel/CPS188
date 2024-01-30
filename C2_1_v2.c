#include <stdio.h>
//other includes
#define PI 3.1415927
//other defines

int main(void) {
	//3 main variable types we use
	char myChar = '!';
	int a = 10; //if you initialize without assigning, 'a' contains whatever garbage was in memory before, NOT 0
	double b = 2.52;
	int y = 3;
	//operations
	//BINARY operators (2 elements)
	double c = a + b; //addition
	double d = a - b; //subtraction
	double e = a * b; //multiplication
	double f = a / b; //division
	double g = a % y; //must be int%int
	//int?int=int, double?double=double, double/int?int/double=double

	//UNARY operators (1 element)
	double h = -g; //makes negative
	double i = +h; //has no effect, doesnt make positive

	//ORDER:
	/*
	1] PARENTHESES (BRACKETS)
	2] UNARY +,- done right to left
	3] *,/,%	  done left to right
	4] BINARY +,- done left to right
	*/

	//INACCURACIES:
	/*
	- Representational error (datatype)
	- Cancellation error (vastly different magnitudes)
	- Arithmetic Underflow (very small result becomes 0)
	- Arithmetic Overflow (very large result)
	*/

	//PRINTF
	//\n = newline at the end (press enter, basically)
	printf("Hello!\n"); //Plain text strings
	printf("%lf.\n", i);	//Numbers can be replaced in strings
	printf("g = %lf and h= %lf.\n", g, h); //Multiple numbers can be there
	
	return (0);
}