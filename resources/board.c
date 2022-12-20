void board1(){
	int f=15,c=15,fil,col,x,y;
	char mat[f][c],ocean="/";
	for(fil=0;fil<f;fil++){
		for(col=0;col<c;col++){
			mat[fil][0]=fil;
			mat[0][col]=col;
		}
	}
	for(fil=1;fil<f;fil++){
		for(col=1;col<c;col++){
			mat[fil][col]=ocean;
		}
	}
	printf("\n");
	for(fil=0;fil<f;fil++){
		for(col=0;col<c;col++){
			printf("\t%i",mat[fil][col]);
		}
		printf("\n");
	}
	printf("\n");
	prompt();
	printf("Donde quieres posicionar tu barco: ");
	printf("\n");
	prompt();
	printf("coordenada x: ");
	scanf("%i",&x);
	printf("\n");
	prompt();
	printf("coordenada y: ");
	scanf("%i",&y);
}