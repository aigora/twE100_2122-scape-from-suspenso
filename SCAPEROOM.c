#include <stdio.h>
#include <conio.h>//libreria para no pulsar enter con los scanf en movimientos
#include "Blackjack.h"

typedef struct {
int x,y;
}punto;

typedef struct {
char nombre[20];
char dificultad[10];
int puntuacion;
}jugador;

int movimiento_pantalla(int dificultad);

int pantalla(punto xy, int dificultad);//Funci�n para imprimir la matriz de la pantalla principal

void horizontal(punto *xy, punto *punto_siguiente, int n);//Funci�n para controlar el desplazamiento horizontal, siendo xy el punto, y n el n�mero de unidades a desplazar
void vertical(punto *xy, punto *punto_siguiente, int n);//Funci�n para controlar el desplazamiento vertical, siendo xy el punto, y n el n�mero de unidades a desplazar


int main()
{
    int dificultad, puntuacion=0;
    jugador jugador_nuevo;
    printf("%c%cBIENVENIDO AL SCAPE ROOM SCAPE FROM SUSPENSO!!\n", 173,173);
    printf("En este scape room deberas poner a prueba tus habilidades para superar todas los retos y acertijos que te encontraras\n");
    printf("Pero antes, deberas elegir la dificultad a la que deseas jugar y registrarte como usuario\n");
    printf("Por favor, escribe a continuacion tu nombre\n");

    scanf("%19s", jugador_nuevo.nombre);
    //FICHERO
    FILE *fichero;

    if (fichero == NULL) {// Si el resultado es NULL mensaje de error
        printf("No se ha podido abrir el fichero correctamente\n");
        return -1;
    }
    else{
    fichero = fopen("Partidas guardadas.txt", "a");

   do {
     printf("Elige la dificultad a la que quieres jugar\n");
     printf("(1)FACIL\n");
     printf("(2)MEDIO\n");
     printf("(3)DIFICIL\n");



       scanf("%d",&dificultad);
       system("cls");

    switch(dificultad)
    {
    case 1:
        printf("Has elegido la dificultad facil. \n");
        printf("Comenzemos el juego.\n");
        system("cls");
        system("color 0A");//CAMBIAR EL COLOR DEL TEXTO
        jugador_nuevo.dificultad[10] = "Facil";
        jugador_nuevo.puntuacion = movimiento_pantalla(dificultad);
    break;

    case 2:
        jugador_nuevo.dificultad[10] = "MEDIO";
        printf("Has elegido la dificultad %s\n", jugador_nuevo.dificultad);
        printf("Comenzemos el juego.\n");
        system("Pause");
        system("cls");
        system("color 0E");//CAMBIAR EL COLOR DEL TEXTO
        jugador_nuevo.puntuacion = movimiento_pantalla(dificultad);
    break;

    case 3:
        printf("Has elegido la dificultad dificil. \n");
        printf("Comenzemos el juego.\n");
        system("cls");
        system("color 0C");//CAMBIAR EL COLOR DEL TEXTO
        jugador_nuevo.dificultad[10] = "Dificil";
        jugador_nuevo.puntuacion = movimiento_pantalla(dificultad);
    break;

    default:
        printf("Opcion desconocida\n");
    break;

    }
    }while(dificultad!=1 && dificultad!=2 && dificultad!=3);

    system("cls");

    printf("\nEnhorabuena %s, tu puntacion ha sido de %d", jugador_nuevo.nombre, jugador_nuevo.puntuacion );

    fprintf(fichero, "%s\t%s\t%d\n", jugador_nuevo.nombre, jugador_nuevo.dificultad, jugador_nuevo.puntuacion);

fclose(fichero);
    }
         return 0;
}



