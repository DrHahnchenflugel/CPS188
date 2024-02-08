#include <stdio.h>

//REPETITION, LOOP STATEMENTS

int main(void){
	/*
		For, while, do-while loops
	
		Loop control types:
		- Counting loops (repeat N times)
		- Sentinel loops (repeat until N value is encountered)
		- EOF loops (repeat until EOF (end of file) encountered)
		- Input validation loops (repeat until valid data is entered)
		- General condition loops (repeat until condition is false)
	
		For loops
		Syntax:
		for (initialization; condition; update){
			statements to execute if condition is true;
		}
		
		Ex:
		Print all numbers from 1 to 10
	*/
	int i;
	for (i = 1; i <= 10; i+=1){
		printf("%d ", i);
	}
	printf("\n");

	/*
		Ex: find sum of all numbers 1 to 10
	*/
	int sum = 0;
	for (i = 1; i <= 10; i += 1){
		sum += i;
		printf("After adding %d, sum is %d \n", i, sum);
	}
	printf("\nSum of all numbers 1 to 10 is %d\n", sum);
	
	/*
		While loops
		Syntax:
		while (condition){
			statements to execute if condition is true;	
		}
	
		Ex:
		Double numbers until value is greater than 1000
	*/
	int n = 1;
	while (n <= 1000){
		printf("%d*2 ", n);
		n *= 2;
		printf("is %d\n", n);
	}
	
	// Ex: Calculating factorial with while loop
	n = 10;
	int fact = 1;
	printf("factorial of %d is ",n);
	while (n >= 1){
		fact *= n;
		n -= 1;
	}
	printf("%d\n", fact);
	
	// Ex: Calculating factorial with for loop
	fact = 1;
	for (n = 10; n >= 1; n -= 1){
		fact *= n;
	}
	printf("factorial of 10 is %d\n",fact);
	
	// Ex: Sentinel controlled loop
	sum = 0;
	int num;
	
	printf("Enter a number (enter 0 to finish): ");
	scanf("%d", &num);
	
	while (num != 0){
		sum += num;
		printf("Current sum is %d\n", sum);
		printf("Enter a number (enter 0 to finish): ");
		scanf("%d", &num);	
	}
	printf("Sum is %d\n", sum);
	
	// Ex: EOF Controlled loop
	sum = 0;
	num = 0;
	FILE* in_file;
	in_file = fopen("C5_1_DATA_1.txt", "r");
	fscanf(in_file, "%d", &num);
	sum += num;
	while (!feof(in_file)){ //While not at EOF function
		fscanf(in_file, "%d", &num);
		sum += num;				
	}
	printf("Sum is %d\n", sum);
	fclose(in_file);
	
	
	/*
		Checking result of scanf/fscanf
		result = fscanf(in_file, "%d%d%d", &a,&b,&c); //Attempt to read 3 ints
		
		result = number of variables filled by reading statement
		if result == -1, EOF reached
	
		Ex:
	*/
	int a = 0;
	int b = 0;
	char c;
	int d = 0;
	
	in_file = fopen("C5_1_DATA_2.txt", "r");
	int result = fscanf(in_file, "%d%d%d", &a,&b,&c);
	printf("result 1:%d\n", result); //2, bc a and b can be filled with ints
	fclose(in_file);
		
	in_file = fopen("C5_1_DATA_2.txt", "r");
	result = fscanf(in_file, "%d%d%c", &a,&b,&c);
	printf("result 2:%d\n", result);
	fclose(in_file);
	
	/*
		Best practice EOF Loop
	*/
	num = 0;
	sum = 0;
	in_file = fopen("C5_1_DATA_1.txt", "r");

	while (fscanf(in_file,"%d",&num) != EOF){
		sum += num;
	}	
	fclose(in_file);
	printf("sum is %d\n", sum);
	
	/*
		Nested loops
		
		Ex: 12x12 times table
	*/
	
	int x, y;	
	
	for (y = 1; y <= 12; y += 1){
		for (x = 1; x <= 12; x += 1){
			printf("%4d",x*y);
		}
		printf("\n");
	}
	
	/*
		Do-While loops
		
		Ex: Input validation
	*/
	n = 0;
	do{
		printf("Enter a positive number: ");
		scanf("%d",&n);
	} while (n <= 0);
	
	/*
		Flaq controlled variables
		
		Ex: Input validation
	*/
	
	char letter;
	int FLAG;	
	do{
		printf("Enter an uppercase letter: ");
		scanf("%c",&letter);
		FLAG = (letter >= 'A' && letter <= 'Z');
	} while (!FLAG);
	
	return 0;	
}
