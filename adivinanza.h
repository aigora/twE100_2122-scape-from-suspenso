#include <stdio.h>

int adivinanza(int dificultad)
{
    char adivinanzadificil[]="tomate";
    char adivinanzamedio[]="silencio";
    char adivinanzafacil[]="humano";
    char respuesta[11];
switch(dificultad){

case 3:
do{
        printf("Escribe tu respuesta de la adivinanza para poder salir, estaremos aqui hasta que lo adivines (en minusculas)... \n");
        scanf("%10s", respuesta);
}while(strcmp(adivinanzadificil, respuesta)!=0);
    printf("Correcto\n");

break;

case 2:
    do{
        printf("Escribe tu respuesta de la adivinanza para poder salir, estaremos aqui hasta que lo adivines (en minusculas)... \n");
        scanf("%10s", respuesta);
    }while(strcmp(adivinanzamedio, respuesta)!=0);
        printf("Correcto\n");
break;

case 1:
    do{
        printf("Escribe tu respuesta de la adivinanza para poder salir, estaremos aqui hasta que lo adivines (en minusculas)... \n");
        scanf("%10s", respuesta);
    }while(strcmp(adivinanzafacil, respuesta)!=0);
        printf("Correcto\n");
break;
}
return 0;
}
