#include <stdio.h>
#include <math.h> //Needed for fucntions like sqrt(), etc.
#include <stdlib.h> //Needed for functions like abs(), rand(), etc.
#define PI 3.14159265358979324

/*
	function definitions go here

//def structure:
returnType functionName(param1Type param1Name, .... , paramNType, paramNName){
	local variable declarations
	
	C statements to execute on function call
	
	return (result {must match returnType});	
}

*/

//Formula: d = ((a+b)^2)/(sqrt(a)-c)
double formula1(double a, int b, double c){
	double d;
	
	d = ((a+b)*(a+b))/(sqrt(a)-c);
	
	return (d);
}

int main(void){
	double a = 4.6;
	double b = 1.4;
	double c = 2.5;
	double x = a-b;
	double y = -1.52;
	double d;
	
	/*
	 Math functions
	*/
	d = c+sqrt(x); //sqrt() -> square root 
	printf("the square root of %lf plus %lf is %lf\n", x, c, d);
 	
 	d = floor(a); //floor() -> truncate past decimal point
	printf("the floor of %lf is %lf\n", a, d);
 	
 	d = ceil(a); //ceil() -> truncate past decimal point, add 1
	printf("the ceiling of %lf is %lf\n", a, d);
 	
 	d = log(a); //log() -> log sub e
	printf("the ln of %lf is %lf\n", a, d);
 	
 	a = 1000;
 	d = log10(a); //log10() -> log sub 10
	printf("the log sub 10 of %lf is %lf\n", a, d);
 	
 	d = fabs(y); //fabs() -> absolute value
	printf("the absolute value of %lf is %lf\n", y, d);
 	
 	/*
	 Trig functions
 	*/
 	double theta_degrees = 45;
  	double theta_radians = theta_degrees*(PI/180);
  	
    //sin(), cos(), tan() take in angle in RADIANS
  	//asin(), acos(), atan() return angle in RADIANS
  	double sin_theta = sin(theta_radians);
  	double cos_theta = cos(theta_radians);
  	double tan_theta = tan(theta_radians);
 	double asin_theta = asin(sin_theta);
 	double acos_theta = acos(cos_theta);
 	double atan_theta = atan(tan_theta);
 	printf("sin,cos,tan of %lf degrees (%lf radians) is %lf,%lf,%lf\n",
	 theta_degrees, theta_radians, sin_theta, cos_theta, tan_theta);
	printf("asin,acos,atan of %lf degrees (%lf radians) is %lf,%lf,%lf\n",
	 theta_degrees, theta_radians, asin_theta, acos_theta, atan_theta);
	
	/*
	 Exponential/Power functions
	*/ 
	x = 2.0;
	y = 4.0;
	
 	d = exp(x); //exp() -> e^x
	printf("e^%lf is %lf\n", x, d);
	
	d = pow(x,y); //pow() -> x1^x2
	printf("%lf^%lf is %lf\n", x, y, d);
	
	/*
	 Other useful functions
 	*/
 	x = -2.0;
	
	d = abs(x); //abs() -> absolute value
	printf("absolute of %lf is %lf\n", x, d);
	
	d = rand(); //rand() -> random num b/w 0, RAND_MAX
	printf("random number between 0 and %d is %lf\n", RAND_MAX, d);
	
	/*
		functions
	*/	
	double f1 = formula1(10.0, 7, 20.0);
	printf("%lf\n", f1);
	
	/*
		bitwise operators:
		
		>> move all bits to the right
		<< move all bits to the left
		~ invert all bits
		
		https://ihypress.net/programming/c/11.php
	*/
	
	return (0);
}
