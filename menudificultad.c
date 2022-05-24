#include<stdio.h>

int main()
{

    int dificultad;




    printf("Bienvenido has comenzado el escape room del grupo escape from suspenso.\n");
    printf("En este escape room deberas de poner aprueba tus habilidades para superar todas sus pruebas y acertijos. \n");
    printf("Pero antes deberas de elegir la dificultad a la que deseas jugar y registrarte como usuario.\n");



   do {
     printf("Elige la dificultad a la que quieres jugar, facil(1)o media(2)o dificil(3) .\n");
       scanf("%d",&dificultad);
       system("cls");

         switch(dificultad)
         {
       case 1:
         printf("Has elegido la dificultad facil. \n");
         printf("Comenzemos el juego.\n");



          break;
       case 2:
         printf("Has elegido la dificultad media .\n");
         printf("Comenzemos el juego .\n");


           break;
       case 3:
           printf("Has elegido la dificultad dificil  \n");
           printf("Comenzemos el juego .\n");


           break;
       default:
        printf("Opcion desconocida .\n");
        break;

         }}while(dificultad!=1 && dificultad!=2 && dificultad!=3);



         return 0;
}
