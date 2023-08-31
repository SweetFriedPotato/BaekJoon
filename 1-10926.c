#include<stdio.h>
int main() {
	char name[30];
	scanf("%s", name); //배열은 주소이므로 & 안씀.
	printf("%s?\?!", name);
	return 0;
}