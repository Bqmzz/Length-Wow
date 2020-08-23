#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int level;
	printf("Enter fav number : ");
	scanf_s("%d", &level);
	for (int row = 0; row < level; row++) {
		for (int star = level - row; star > 0; star--) {
			printf("Wow");
		}
		printf("\n");
	}
	return 0;
}
