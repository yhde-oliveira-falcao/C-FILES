//==============================================
// Name:        	
// Student Number: 
// Email:         
// Section:        NUU
// Workshop:       4 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:


#include <stdio.h>
int main(void)
{
	int high[10], low[10], i, daysn, highday = 0, htemp = -40, ltemp = 40, lowday = 0;
	int daystprint, sumlow = 0, sumhigh = 0;
	double avgdtp;
	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	//FIRST PART
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &daysn);
	printf("\n");

	while (3 > daysn || daysn > 10) //condition to restric the number of days between 3 and 10
	{
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &daysn);
		printf("\n");
	}

	for (i = 1; i <= daysn; i++)
	{
		printf("Day %d - High: ", i);
		scanf("%d", &high[i - 1]); //We use [i-1] because inn an array the values are stored from 0 to daysm, so if we just put i the value will be stored on the location number 1 and not number 0.

		printf("Day %d - Low: ", i);
		scanf("%d", &low[i - 1]);
	}

	printf("\n");
	printf("Day  Hi  Low\n");

	for (i = 1; i <= daysn; i++)
	{
		printf("%d    %d    %d\n", i, high[i - 1], low[i - 1]);
	}

	//conditions to prit the highest and lowest temps and days

	for (i = 1; i <= daysn; i++)
	{

		if (high[i - 1] > htemp)
		{
			htemp = high[i - 1];
			highday = i;

		}

	}
	printf("\nThe highest temperature was %d, on day %d\n", htemp, highday);

	for (i = 1; i <= daysn; i++)
	{
		if (low[i - 1] < ltemp)
		{
			ltemp = low[i - 1];
			lowday = i;

		}

	}
	printf("The lowest temperature was %d, on day %d\n", ltemp, lowday);


	//SECOND PART

	printf("\nEnter a number between 1 and %d to see the average temperature", daysn);
	printf(" for the entered number of days, enter a negative number to exit: ");
	scanf("%d", &daystprint);
	printf("\n");

	//Condition to restrict the number of days entered to the number value.
	while (daystprint == 0 || daystprint > daysn)
	{
		printf("Invalid entry, please enter a number between 1 and %d, inclusive: ", daysn);
		scanf("%d", &daystprint);
		printf("\n");
	}

	while (daystprint <= daysn && daystprint > 0)
	{
		for (i = 0; i < daystprint; i++)
		{
			sumlow += (low[i]);
			sumhigh += (high[i]);
			avgdtp = (double)(sumlow + sumhigh) / (daystprint * 2);
		}

		//printf("%d\n", sumhigh); Testing to see if the sum is correct 
		printf("The average temperature up to day %d is: %.2lf\n", daystprint, avgdtp);
		printf("\nEnter a number between 1 and %d to see the average temperature for ", daysn);
		printf("the entered number of days, enter a negative number to exit: ");
		scanf("%d", &daystprint);
	}

	if (daystprint == -1)

		printf("\nGoodbye!\n");

	return 0;
}