#include<stdio.h>
int main(){
	int r;
	float area;
	printf("Enter Radius:");
	
	scanf("%d",&r);
	
	area=((3*3.14*r*r*r)/4);
	
	printf("Answer=%.3f",area);
}
