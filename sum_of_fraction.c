#include<stdio.h>
#include<stdlib.h>

typedef struct fr
{
    int num,den;
}f;

int f_lcm(int a, int b){
	int min;
        min=(a>b)?a:b;
        while(1){
                if(min%a==0&&min%b==0){
                        return min;
                        break;
                }
       min++;
	}
}

int fract_sum(f n[], int a, int *lcm){
        int i,sum=0;
        for(i=0;i<a;i++)
            *lcm = f_lcm(*lcm,n[i].den);
        for(i=0;i<a;i++)
            sum += (*lcm/n[i].den)*n[i].num;
        /**for(i=0;i<a;i++)
                printf("%d+%d", n[i],d[i]);
        printf("=%d", sum);*/
        return (sum);
}

int main(){
	f n[20];
	int a,i,sum = 0,lcm=1;
	printf("Enter number of fraction: ");
	scanf("%d",&a);
	printf("Enter numerator and denominator respectively: \n");
	for(i=0;i<a;i++)
		scanf("%d%d",&n[i].num,&n[i].den);
	sum = fract_sum(n,a,&lcm);
	printf("%d/%d", n[0].num,n[0].den);
	for(i=1;i<a;i++)
                printf(" + %d/%d", n[i].num,n[i].den);
        printf("= %d/%d", sum,lcm);
	return 0;
}
