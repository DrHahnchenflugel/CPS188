#include <stdio.h>
#include <math.h>

//POINTERS & MODULAR PROGRAMMING

/*
Functions with multiple addresses

Ex: Something gives back 3 results: sign, whole part, fraction	
Takes in a double, splits it into the 3 return parts

So essentially what we're going to do is provide 2 parameters as pointers so
we only worry about returning one thing

Ex: double number, int* whole, double* fraction --> char sign
*/
char splitDouble(double myNumber, int* whole, double* fraction){
	char sign;
	if (myNumber > 0){
		sign = '+';
	}
	else if (myNumber < 0){
		sign = '-';
	}
	else {
		sign = ' ';
	}
	
	*whole = abs((int)myNumber);
	*fraction = fabs(myNumber) - *whole;
	
	return (sign);
}	

/*
	You can put a function header as a parameter
*/
void doCoolStuff(double f1(double f1_arg), double pt1, double pt2, double pt3){
	printf("f(%.5lf) = %.5lf\n", pt1, f1(pt1));
	printf("f(%.5lf) = %.5lf\n", pt2, f1(pt2));
	printf("f(%.5lf) = %.5lf\n", pt3, f1(pt3));
}

int main(void){
	/*
	Pointers:
	
	Memloc of variable
	
	Eg:
	int x = 8;
	
	8 is stored at location &x.
	In order to store this fact in a variable, we can put int*, double*, char*
	
	(int* a = int * a = int *a)
	
	Ex: int* xPtr = &x;
	
	Reading value of pointer: 
	* operator will go to address and read contents. Eg: xPtr = &x, *xPtr = x.
	
	*/
	
	int x = 8;
	int* xPtr = &x;
	printf("%p\n", xPtr);	// Prints HEX memloc
	printf("%d\n", *xPtr);  // Prints value AT memloc
	
	// Ex with split double
	double num, frac;
	int whole;
	char s;
	
	num = -3.141592922992929292929929292929292929;
	s = splitDouble(num, &whole, &frac);
	printf("%c || %d || %lf\n", s, whole, frac);
	
	/*
		Scopes exist
	*/
	
	// Ex with function in function args
	doCoolStuff(sqrt, 25.0, 49.0, 2193.123);
	doCoolStuff(log, 25.0, 49.0, 2193.123);
	
	
	/*
	Debug Types;
	- Unit testing > testing smallest part of program
	- System testing > testing program in context it will beused
	- Acceptance testing > testing pgm to show it satisfies functional requirements
	
	*/
	
	return (0);
}
