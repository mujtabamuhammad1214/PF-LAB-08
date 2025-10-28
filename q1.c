#include<stdio.h>
int main(){
	int arr[3][4]={
		{85,92,78,90},
		{88,76,95,84},
		{90,85,88,9},
	};
	int i,j;
	for(i=0;i<3;i++){
		int sum=0;
		for(j=0;j<4;j++){
			sum+=arr[i][j];
		}
		float avg=sum/4.0;
		printf("The average of class%d = %.2f\n",i+1,avg);
	
	}
}