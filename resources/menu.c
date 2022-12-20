void menu(){
	int ptn;
	do{
		system("cls");
		printf("\n");
		printf("\t-------[1] INICIAR UNA PARTIDA [1]-------\n");
		printf("\t---------[2] REGLAS DE JUEGO [2]---------\n");
		printf("\t-------------[3] CREDITO [3]-------------\n");
		printf("\t--------------[4] SALIR [4]--------------\n");
		printf("\n");
		printf("\t++++++++++[ESCRIBE UNA OPCION:]++++++++++\n");
		printf("\n");
		prompt();
		scanf("%i",&ptn);
		switch(ptn){
			case 1:
				system("cls");
				printf("\n+++++++++++++++++++++++++++++++++++++++++ PREPARADO?? ++++++++++++++++++++++++++++++++++++++++++++++++\n");
				board1();
				system("pause");
				break;
			case 2:
				system("cls");
				printf("\n ++++++++++++++++++++++++++++++++++++ [REGLAS DEL JUEGO] +++++++++++++++++++++++++++++++++++++++++++++\n");
				printf("\n ------------------------------------------BARCOS-----------------------------------------------------\n");
				printf("\n * 3 barcos de 2 casillas");
				printf("\n * 2 barcos de 3 casillas");
				printf("\n * 2 barcos de 4 casillas");
				printf("\n * 1 barcos de 5 casillas\n");
				printf("\n ----------------------------------------COMO JUGAR---------------------------------------------------\n");
				printf("\n - Cada jugador coloca sus barcos en las casillas del tablero (Cada jugador tiene su propio tablero)");
                printf("\n   El tablero de un jugador no puede ser visto por el otro jugador\n");
                printf("\n - Al inicio el jugador dice las coordenadas a la cual desea atacar\n");
                printf("\n - Si en las coordenadas se encuentra un barco o parte de el, entonces el barco recibe el dano y el ");
                printf("\n   jugador da una nueva coordenada\n");
                printf("\n - Si en las coordenadas no se encuentra un barco, entonces habra fallado el tiro\n");
                printf("\n - Cuando un barco ha recibido un dano en cada casilla que ocupa, entonces el barco se habra hundido.\n");
                printf("\n - Cuando un jugador dice sus coordenadas termina su turno.\n");
                printf("\n - Gana el jugador que hunda primero todos los barcos de su enemigo.\n");
                printf("\n");
				system("pause");
				break;
			case 3:
				system("cls");
				printf("\n ++++++++++++++++++++++ [CREDITOS] ++++++++++++++++++++++++++\n");
				printf("\n ----------------------UNIVERSIDAD---------------------------\n");
				printf("\n UNIVERSIDAD AUTONOMA DE AGUASCALIENTES\n");
				printf("\n ------------------------CARRERA-----------------------------\n");
				printf("\n INGENIERIA EN SISTEMAS (ISC)-PRIMER SEMESTRE-\n");
				printf("\n ----------------ESTE JUEGO FUE CREADO POR-------------------\n");
                printf("\n *HECTOR ABRAHAM AGUILAR GALINDO");
                printf("\n *CRISTIAN EMMANUEL AGUILAR NUNEZ");
                printf("\n *EDWIN ALEJANDO MORENDO CANCINO\n");
				printf("\n -----------------------PROFESORA----------------------------\n");
				printf("\n BLANCA GUADALUPE ESTRADA RENTERIA\n");
				printf("\n");
				system("pause");
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