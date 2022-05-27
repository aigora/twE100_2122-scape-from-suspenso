#include <stdio.h>
#include <conio.h>//libreria para no pulsar enter con los scanf en movimientos
#include "Blackjack.h"
#include "Ahorcado.h"
#include "Wordle.h"
#include "adivinanza.h"


typedef struct {
int x,y;
}punto;

typedef struct {
char nombre[20];
int puntuacion;
}jugador;

int movimiento_pantalla(int dificultad);

int pantalla(punto xy, int dificultad);//Función para imprimir la matriz de la pantalla principal

void horizontal(punto *xy, punto *punto_siguiente, int n);//Función para controlar el desplazamiento horizontal, siendo xy el punto, y n el número de unidades a desplazar
void vertical(punto *xy, punto *punto_siguiente, int n);//Función para controlar el desplazamiento vertical, siendo xy el punto, y n el número de unidades a desplazar
int adivinanza(int dificultad);


int main(){
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
          do{
     printf("Elige la dificultad a la que quieres jugar\n");
     printf("(1)FACIL\n");
     printf("(2)MEDIO\n");
     printf("(3)DIFICIL\n");

        scanf("%d",&dificultad);
        system("cls");
        }while(dificultad!=1 && dificultad!=2 && dificultad!=3);


    switch(dificultad)
    {
    case 1:
        system("color 0A");//CAMBIAR EL COLOR DEL TEXTO
        printf("Has elegido la dificultad facil\n");
        printf("Comenzemos el juego\n");
        system("Pause");
        system("cls");
        jugador_nuevo.puntuacion = movimiento_pantalla(dificultad);
    break;

    case 2:

        system("color 0E");//CAMBIAR EL COLOR DEL TEXTO
        printf("Has elegido la dificultad media\n");
        printf("Comenzemos el juego\n");
        system("Pause");
        system("cls");
        jugador_nuevo.puntuacion = movimiento_pantalla(dificultad);
    break;

    case 3:
        system("color 0C");//CAMBIAR EL COLOR DEL TEXTO
        printf("Has elegido la dificultad dificil\n");
        printf("Comenzemos el juego\n");
        system("Pause");
        system("cls");
        jugador_nuevo.puntuacion = movimiento_pantalla(dificultad);
    break;

    default:
        printf("Opcion desconocida\n");
    break;

    }
    }while(dificultad!=1 && dificultad!=2 && dificultad!=3);

    system("cls");

    printf("\nEnhorabuena %s, tu puntacion ha sido de %d", jugador_nuevo.nombre, jugador_nuevo.puntuacion );

    fprintf(fichero, "%s\t%d\n", jugador_nuevo.nombre, jugador_nuevo.puntuacion);

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

//printf("El programa funciona con la interacción del usuario a partir de las teclas w (arriba), a (izquierda), x (abajo), d (derecha), y sus correspondientes mayúsculas./n Por ejemplo, si el usuario aprieta la tecla w el punto se desplaza haciaarriba una unidad,/n y si aprieta W se desplaza cinco unidades hacia arriba.\n");
pantalla(xy, dificultad);
do{
letra=getch();//scanf(" %c", &letra); (libreria conio.h) POR ESO USO ESA GALERIA
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

juego=pantalla(xy,dificultad);

}while(xy.y!=0);

printf("%c%cENHORABUENA!!%c%cHAS CONSEGUIDO SALIR!!", 173, 173, 173, 173);

return 0;
}


