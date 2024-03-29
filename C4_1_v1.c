#include <stdio.h>
#include <stdbool.h> //Necessary for boolean true and false, and bool datatype
#include <math.h>

int main(void){
	/*
	Class 4 
	
	Control Structures
	- One entry, one exit point
	- 3 Types;
	- Sequence (default)
	- Selection (branches)	[needs conditional]
	- Repetition (loops)	[needs conditional]
	
	Updated order precedence calls
	2.1 - Function calls
	2.2 - Unary operators (-,+,!,(int),(double))
	2.3 - *,/,%
	2.4 - +,-
	2.5 - <, <=, >=, >
	2.6 - ==, !=
	2.7 - &&	(and)
	2.8 - ||	(or)
	2.9 - =		(assignment operator)
	
	Ex:
	*/
	int x = 3;
	int y = 4;
	int z = 10;
	bool w = false;
	
	w = x == 3 || y < z;
	/*
	[2.5] {y < z} >> True (1)
	[2.6] {x == 3} >> True (1)
	[2.8] {True (1) || True (1)} >> True (1)
	*/
	printf("1: %d\n",w); //True

	//Ex: Check if user is a minor or senor
	int age, is_senor;
	bool is_minor;
	printf("enter age:");
	scanf("%d", &age);
	is_senor = (age > 65);
	is_minor = (age < 18);
	printf("User is senor:%d | User is minor:%d.\n", is_senor, is_minor);
	
	/*
	Comparing characters
	'9' >= '0' is TRUE
	'a' < 'e'  is TRUE
	'B' < 'A'  is FALSE
	'Z' == 'z' is FALSE
	
	Ex: Check if letter is lowercase
	*/	
	char l = 'z';
	bool lower = l >= 'a' && l <= 'z';
	printf("2: %d\n", lower); //True
	
	//Ex: Check if l contains a letter
	l = '!';
	bool isLetter = (l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z');
	printf("3: %d\n", isLetter); //False
	
	/*
	The IF statement
	
	Two types:
	- Multiple alternatives
	- One alternative
	
	Ex: Multiple alternatives;
	Rest heart rate <= 75 >> we good
	Otherwise  >> we have a problem
	*/
	int rest_heart_rate = 74;
	if (rest_heart_rate <= 75){
		printf("We good.\n");
	} 
	else {
		printf("We have a problem.\n");
	}
	
	/*
	Ex: One alternative
	If number is positive or 0 >> print sqrt() of number
	*/
	double num = 100.0;
	if (num >= 0){
		double root = sqrt(num);
		printf("sqrt(%lf)=%lf\n", num, root);
	}
	
	/*
	Ex:
	Order 2 numbers
	*/
	x = 1;
	y = 0;
	
	if (x > y){
		int t = x;
		x = y;
		y = t;
	}
	
	/*
	else ifs are a thing
	Ex:
	*/
	int a = 1;
	if (a < 10)
		printf("a is less than 10");
	else if (a < 20)
		printf("a is bigger or equal to 10 and less than 20\n");
	else
		printf("a is bigger than or equal to 20\n");
	
	/*
	The conditional Operator (?)
	
	Syntax:
	(condition) ? True Option : False Option ;
	
	Ex:
	Time < 18 >> day
	Time >= 18 >> Evening
	*/
	int time = 19;
	(time < 18) ? printf("Day!\n") :  printf("Evening!\n");
	
	/*
	The Switch statement
	
	Syntax:
	switch (control variable)
	{
		case value1:
			//statements if control variable == value1;	
			break;
		case value2:
		case value3:
			//statements if control varaible == value2 || value3;
			break;
		default:
			//default case (control variable != valueN for all N)
	}
	
	Ex: Warship class program
	*/

	char class; /* the ship's class */

    /* Read first character of serial number */
    printf("Enter ship serial number > ");
    scanf(" %c", &class);

    /* Display 1st character and ship class */
    printf("Ship class is %c: ", class);
    switch (class) {
    case 'B':
    case 'b':
            printf("Battleship\n");
            break;
    case 'C':
    case 'c':
            printf("Cruiser\n");
            break;
    case 'D':
    case 'd':
            printf("Destroyer\n");
            break;
    case 'F':
    case 'f':
            printf("Frigate\n");
            break;
    default:
            printf("Unknown\n");
    }
	
	return 0;
}
