#include <stdio.h>
extern int add(int, int);

int main(void) {
	int int_1 = 9;
	int int_2 = 10;
	int sum = add(int_1, int_2);
	printf("%d + %d = %d\n", int_1, int_2, sum);
	return 0;
}	


