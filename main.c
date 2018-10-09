#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
int main(int argc, char* argv[])
{
	srand(time(NULL));
	//Array select for human and computer
	char *game[] = { "Nai", "Bau", "Ga", "Ca", "Cua","Tom" };
	//Array money random only for computer!
	int money[] = { 1000, 2000, 3000, 4000, 5000, 10000,100000, 200000 };
	Sleep(1000); printf("."); Sleep(1000); printf("."); Sleep(1000); printf("."); Sleep(1000); printf(".\n");
	printf("\t\t--------|Welcome to play Game|-->Bau Cua<--|--------\n");
	printf("1.Nai\t\t2.Bau\t\t3.Ga\n4.Ca\t\t5.Cua\t\t6.Tom\n");
	//Array select of human
	int human[6] = { 0 };
	//Select turn pile of human(selectH)
	int selectH = 0;
	//Array money pile of human(selectMoneyH)
	int selectMoneyH[6] = { 0 };
	printf("You want to choose the turns: ");
	scanf_s("%d", &selectH);
	//Turn pile not too limit of variable selectH
	for (int i = 0; i < selectH; i++)
	{
		//Select mascot as you like (1.Nai 2.Bau 3.Ga 4.Ca 5.Cua 6.Tom)
		printf("Your next turn:%d  \n",i + 1);
		//Save select mascot your in human[i]
		scanf_s("%d", &human[i]);
		//Money pile of human
		printf("Money pile turn %d:  \n", i + 1);
		//Save money pile your in array selectH[i]
		scanf_s("%d", &selectMoneyH[i]);
	}
	for (int i = 0; i < selectH; i++)
	{
		printf("You select '%s' and money pile '%d'\n", game[human[i] - 1], selectMoneyH[i]);
	}
	//Array select of computer
	int computer[6] = { 0 };
	//Array select money of computer
	int selectMoneyC[6] = { 0 };
	//Random select turn computer
	int selectC = rand() % 5 + 1;
	for (int i = 0; i < selectC; i++)
	{
		//Random select mascot of computer
		computer[i] = rand() % 5;
		//Random select money pile of computer from array money[]
		selectMoneyC[i] = money[rand() % 8];
	}
	for (int i = 0; i < selectC; i++)
	{
		printf("Computer select '%s' and money pile '%d'\n", game[computer[i]], selectMoneyC[i]);
	}
	//Variable dice
	int dice[3] = { 0 };
	//Array count of human(tempH) and computer(tempC)
	int tempH[6] = { 0 }, tempC[6] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		dice[i] = rand() % 6 ;
		printf("Dicing....\n");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		printf("Dice %d: %s\n", i + 1, game[dice[i]]);
	}
	//Calculate
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < selectH; j++)
		{
			//Check value of dice has some select human
			if (game[dice[i]] == game[human[j] - 1])
            //Increase value corresponding at tempC[i]
				tempH[j]++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < selectC; j++)
		{
			//Check value of dice has some select human
			if (game[dice[i]] == game[computer[j]])
            //Increase value corresponding at tempC[i]
				tempC[j]++;
		}
	}
	for (int i = 0; i < selectH; i++)
	{
   
	    printf("Money earned of Human '%s' is %d\n",game[human[i] - 1], selectMoneyH[i] * tempH[i]);
	}
	printf("\n\n");
	for (int i = 0; i < selectC; i++)
	{
		printf("Money earned of Computer '%s' is %d\n", game[computer[i]], selectMoneyC[i] * tempC[i]);
	}
	return 0;
}
