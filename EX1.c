#include<stdio.h>
int main(){
	int rn;
	double sum=0, i;
	do{
		printf("Enter a number: ");
		scanf("%lf", &i);
		sum= sum+i;
	}while(i!=0);
	printf("Sum = %.2lf", sum);
	return 0;
}
