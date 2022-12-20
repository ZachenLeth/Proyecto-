#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int f=5,c=2;
	char mat[f][c];
	int i,j,op,fil,col;
	for(fil=0;fil<f;fil++){
		for(col=0;col<c;col++){
			mat[fil][col]="";
		}
	}
	printf("\nMatriz Llena\n");
	for(fil=0;fil<f;fil++){
		for(col=0;col<c;col++){
			printf("[%i]",mat[fil][col]);
		}
		printf("\n");
	}
}