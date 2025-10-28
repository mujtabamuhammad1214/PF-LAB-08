#include<stdio.h>
int main(){
	int n=5,i,j,s;
	for(i=1;i<=5;i++){
		for(s=n;s>i;s--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("-----------\n");
		for(i=1;i<=5;i++){
		for(s=n;s>i;s--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
		printf("-----------\n");
		for(i=1;i<=5;i++){
		for(s=n;s>i;s--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%c",'A'+j-1);
		}
		printf("\n");
	}
}