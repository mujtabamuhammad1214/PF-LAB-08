#include<stdio.h>
int main(){
	int n=5;
	for(int row=1;row<=n;row++){
		for(int s=0;s<n-row;s++){
			printf(" ");
		}
		for(int col=row;col>=1;col--){
			printf("*");
		}
		for(int col=2;col<=row;col++){
			printf("*");
		}
		printf("\n");
	}
	printf("-------------\n");
		for(int row=1;row<=n;row++){
		for(int s=row;s<n;s++){
			printf(" ");
		}
		for(int col=1;col<=(2*row-1);col++){
			printf("%d",col);
			if(col<(2*row-1)){
				printf(" ");
			}
		}
		
		printf("\n");
	}
		printf("-------------\n");
		for(int row=1;row<=n;row++){
		for(int s=row;s<n;s++){
			printf(" ");
		}
		for(int col=1;col<=(2*row-1);col++){
			printf("%c",'A' +col-1);
			if(col<(2*row-1)){
				printf(" ");
			}
		}
		
		printf("\n");
	}



}