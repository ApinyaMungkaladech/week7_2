#include<stdio.h>
int highnum();
int main() {
	printf("%d", highnum());
}

int highnum() {
	int n[2];
	for (int i = 0; i < 2; i++) {
		printf("Enter number : ");
		scanf_s("%d", &n[i]);
	}
	if (n[0] > n[1])
		return n[0];
	else return n[1];
}