#include<stdio.h>
int main() {
	int i,j;
int arr[3][3]= {
	{12,45,32},
	{2,13,45},
	{56,72,41},
	};
int max=arr[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
	}
	}
	printf("%d",max);
}

