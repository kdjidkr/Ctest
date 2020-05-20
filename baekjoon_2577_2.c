#include<stdio.h>
int main()
{
	int A, B, C, mul, temp;
	int table[10] = { 0 };
	scanf("%d%d%d", &A, &B, &C);
	mul = A * B * C;
	temp = mul;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (mul >= 1 && mul % 10 == i)
				table[i]++;
				mul /= 10;
		}
		printf("%d\n", table[i]);
		mul = temp;
	}
}