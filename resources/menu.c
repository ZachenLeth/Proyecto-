void menu(){
	int ptn;
	do{
		system("cls");
		printf("\n");
		printf("\t++++++++++[ESCRIBE UNA OPCION:]++++++++++\n");
		printf("\n");
		printf("\t-------[1] INICIAR UNA PARTIDA [1]-------\n");
		printf("\t---------[2] REGLAS DE JUEGO [2]---------\n");
		printf("\t-------------[3] CREDITO [3]-------------\n");
		printf("\t--------------[4] SALIR [4]--------------\n");
		printf("\n");
		prompt();
		scanf("%i",&ptn);
		switch(ptn){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				system("exit");
				break;
			default:
				system("cls");
				prompt();
				printf("Escriba una opcion valida: \n");
				printf("\t\t[1]\n");
				printf("\t\t[2]\n");
				printf("\t\t[3]\n");
				printf("\t\t[4]\n");
				printf("\n");
				system("pause");
				break;
			return menu();
		}
	}while(ptn!=4);
}