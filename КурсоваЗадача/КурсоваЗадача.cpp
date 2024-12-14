#include <iostream>
#include <stdio.h>

#define SIZE 20

void inputArray(float array[])
{
	printf("Enter 20 float numbers\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("array[%d]: ", i);
		scanf_s("%f", &array[i]);
	}
}

void oddNumbers(float array[])
{
	printf("You will receive odd numbers\n");
	for (int i = 0; i < SIZE; i++)
	{
		if ((int)array[i] % 2 != 0)
		{

			printf("array[%d] -> %.2f\n", i,array[i]);

		}
		
    }
}

float SumEvenNumber(float array[])
{
	float sum = 0.00;
	for (int i = 0; i < SIZE; i++)
	{
		if ((int)array[i] % 2 == 0)
		{
			sum += array[i];
		}
	}
	return sum;
}

int main()
{
	float array[SIZE];

	inputArray(array);

	oddNumbers(array);

	float sum = SumEvenNumber(array);
	printf("Sum of all even numbers -> %.2f\n", sum);
}