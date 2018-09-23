#include<stdio.h>    //optional to give

float area(int base, int height){
	return(0.5*base*height);
}

int main(){
	int base=0,height=0;
	float ar=0.0;
	printf("Enter the base and height of a triangle: \n");
	scanf("%d%d",&base,&height);
	ar = area(base,height);
	printf("\nArea of triangle to 3 decimal places = %.3f\n\n",ar);
	return 0;
}
