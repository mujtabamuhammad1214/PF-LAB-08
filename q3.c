#include<stdio.h>
int main(){
	char arr[5][5];
	int students=0,empty=0,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if((i+j)%2==0){
				arr[i][j]='x';
				students++;
			}
			else{
				arr[i][j]='o';
				empty++;			}
		}
	}
	printf("Classroom Seating Chart:\n===========================\n(x = students , o= Empty)\n");
	for(i=0;i<5;i++){
		printf("Row %d ",i+1);
		for(j=0;j<5;j++){
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nSummary:\nStudents seated:%d\nEmpty desks :%d\nTotal desks :\n",students ,empty,25);
	return 0;
}