#include<stdio.h>

int main() {
	int x[50], n, y[50], a = 2, l = 0;
	x[0] = 0;
	x[1] = 1;
	x[2] = 1;
	x[3] = 2;
	for (n = 2; n < 50; n++) {
		x[n] = x[n - 1] + x[n - 2];
		a += x[n];
		if (a > 4000000) {
			break;
		}
		if (a % 2 == 0) {
			l += a;
		}
		printf("%d ", a);

	}
	l = l + x[3]
		printf("\n%d", l);
	return 0;
}