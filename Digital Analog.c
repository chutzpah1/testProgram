/*Enter a positive interger print the corresponding digit*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	//Declare Two-Dimensional Array
       char* digital_analog[][5] = {
		{ "*****", "*   *", "*   *", "*   *", "*****" },
		{ "*", "*", "*", "*", "*" },
		{ "*****", "    *", "*****", "*    ", "*****" },
		{ "*****", "    *", "*****", "    *", "*****" },
		{ "*   *", "*   *", "*****", "    *", "    *" },
		{ "*****", "*    ", "*****", "    *", "*****" },
		{ "*****", "*    ", "*****", "*   *", "*****" },
		{ "*****", "    *", "    *", "    *", "    *" },
		{ "*****", "*   *", "*****", "*   *", "*****" },
		{ "*****", "*   *", "*****", "    *", "*****" },	
	};
	char number[100];
	printf("Input: ");
	//Enter strings and split string into numbers
	gets_s(number, 100);
	for (int i = 0; i < 5; i++)
	{
    //Get length char number to print correct number
		for (int j = 0; j < strlen(number); j++)
		{
		    //'0' = 48, if number[j] = 3 = asciitable Decimal = 51 <==> 51 - 48 = 3
			int k = number[j] - '0';
			printf("%s  ", digital_analog[k][i]);
		}
		printf("\n");
	}
	return 0;
}
