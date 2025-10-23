#include<stdio.h>
int main(){
		int i,j,num;
		printf("Enter Number for table:");
		scanf("%d",&num);	
		for(i=1;i<=num;i++){
			printf("%2d:",i);
		for(j=1;j<=num;j++){
			printf("%4d",i*j);
		}
		printf("\n");
	}
}