int movimiento_pantalla(int dificultad) {

punto xy;
xy.x=28;
xy.y=18;
punto punto_siguiente;
punto_siguiente.x=28;
punto_siguiente.y=18;
int n=0, juego=0;
char letra;

//printf("El programa funciona con la interacci�n del usuario a partir de las teclas w (arriba), a (izquierda), x (abajo), d (derecha), y sus correspondientes may�sculas./n Por ejemplo, si el usuario aprieta la tecla w el punto se desplaza haciaarriba una unidad,/n y si aprieta W se desplaza cinco unidades hacia arriba.\n");
pantalla(xy, dificultad);
do{
letra=getch();//scanf(" %c", &letra); libreria conio.h
switch(letra){
	case 'a':
	n=-1;
    horizontal(&xy, &punto_siguiente, n);
	break;

	case 'A':
	n=-1;
    horizontal(&xy, &punto_siguiente, n);
	break;

	case 'd':
	n=1;
    horizontal(&xy, &punto_siguiente, n);
	break;

	case 'D':
	n=1;
    horizontal(&xy, &punto_siguiente, n);
	break;

	case 'w':
	n=-1;
    vertical(&xy, &punto_siguiente, n);
	break;

	case 'W':
	n=-1;
    vertical(&xy, &punto_siguiente, n);
	break;

	case 's':
	n=1;
    vertical(&xy, &punto_siguiente, n);
	break;

	case 'S':
	n=1;
    vertical(&xy, &punto_siguiente, n);
	break;

}
system("cls");
//printf("El punto es (%d,%d)\n", xy.x, xy.y);

juego=pantalla(xy,dificultad);

}while(xy.y!=0);

printf("%c%cENHORABUENA!!%c%cHAS CONSEGUIDO SALIR!!", 173, 173, 173, 173);

return 0;
}


int pantalla(punto xy, int dificultad){
int puntuacion1, puntuacion2, puntuacion3, puntuacion_total;
int abierto_blackjack=0, abierto_wordle=0, abierto_ahorcado=0;
puntuacion_total= (puntuacion1 + puntuacion2 + puntuacion3);
int fil, col, caso=0;
char pared=254, columna=219, columna_arriba=220, columna_abajo=223, pista=63;
int pantalla[20][30]={
	{05,13,13,13,13,13,13,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,06,04,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,07,04,05,05,05,05,05,00,04},
	{04,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,04},
	{04,06,04,00,11,06,06,06,06,10,06,06,06,06,06,06,06,06,04,10,06,06,06,06,06,06,06,06,06,04},
	{04,07,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,07,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,05,00,11,04,05,05,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,14,00,04,00,00,00,00,00,04},
	{04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,02,02,06}



	};
    printf("\n\n");
    printf("(%d,%d)", xy.x, xy.y);

	for(fil=0; fil<20; fil++){
            printf("\t\t\t\t\t");
		for(col=0; col<30; col++){

            if (col==xy.x && fil==xy.y){
                  printf("O");
                  }
            else{
               if(pantalla[fil][col]==1){
                    printf("%c", pared);

		    }
		    if (xy.x==28 && xy.y==13){
                    caso=1;

            }
            if (xy.x==19 && xy.y==5){
                    caso=2;

            }

		    if(pantalla[fil][col]==7){
                    printf("?");

            }
            if(pantalla[fil][col]==0){
                    printf(" ");

            }
            if(pantalla[fil][col]==12){
                    printf("-");

            }
		    if(pantalla[fil][col]==2){
                    printf("%c", 196);

		    }
            if(pantalla[fil][col]==15){
                    printf("%c", 186);

		    }

            if(pantalla[fil][col]==11){
                    printf("|");

		    }
            if(pantalla[fil][col]==10){
                    printf("%c", 245);


		    }
		    if(pantalla[fil][col]==14){
                    printf("%c", 184);


		    }
		    if(pantalla[fil][col]==16){
                    if(abierto_blackjack=0){
                    printf(" ");
                    }

                    else{
                    printf("-");
                    }


		    }
		    if(pantalla[fil][col]==17){
                    if(abierto_blackjack=0){
                    printf("|");
                    }

                    else{
                    printf("-");
                    }


		    }
		    if(pantalla[fil][col]==3){
                    printf("_");

		    }
            if(pantalla[fil][col]==4){
                    printf("%c", columna);

		    }
		     if(pantalla[fil][col]==5){
                    printf("%c", columna_arriba);

		    }
		    if(pantalla[fil][col]==13){
                    printf("%c", columna_arriba);
                    caso=4;

		    }
		     if(pantalla[fil][col]==6){
                    printf("%c", columna_abajo);

		    }


            }


        }
                    printf("\n");
    }

if(caso==1){
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado una pista!\n\t\tA continuacion, has de resolver una adivinanza para poder acceder al minujuego\n\t\t\t\tque te abrira las puertas al siguiente nivel",173 );
	}
if(caso==3){
        printf("\t\t");
     	printf("La puerta esta cerrada, intenta resolver algun acertijo para abrirla para abrirla");
	}




if(caso==2){

    system("cls");
    int intentos=0;
    int intentosult;



    intentosult=0;
    int victoria=Blackjack(dificultad,&intentos,&intentosult);
    xy.x++;


    if(victoria==1){

        if(intentosult!=1){
        printf("Has ganado en %d intentos!\nPulsa 'w', 'a', 's' o 'd' para salir al menu.\n",intentosult);

        }else{
            printf("Has ganado en un intento\nPulsa 'w', 'a', 's' o 'd' para salir al menu.\n");
            }
    abierto_blackjack=1;
    }

    if(victoria==0){
        printf("Has perdido!\nPulsa 'w', 'a', 's' o 'd' para salir al menu y para volver a jugar.\n");
    }

}


	return puntuacion_total;
}



