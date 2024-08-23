#include<stdio.h>

int main(){
	
	int i,number,reverse,reminder;
	
//getting input from user
	printf("Enter number:");
	scanf("%d",&number);

//using a loop
	for(i=number;number!=0;number=number/10){
		
	  reminder=number%10;
	
	reverse=reverse*10+reminder;
	
	}
//answer
		printf("%d",reverse);
}
