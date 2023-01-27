#include<stdio.h>
int main (){
	int i, n, s;
	printf("Enter an integer: ");
	scanf("%d", &i);
	printf("Even integers between 1 to %d: ", i);
	for(s=1; s<i; s++)
	{
		if(s%2==0)
		printf("%d ", s);
	}
	return 0;
}
