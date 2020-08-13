#include<stdio.h>
#include<math.h>
int main() {
	double sumX = 0, sumXsqr = 0, n = 0, avg, sd;
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a == b) goto error;
	while (1) {
		printf("%d ", a);
		sumX += a;
		sumXsqr += a * a;
		n++;
		if (a == b) break;
		if (a < b) {
			a++;
		}
		else a--;
	}
	avg = sumX / n;
	sd = sqrt((n * sumXsqr - sumX * sumX) / (n * (n - 1)));

	printf("\nAverage = %.1lf\n", avg);
	printf("SD = %.2lf", sd);
	return 0;
error: printf("Error");
}