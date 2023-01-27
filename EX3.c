#include<stdio.h>
int main(){
	int s, i, n=0;
	double mt1, mt2, final, ave;
	printf("How many students are there in a class? ");
	scanf("%d", &s);
	for(i=0; i<s; i++){
	n= n+1;
	printf("Enter mt1, mt2 and final grades of %d. student:", n);
	scanf("%lf, %lf, %lf", &mt1, &mt2, &final);
	ave= (((mt1+ mt2)/2.0)+(final))/2.0;
	printf("Your grade= %.2lf", ave);
	if(ave>=60)
	printf(" You Pass!!\n");
	else
	printf(" You Fail!!\n");
}
return 0;
}
