#include<stdio.h>

 int main(){
 	
 	int num,count;
 	
 	printf("Enter the Number:");
 	scanf("%d",&num);
 	
 	while (num!=0){
 		
 num/=10;
 		count++;
	 }
	 	printf("The num of Digit is:%d",count);
 }
