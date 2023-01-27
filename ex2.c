#include<stdio.h>
int main(){
	int i, n, c;
	printf("How many numbers you want to enter? ");
	scanf("%d", &i);
	for(n=0; n<i; n++){
		printf("Enter a number: ");
		scanf("%d", &c);
		if(c<0)
		printf("%d is a negative integer\n", c);
		else if(c>0)
		printf("%d is a positive integer\n", c);
		else if(c==0)
		printf("%d is zero\n", c);
	}
	return 0;
}
