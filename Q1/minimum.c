#include<stdio.h>

 int main(){
 	
 	 int a,b,c;
 	 
 	printf("Enter the First Number:");
 	scanf("%d",&a);
 	printf("Enter the First Number:");
 	scanf("%d",&b);
 	printf("Enter the First Number:");
 	scanf("%d",&c);
 	
 	if(a<c){
		if(a<b){
			printf("");
		}
		else{
			printf("b");
		}
	}
	else if(b<c){
		printf("b");
	}
	else{
		printf("c");
	}
	
 }
