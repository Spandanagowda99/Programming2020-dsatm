#include<stdio.h>
#include<stdlib.h>
//int *a;

int sum(int n, int a[]){
	int sum=0,i;
	for(i=0;i<n;i++)
		sum += *(a+i);
	return sum;
}

int main(){
	int n,i,*a;
	printf("Enter number of elements: \n");
	scanf("%d",&n);
	a = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	printf("Sum = %d\n",sum(n,a));
	return 0;
}
