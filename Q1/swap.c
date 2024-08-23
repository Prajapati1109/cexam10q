#include<stdio.h>

 int main(){
 	
 	int a=11,b=9;
 	
 	printf("Before swap:\nA=%d\nB=%d\n",a,b);
 	
 	 a=a+b;
  	 b=a-b;
  	 a=a-b;
  	 
  	 printf("After swap:\nA=%d\nB=%d",a,b);
 }
