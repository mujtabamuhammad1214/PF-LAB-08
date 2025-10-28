#include<stdio.h>
int main(){
	int temp[4][4]={
		{12,15,10,9},
		{11,8,12,13},
		{14,13,9,7},
		{16,11,10,8},
	};
	int rows=4,cols=4,i,j;
	for( i=0;i<rows;i++){
		for( j=0;j<cols;j++){
	   int current=temp[i][j];
	   int iscold=1;
	   if(i>0 && temp[i-1][j]<=current)
	   iscold=0;
	    if(i<rows-1 && temp[i+1][j]<=current)
	   iscold=0;
	    if(j>0 && temp[i][j-1]<=current)
	   iscold=0;
	    if(j<cols-1 && temp[i][j+1]<=current)
	   iscold=0;
	   if(iscold)
	   printf("At position (%d,%d) with temperature %d\n", i+1,j+1,current);
	   	}
	}
}