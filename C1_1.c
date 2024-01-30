#include <stdio.h>
//other includes
#define PI 3.1415927
//other defines

int main(void){
	//3 main variable types we use
	char myChar = '!';
	int a = 10; //if you initialize without assigning, 'a' contains whatever garbage was in memory before, NOT 0
	double b = 2.52;
	int y = 3;
	//operations
	//BINARY operators (2 elements)
	double c = a+b; //addition
	double d = a-b; //subtraction
	double e = a*b; //multiplication
	double f = a/b; //division
	double g = a%y; //must be int%int
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
	printf("%lf.\n",i);	//Numbers can be replaced in strings
	printf("g = %lf and h= %lf.\n",g,h); //Multiple numbers can be there
	/*
	Placeholders:
	%c = char
	%d = int
	%f = float
	%lf = double (long float)
	
	also,
	%s = string
	%e = scientific notation
	%p = pointer address
	%x = hex
	*/
	
	//PRINTING
	a = 347;
	b = -34.626;
	int z = 2;
	
	//Ints
	printf("%d\n", a);			//regular print for int
	printf("%7d\n", a);			//print, ensuring whole sequence takes up 7 chars (fill with spaces)
	printf("%2d\n",a);			//if not long enough, ignore limit
	
	//Doubles
	printf("%lf\n",b);			//regular print for double
	printf("%6.1lf\n",b);		//whole thing takes 6 chars, with 1 dec space after 
	printf("%1.1lf\n",b);		//if not long enough, ignore limit
	printf("%.2lf\n",b);		//2 decimal spaces, no len limit
	printf("%0.2lf\n",b);		//2 decimal speces, no len limit
	
	/*
	TLDR;
	printf("%{length of whole string}.{num decimals to truncate to}{placeholder}",var);
	*/
	
	//SCANF
	long miles = 0;					//THE & SIGN IS VERY IMPORTANT
	scanf("Input number of miles:%lf", &miles); //User input
	double miles_times_pi = miles*PI;
	printf("the number of miles times pi is %lf!\n",miles_times_pi);
	
	//FILES
	//Reading file
	
	//1] Declare file
	FILE *my_input_file;
	//2] Open file
	my_input_file = fopen("C1_1_DATA_1.txt", "r"); //r is read; file must exist
	//3] Read file
	int temp_var = 0;
	fscanf(my_input_file, "%d", &temp_var);
	//4] Close file
	fclose(myInputFile);
	//Use data
	fprintf("%d\n.",temp_var);
	
	//Writing file
	//1] Declare file
	FILE *my_output_file;
	//2] Open file
	my_output_file = fopen("C1_1_DATA_2.txt", "w"); //w creates a new file on the disk
	//3] Write to file
	fprintf(my_output_file, "%d", temp_var);
	//4] Close file
	fclose(my_output_file);
	
	return(0); //at end, 0 means no errors
}