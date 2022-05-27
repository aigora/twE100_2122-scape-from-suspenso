#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//FUNCIONES

int dificultades (int dificultad);
int algoritmo (char palabra[10][30], int dificultad);
int imprime_pantalla_ahorcado(int dificultad, int intentos);

//PRINCIPAL
int Ahorcado(int dificultad){
int puntuacion;
    puntuacion=dificultades(dificultad);
    system("PAUSE");
return puntuacion;

}

//FUNCION CATEGORIAS
int dificultades(int dificultad){
    int intentos, situacion=0;
    char facil[10][30]={"PELOTA" , "ARBOL" , "CASA" , "CANASTA" , "CABLE" , "LUZ" , "ESTUCHE" , "MESA" , "NUBE" , "FOTO"};
	char medio[10][30]={"PORTADA" , "CATALOGO" , "UNIVERSIDAD" , "BARBACOA" , "PISCINA" , "SOMBRILLA" , "ESCRITORIO" , "PURIFICADOR" , "INGENIERIA" , "FOTOGRAFIA"};
	char dificil[10][30]={"ELECTROENCEFALOGRAMA" , "ESTERNOCLEIDOMASTOIDEO" , "OTORRINOLARINGOLOGO" , "PARALELEPIPEDO" , "PNEUMOLOGIA" , "OVOVIVIPARO" , "ELECTRODOMESTICO" , "COAXIAL" , "VENTRILOCUO" , "INSTITUCIONALIZACION"};

switch(dificultad){

    case 1:
            intentos==9;
            situacion=algoritmo(facil, dificultad);
            break;
    case 2:
            intentos==7;
            situacion=algoritmo(medio, dificultad);
            break;
    case 3:
            intentos==5;
            situacion=algoritmo(dificil, dificultad);
            break;


}
return situacion;
}

//FUNCION ALGORITMO AHORCADO
int algoritmo (char palabra[10][30], int dificultad){
int i, j, k;
int huecos=0, intentos=0, intentos_totales=0;
int puntos=0, aciertos=0, ganar=0;
int aleatorio= rand()%10;//FUNCION QUE GENERA UN NUMERO ALEATORIO
int longitud_palabra= strlen(palabra[aleatorio]);
int puntuacion;
char letra_usuario;
char palabra2[longitud_palabra];

    for(i=0; i<longitud_palabra; i++){
        palabra2[i]='_';
    }
    do{
        aciertos=0;
        printf("Estas jugando a El Ahorcado\nEsta prueba consiste en adivinar la palabra intentando adivinar las letras que hay en ella\n");
        imprime_pantalla_ahorcado(dificultad, intentos);
        printf("\n");
            for(i=0; i<longitud_palabra; i++){
                printf(" %c ", palabra2[i]);
            }
        huecos=0;
        for(i=0; i<longitud_palabra;i++){
            if(palabra2[i] == '_'){
            huecos++;
            }
        }
        if(huecos==0){
            printf("\nENHORABUENA, HAS SUPERADO LA PRUEBA, PUEDES CONTINUAR\n");
            getch();
            return 1;
        }
        printf("Escribe una letra\n");
        scanf(" %c", &letra_usuario);

        for(j=0; j<longitud_palabra; j++){
            if(letra_usuario==palabra[aleatorio][j] || letra_usuario==palabra[aleatorio][j]+32){

                if(letra_usuario>96 && letra_usuario<123){
                    palabra2[j]=letra_usuario-32;

                }
                else{
                    palabra2[j]=letra_usuario;
                }

                printf("%c ", palabra2[j]);
                aciertos++;
            }
        }
        if(aciertos==0){
            intentos++;
        }

         switch(dificultad){

            case 1:
                    intentos_totales=10;
                        if(intentos==9){
                            printf("No lo has conseguido...\nPresiona el teclado para volver a intentarlo");
                            getch();//FUNCION PARECIDA A SCANF QUE NOS PERMITE SALTARNOS EL PULSAR ENTER
                            system("cls");
                            dificultades(dificultad);
                            intentos_totales--;

                        }

            case 2:
                    intentos_totales=8;
                        if(intentos==7){
                            printf("No lo has conseguido...\nPresiona el teclado para volver a intentarlo");
                            getch();//FUNCION PARECIDA A SCANF QUE NOS PERMITE SALTARNOS EL PULSAR ENTER
                            system("cls");
                            dificultades(dificultad);
                            intentos_totales--;

                        }
            case 3:
                    intentos_totales=6;
                        if(intentos==5){
                            printf("No lo has conseguido...\nPresiona el teclado para volver a intentarlo");
                            getch(); //FUNCION PARECIDA A SCANF QUE NOS PERMITE SALTARNOS EL PULSAR ENTER
                            system("cls");
                            dificultades(dificultad);
                            intentos_totales--;


                        }
        }
        system("cls");
    }while(intentos!=intentos_totales);
    puntuacion=dificultad * intentos_totales * 100;
printf("\n");
return puntuacion;
}

