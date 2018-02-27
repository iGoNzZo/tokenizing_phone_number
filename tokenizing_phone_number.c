/* 8.14.c program to tokenize a phone number 
 * Steven Gonzalez 009387092 Hw3
 */
#include <stdio.h>
#include <string.h>

//function declarations 
char number[14];
char *point;
char *areaCode;
char *num1;
char *num2;

//main function 
void main()	{
	printf("Enter a phone number in: (xxx)xxx-xxxx format: \n");
	fgets(number, 14, stdin); // get input from user 
	
	//takes the token of number and set it to point variable 
	point = strtok(number,"()-");
	
	int i = 0;
	//while point pointer != null keep looping 
	while(point != NULL)	{
		if(i == 0)	{
		//if i = 0, token = areaCode 
			areaCode = (point);
		}
		else if(i == 1)	{
		//if i = 1, token = num1
			num1 = (point);
		}
		else if(i == 2)	{
		//if i = 2, token = num2 
			num2 = (point);
		}
		
		//set token to next word 
		point = strtok(NULL,"()-");
		i++;	//incrememnt i to keep track of number type 
	}// end while loop 
	
	//variable conversion and assignment 
	int area = atoi(areaCode);
	unsigned long num = atoi(strcat(num1, num2));
	
	//print results 
	printf("Area Code: %d\n", area);
	printf("Concated num1 & num2: %lu\n", num);
} // end of main function 


