#include<stdio.h>
#include<time.h>
int main(){
	int img[4][4]={
	{1,0,1,0},
	{0,1,0,1},
	{1,1,0,0},
	{0,0,1,1},
	};
	int i,j,white=0;
	printf("-----------ORIGINAL IMAGE-----------\n");
	    for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%2d",img[i][j]);
		}
		printf("\n");
	}
	printf("-----------INVERTED IMAGE-----------\n");
		for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(img[i][j]==1){
				img[i][j]=0;
				white++;
			}
			else{
				img[i][j]=1;
			}
		}
	}
		for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%2d",img[i][j]);
		}
		printf("\n");
	}
	printf("White Pixels in image =%d",white);		
	
}