void horizontal(punto *xy, punto *punto_siguiente, int n){

int pantalla2[20][30]={
	{05,13,13,13,13,13,13,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,06,04,06,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,07,04,06,06,06,06,06,00,04},
	{04,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,04},
	{04,06,04,00,11,06,06,06,00,00,00,06,06,06,06,06,06,06,04,10,06,06,06,06,06,06,06,06,06,04},
	{04,07,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,07,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,05,00,11,04,05,05,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,14,00,04,00,00,00,00,00,04},
	{04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,02,02,06}



	};
punto_siguiente->x = punto_siguiente->x + n;


    if(pantalla2[xy->y][punto_siguiente->x]==0 || pantalla2[xy->y][punto_siguiente->x]==8 || pantalla2[xy->y][punto_siguiente->x]==3 || pantalla2[xy->y][punto_siguiente->x]==7 || pantalla2[xy->y][punto_siguiente->x]==13 || pantalla2[xy->y][punto_siguiente->x]==10){
        xy->x = punto_siguiente->x;

}
    else{
      punto_siguiente->x = punto_siguiente->x - n;

    }

}

void vertical(punto *xy, punto *punto_siguiente, int n){

int pantalla2[20][30]={
	{05,13,13,13,13,13,13,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04},
	{04,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04},
	{04,06,04,00,11,06,06,06,00,00,00,06,06,06,06,06,06,06,04,10,05,05,05,05,05,05,05,05,06,04},
	{04,07,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,07,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,05,00,11,04,05,05,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,14,00,04,00,00,00,00,00,04},
	{04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,02,02,06}

	};

   punto_siguiente->y = punto_siguiente->y + n;

    if(pantalla2[punto_siguiente->y][xy->x]==0 || pantalla2[punto_siguiente->y][xy->x]==8 || pantalla2[punto_siguiente->y][xy->x]==3 || pantalla2[punto_siguiente->y][xy->x]==7 || pantalla2[punto_siguiente->y][xy->x]==13 || pantalla2[punto_siguiente->y][xy->x]==10){
        xy->y = punto_siguiente->y;
    }
    else{
   punto_siguiente->y = punto_siguiente->y - n;

    }

}
