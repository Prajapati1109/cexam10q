#include<stdio.h>
int main(){
	int num,i,sum=0;
	printf("Enter The Number:");
 	scanf("%d",&num);
 	scanf("%d",&num);
 	for(i=1;i<=num;i++){
 		if(i%2!=0){
 			sum+=i;
		 }
	 }
	 printf("Sum=%d",sum);
}
