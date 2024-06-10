// C program to find the maximum number out of the three
// given numbers using if-else statement
#include <stdio.h>

void biggestof3()
{
	int A, B, C;

	printf("\nEnter the numbers A, B and C: \n");
	scanf("%d %d %d", &A, &B, &C);

	// finding max using compound expressions
	if (A >= B && A >= C)
		printf("%d is the largest number.\n", A);

	else if (B >= A && B >= C)
		printf("%d is the largest number.\n", B);

	else
		printf("%d is the largest number.\n", C);

	//return 0;
}
