#include<stdio.h>
int main(){
	int s, n=0, i=0;
	double sum1=0.0, sum2=0.0, ave_even, ave_odd;
	do{
		printf("Enter a number: ");
		scanf("%d", &s);
		if(s%2==0)
		{
			n=n+1;
			sum1= sum1+s;
			ave_even= sum1/n;
		}
		else if(s%2!=0, s>0)
		{
			i=i+1;
			sum2= sum2+s;
			ave_odd= sum2/i;
		}
	}while(s>0);
		printf("The average of even numbers that you have entered is %lf and\n the average of odd numbers that you have entered is %lf\n", ave_even, ave_odd);
	return 0;
}
