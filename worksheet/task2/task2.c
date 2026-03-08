/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Joel Benjamin
 * ID: 201922915
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%s", hex);
	int value;
	int length = strlen(hex);

	// if input contains invalid hex digit
	if(strspn(hex, "0123456789ABCDEFabcdef") == length ){ // if the allowed letters = the length of the string then continue with the code
		for (int i= 0; i < length; i++){ 

			if (hex[i] >= '0' && hex[i] <= '9' )
				value = hex[i] - '0'; 

			else if (hex[i] >= 'A' && hex[i] <= 'F')
				value = hex[i] - 'A' + 10; // value = hex[i] - 65 + 10

			else if (hex[i]>= 'a' && hex[i] <= 'f')
				value  = hex[i] - 'a' + 10 ; // value = hex[i] -97 + 10
		decimal = decimal * 16 + value ;
		}
		printf("decimal:%ld\n", decimal);
	} // if  a number is given 
	else {
		printf("Error: Invalid Hexadecimal\n");
	}


	// printf("Error: Invalid Hexadecimal\n");
	
	
	// print the decimal result
	

	return 0;
}