int pantalla(punto xy, int dificultad){
int puntuacion1, puntuacion2, puntuacion3, puntuacion_total;
puntuacion_total= (puntuacion1 + puntuacion2 + puntuacion3);
int fil, col, caso=0, pista, caso_adivinanza=0;
char pared=254, columna=219, columna_arriba=220, columna_abajo=223;
int pantalla[20][30]={
	{05,13,13,13,13,13,13,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,06,04,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,07,04,05,05,05,05,05,00,04},
	{04,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,04},
	{04,06,04,20,06,06,06,04,06,10,06,06,06,06,06,06,06,06,04,10,06,06,06,06,06,06,06,06,06,04},
	{04,07,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,10,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,07,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,05,00,11,04,05,05,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,02,02,06}



	};
    printf("\n\n");
    //printf("(%d,%d)", xy.x, xy.y); //ESTO NOS AYUDA A LA HORA DE PROGRAMAR PARA SABER LAS COORDENADAS DE LA MATRIZ
    printf("\n\t\t\t    ['w'-ARRIBA]['S'-ABAJO]['A'-IZQUIERDA]['D'-DERECHA]\n\n\n");
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
                    pista=1;

            }
            if (xy.x==21 && xy.y==3){
                    pista=2;

            }
            if (xy.x==1 && xy.y==6){
                    pista=3;

            }
            if (xy.x==19 && xy.y==5){
                    caso=1;

            }
            if (xy.x==9 && xy.y==5){
                    caso=2;

            }
            if (xy.x==7 && xy.y==13){
                    caso=3;

            }
             if (xy.x==3 && xy.y==5){
                    caso_adivinanza=1;

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
		    if(pantalla[fil][col]==20){
                    printf("A");

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

if(pista==1){

        switch(dificultad){
        case 1:
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado una pista!\n\t\t\tPor la ma%cana ando a cuatro patas...",173, 164);
        break;

        case 3:
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado una pista!\n\t\tSoy una persona gordita...",173 );
        break;

        case 2:
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado una pista!\n\t\tSi pronuncias mi nombre desaparezco...",173 );
        break;
        }

	}

if(pista==2){

        switch(dificultad){
        case 1:
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado otra pista!\n\t\t...al mediodia a dos...",173 );
        break;

        case 3:
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado otra pista!\n\t\t...muy coloradita, que no toma cafe...",173);
        break;

        case 2:
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado otra pista!\n\t\t...te acompa%co en tus horas de estudio...",173, 164);
        break;


        }

	}

if(pista==3){

        switch(dificultad){
        case 1:
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado la ultima pista!\n\t\t...y por la noche a tres",173 );
        break;

        case 3:
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado la ultima pista!\n\t\t...pero que siempre toma te?",173 );
        break;

        case 2:
        printf("\t\t");
     	printf("\t\t\t  %cHas encontrado la ultima pista!\n\t\t...que soy?",173 );
        break;
        }
	}
	//MINIJUEGOS

if(caso==1){

    system("cls");
    int intentos=0;
    int intentosult;



    intentosult=0;
    int victoria=Blackjack(dificultad,&intentos,&intentosult);


    if(victoria==1){

        if(intentosult!=1){
        printf("Has ganado en %d intentos!\nPulsa 'w' para salir a la sala, si quieres volver a jugar para mejorar tu puntuacion pulsa otra tecla\n",intentosult);

        }else{
            printf("Has ganado en un intento\nPulsa 'w', 'a', 's' o 'd' para salir a la sala\n");
            }
    }

    if(victoria==0){
        printf("Has perdido!\nPulsa 'w', 'a', 's' o 'd' para salir al menu y para volver a jugar.\n");
    }
puntuacion2=victoria;

}

if(caso==2){
system("cls");
puntuacion1= wordle_main(dificultad);
        printf("Has ganado!\nPulsa 's' para salir a la sala, si quieres volver a jugar para mejorar tu puntuacion pulsa otra tecla\n");
system("pause");
	}

if(caso==3){
system("cls");
puntuacion3= Ahorcado(dificultad);
printf("Has ganado!\nPulsa 'a' para salir a la sala, si quieres volver a jugar para mejorar tu puntuacion pulsa otra tecla\n");

	}
if(caso_adivinanza==1){
system("cls");
int adivina = adivinanza(dificultad);
printf("Has ganado!\nPulsa 'w' para salir a la sala y bajar las escaleras que te lleven a la salida\n");

	}




	return puntuacion_total;
}



void horizontal(punto *xy, punto *punto_siguiente, int n){

int pantalla2[20][30]={
	{05,13,13,13,13,13,13,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05,05},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,06,04,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,07,04,05,05,05,05,05,00,04},
	{04,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,04},
	{04,06,04,20,06,06,06,04,06,10,06,06,06,06,06,06,06,06,04,10,06,06,06,06,06,06,06,06,06,04},
	{04,07,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,10,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,07,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,05,00,11,04,05,05,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,02,02,06}




	};
punto_siguiente->x = punto_siguiente->x + n;


    if(pantalla2[xy->y][punto_siguiente->x]==0 || pantalla2[xy->y][punto_siguiente->x]==8 || pantalla2[xy->y][punto_siguiente->x]==3 || pantalla2[xy->y][punto_siguiente->x]==7 || pantalla2[xy->y][punto_siguiente->x]==13 || pantalla2[xy->y][punto_siguiente->x]==10|| pantalla2[xy->y][punto_siguiente->x]==20){
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
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,06,04,00,00,00,00,00,00,04},
	{04,15,03,03,03,03,15,04,00,00,00,00,00,00,00,00,00,00,00,00,04,07,04,05,05,05,05,05,00,04},
	{04,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,04},
	{04,06,04,20,06,06,06,04,06,10,06,06,06,06,06,06,06,06,04,10,06,06,06,06,06,06,06,06,06,04},
	{04,07,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,00,04},
	{04,00,04,00,00,00,00,10,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,00,00,00,04,00,07,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,05,00,11,04,05,05,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,04,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{04,00,00,00,00,00,00,04,00,00,00,00,00,00,00,00,00,00,04,00,00,00,00,04,00,00,00,00,00,04},
	{06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,06,02,02,06}


	};

   punto_siguiente->y = punto_siguiente->y + n;

    if(pantalla2[punto_siguiente->y][xy->x]==0 || pantalla2[punto_siguiente->y][xy->x]==8 || pantalla2[punto_siguiente->y][xy->x]==3 || pantalla2[punto_siguiente->y][xy->x]==7 || pantalla2[punto_siguiente->y][xy->x]==13 || pantalla2[punto_siguiente->y][xy->x]==10 || pantalla2[punto_siguiente->y][xy->x]==20){
        xy->y = punto_siguiente->y;
    }
    else{
   punto_siguiente->y = punto_siguiente->y - n;

    }

}

