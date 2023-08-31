#include<stdio.h>
int main() {
	long a, b, c = 0;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", a + b + c); //long int => lld
	return 0;
}