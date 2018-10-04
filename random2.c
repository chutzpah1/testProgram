
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char* argv[])
{
	
	int a[3][3] = { 0 };
	a[1][2] = 4 ;//Chon vi tri ngau nhien cho so bat ky
	/*int k = 2;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}*/
	
	//Tao 1 mang luu tru cac so
	int b[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int k = 0; k < 9; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				//Kiem tra xem element co bang gia tri nao trong mang da tao neu co setb[k] = 0
				if (a[i][j] == b[k])
				{
					b[k] = 0;
				}
			}
		}

	}
	for (int k = 0; k < 9; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (a[i][j] == 0 && b[k] > 0)
				{
					a[i][j] = b[k];
					b[k] = 0;
				}
			}
		}

	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	
	
}
