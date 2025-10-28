#include<stdio.h>
int main(){
	int cinema[3][3]={
		{1,0,1},
		{0,0,1},
		{1,1,0},
	};
	int i,j,count=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d",cinema[i][j]);
			if(cinema[i][j]==0){
				count++;
			}
			
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(cinema[i][j]==0){
				printf("Row %d and seat number %d is empty\n",i+1,j+1);
			}
		}
	}
	printf("Available seats=%d",count);
}