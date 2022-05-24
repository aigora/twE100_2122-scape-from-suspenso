#include<stdio.h>

int main()
{
    char tecla;
    char elige;
    char dificil ;
    char facil;
    char media ;
  int d;
  int opciondesconocida;

    printf("Bienvenido has comenzado el escape room del grupo escape from suspenso. \n");
    printf(" En este escape room deberas de poner aprueba tus habilidades para superar todas sus pruebas y acertijos. \n");
    printf("Pero antes deberas de elegir la dificultad a la que deseas jugar y registrarte como usuario.\n");




     printf("elige la dificultad a la que quieres jugar, facil(1)o media(2)o dificil(3) .\n");
       scanf("%c",&elige);
       system("cls");

         switch(elige)
         {
       case '1':
         printf("Has elegido la dificultad facil  \n",facil);
         printf("Comenzemos el juego \n");



          break;
       case '2':
         printf("Has elegido la dificultad media \n",media);
         printf("Comenzemos el juego \n");


           break;
       case '3':
           printf("Has elegido la dificultad dificil \n",dificil);
           printf("Comenzemos el juego \n");


           break;
       default:
        printf("opcion desconocida.\n");
         }
         {


         if (opciondesconocida)
            printf("Ha habido un error vuelve a escoger dificultad");
            else
                printf("continue");



         }


         return 0;
}