int imprime_pantalla_ahorcado(int dificultad, int intentos){

    char ojos=248, torso=197,cadera=193, pierna_der=191, pierna_izq=218, brazo_der=92;

    if(dificultad==1){

        if(intentos==0){
            printf("Llevas %d fallos, te quedan 9 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      \n|\n|\n|\n|\n|__\n");
        }
    	if(intentos==1){
            printf("Llevas %d fallos, te quedan 8 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (\n|\n|\n|\n|\n|__\n");
        }
        if(intentos==2){
            printf("Llevas %d fallos, te quedan 7 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|\n|\n|\n|\n|__\n", ojos, ojos);
        }
        if(intentos==3){
            printf("Llevas %d fallos, te quedan 6 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|        %c\n|\n|\n|\n|__\n", ojos, ojos, torso );
        }
        if(intentos==4){
            printf("Llevas %d fallos, te quedan 5 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c\n|\n|\n|\n|__\n", ojos, ojos, pierna_izq, torso);
        }
        if(intentos==5){
            printf("Llevas %d fallos, te quedan 4 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c%c\n|\n|\n|\n|__\n", ojos, ojos, pierna_izq, torso,pierna_der);
        }
        if(intentos==6){
            printf("Llevas %d fallos, te quedan 3 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c%c\n|        | \n|\n|\n|__\n", ojos, ojos, pierna_izq, torso,pierna_der);
        }
        if(intentos==7){
            printf("Llevas %d fallos, te quedan 2 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c%c\n|        | \n|        %c\n|        \n|__\n", ojos, ojos, pierna_izq, torso,pierna_der,cadera);
        }
        if(intentos==8){
            printf("Llevas %d fallos, te queda 1 intento para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c%c \n|        | \n|       %c%c\n|        \n|__\n", ojos, ojos, pierna_izq, torso,pierna_der,pierna_izq, cadera);
        }
        if(intentos==9){
            printf(" _______\n/        |\n|      (X_X)\n|       %c%c%c\n|        | \n|       %c%c%c\n|        \n|__\n", pierna_izq, torso,pierna_der,pierna_izq, cadera, pierna_der );
            printf("HAS PERDIDO :(\n");

        }
    }
if(dificultad==2){

        if(intentos==0){
            printf("Llevas %d fallos, te quedan 7 para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      \n|\n|\n|\n|\n|__\n");
        }
        if(intentos==1){
            printf("Llevas %d fallos, te quedan 6 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|\n|\n|\n|\n|__\n", ojos, ojos);
        }
        if(intentos==2){
            printf("Llevas %d fallos, te quedan 5 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|        %c\n|\n|\n|\n|__\n", ojos, ojos, torso );
        }
        if(intentos==3){
            printf("Llevas %d fallos, te quedan 4 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c\n|\n|\n|\n|__\n", ojos, ojos, pierna_izq, torso);
        }
        if(intentos==4){
            printf("Llevas %d fallos, te quedan 3 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c%c\n|\n|\n|\n|__\n", ojos, ojos, pierna_izq, torso,pierna_der);
        }
        if(intentos==5){
            printf("Llevas %d fallos, te quedan 2 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c%c\n|        | \n|        %c\n|        \n|__\n", ojos, ojos, pierna_izq, torso,pierna_der,cadera);
        }
        if(intentos==6){
            printf("Llevas %d fallos, te queda 1 intento para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c%c \n|        | \n|       %c%c\n|        \n|__\n", ojos, ojos, pierna_izq, torso,pierna_der,pierna_izq, cadera);
        }
        if(intentos==7){
            printf(" _______\n/        |\n|      (X_X)\n|       %c%c%c\n|        | \n|       %c%c%c\n|        \n|__\n", pierna_izq, torso,pierna_der,pierna_izq, cadera, pierna_der );
            printf("HAS PERDIDO :(\n");

        }
    }
    if(dificultad==3){

        if(intentos==0){
            printf("Llevas %d fallos, te quedan 5 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      \n|\n|\n|\n|\n|__\n");
        }
        if(intentos==1){
            printf("Llevas %d fallos, te quedan 4 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|\n|\n|\n|\n|__\n", ojos, ojos);
        }
        if(intentos==2){
            printf("Llevas %d fallos, te quedan 3 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c\n|\n|\n|\n|__\n", ojos, ojos, pierna_izq, torso);
        }
        if(intentos==3){
            printf("Llevas %d fallos, te quedan 2 intentos para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c%c\n|        | \n|        %c\n|        \n|__\n", ojos, ojos, pierna_izq, torso,pierna_der,cadera);
        }
        if(intentos==4){
            printf("Llevas %d fallos, te queda 1 intento para adivinar la palabra\n\n", intentos);
            printf(" _______\n/        |\n|      (%c-%c)\n|       %c%c%c \n|        | \n|       %c%c\n|        \n|__\n", ojos, ojos, pierna_izq, torso,pierna_der,pierna_izq, cadera);
        }
        if(intentos==5){
            printf(" _______\n/        |\n|      (X_X)\n|       %c%c%c\n|        | \n|       %c%c%c\n|        \n|__\n", pierna_izq, torso,pierna_der,pierna_izq, cadera, pierna_der );
            printf("HAS PERDIDO :(\n");

        }
    }
}
