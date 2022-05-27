#include<stdio.h>

#define WORD_LENGTH 5
#include<string.h>
struct resultado
{
char nombre[30];


};



int word(int dificultad, char letra);
int wordle(int *intentos, int *intentosrealizados);

int wordle_main(int dificultad)
{

 char tecla;
 char letra;
 char palabra;
 char sustantivo[5];
 int i;
char nombre[30];
int encontrado;
int ganar;
int intentos;
int intentosrealizados;
char numerointentos[9];
int puntuacion;



printf("has llegado al minijuego, presione una tecla para continuar .\n");
 scanf("%c",&tecla);

 printf("para superar el minijuego deberas de hallar la palabra de 5 letras pulsa una tecla para continuar.\n");
 scanf("%c",&tecla);
 printf("importante, las letras que elijas deberan de ser escritas en miniscula, buena suerte! .\n");
 scanf("%c",&tecla);

 printf (" abecedario: a,b,c,d,e,f,g,h,i,j,k,l,m,n,ñ,o,p,q,r,s,t,u,v,w,x,y,z . \n");
scanf("%c",&tecla);
 int victoria = word(1,letra);
    if (victoria==1)
    {
        printf("has ganado");
    }
    if (victoria==0);
     printf("");






  return 0;





 }
int word(int dificultad, char letra)
{
    char tecla;

 char palabra;
 char letras;
   int ganar;
   int victoria;
int aciertos=0;
 int intentos=0;
 int intentosrealizados=0;
 char intentostotales;








   do
   {



     if (dificultad==3)
   {

          printf("escoge la primera letra de la palabra, es una consonante y esta se haya en el intervalo de letras m, v del abecedario(letras no incluidas)  \n");
    scanf("%c", &letra);



      if ( letra >'q' && letra<'s')
        printf(" escogido la letra correcta y su posicion correcta, tendras una segunda opurtunidad como ventaja para adivinar otra letra de la palabra . \n");



       else if ( letra >'d' && letra<'f')

        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");

       else if  (letra>'i' && letra<'k')
            printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");
              else if  (letra>'n' && letra<'p')
                 printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");
        else if (letra >'k' && letra<'m')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");
        else{
            printf("la letra o caracter no esta incluida en la palabra, tienes un segundo intento respecto a la primera posicion,has usado un intento %d intentos. \n");

            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}


        {

            printf(" este es su segundo intento respecto a la primera letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if ( letra >'q' && letra<'s')
        printf(" escogido la letra correcta y su posicion correcta. \n");

        else if  (letra>'i' && letra<'k')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'n' && letra<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'k' && letra<'m')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'d' && letra<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
     else{
        printf("letra o caracter no incluida en la palabra. \n");
        intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
            }





            { // segunda letra






            printf(" \n");
             scanf("%c",&tecla);


     printf("escoja la segunda letra de la palabra, esta se haya en el intervalo b , f de letras del abecedario(letras no incluidas). \n");
    scanf("%c",&tecla);

        if (tecla > 'd' && tecla<'f')
            printf("has escogido la letra correcta y su posicion adecuada, tendras un segundo intento en esta posicion de la letra como ventaja. \n");

          else if (tecla>'i' && tecla<'k')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta, tienes un segundo intento. \n");

            else if (tecla>'n' && tecla<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta , tienes un segundo intento. \n");
        else if (tecla >'k' && tecla<'m')
            printf("la letra esta incluida  pero no en su posicion correcta, tienes un segundo intento. \n");
           else if ( tecla  >'q' && tecla<'s')
        printf("la letra esta incluida  pero no en su posicion correcta , tienes un segundo intento. \n");

        else{
            printf("la letra o caracter no esta incluida en la palabra, tienes un segundo intento. \n");

        intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}


        {

            printf(" este es su segundo intento respecto a la segunda letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if ( letra >'d' && letra<'f')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (letra>'i' && letra<'k')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'n' && letra<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'k' && letra<'m')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'q' && letra<'s')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
        else{
            printf("la letra o caracter no esta incluida en la palabra. \n");
        intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}


            }


   }





    { //tercera letra
        printf("siguiente letra. \n");
             scanf("%c",&tecla);

             printf("escoja la tercera letra de la palabra, esta se haya en el intervalo m , p de letras del abecedario(letras no incluidas). \n");
              scanf("%c",&tecla);

      if ( tecla >'k' && tecla<'m')
        printf(" escogido la letra correcta y su posicion correcta, tendras un segundo intento en esta posicion de la palabra como ventaja. \n");
       else if ( tecla >'d' && tecla<'f')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento \n");

         else if (tecla >'q' && tecla<'s')
            printf("letra incluida en la palabra posicion incorrecta, tienes un segundo intento \n");
            else if(tecla>'n' && tecla<'p')
                printf("letra perteneciente a la palabra posicion erronea, tienes un segundo intento \n");
            else if(tecla>'i' && tecla<'k')
             printf("letra se encuentra en la palabra en otra posicion, tienes un segundo intento . \n");


  else{
    printf("la letra o caracter no esta incluida en la palabra, tienes un segundo intento \n");

        intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}

    {
         printf(" este es su segundo intento respecto a la tercera letra de la palabra . \n");
              scanf("%c",&tecla);
              printf("escoje la letra , \n");
              scanf("%c",&tecla);
             if ( tecla >'k' && tecla<'m')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (tecla>'q' && tecla<'s')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (tecla>'n' && tecla<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (tecla >'i' && tecla<'k')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( tecla  >'d' && tecla<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
         else{

            printf("no es la letra o caracter correcta. \n");intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}

    }

    { //cuarta letra
        printf(", esta se encuentra en el intervalo i, n de  letras del abecedario(letras no incluidas). \n");
             scanf("%c",&tecla);

             printf("escoja la cuarta letra de la palabra. \n");
              scanf("%c",&tecla);

      if ( tecla >'n' && tecla<'p')
        printf(" escogido la letra correcta y su posicion correcta, tendras un segundo intento de la palabra como ventaja en esta posicion. \n");
       else if ( tecla >'d' && tecla<'f')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento \n");

         else if (tecla >'q' && tecla<'s')
            printf("letra incluida en la palabra posicion incorrecta, tienes un segundo intento \n");
            else if(tecla>'k' && tecla<'m')
                printf("letra perteneciente a la palabra posicion erronea, tienes un segundo intento \n");
            else if(tecla>'i' && tecla<'k')
             printf("letra se encuentra en la palabra en otra posicion, tienes un segundo intento . \n");

             else{
                printf("la letra o caracter no esta incluida en la palabra tienes un segundo intento. \n");
                intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                }

                 {
         printf(" este es su segundo intento respecto a la cuarta letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if ( letra >'n' && letra<'p')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (letra>'q' && letra<'s')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'k' && letra<'m')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'i' && letra<'k')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'d' && letra<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
         else{
            printf(" la letra o caracter no esta incluido en la palabra . \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                 }

                 { //quinta letra

                     printf("siguiente letra de la palabra esta se encuentra en el intervalo g,k de  letras del abecedario(letras no incluidas). \n");
             scanf("%c",&tecla);


             printf("escoja la quinta letra de la palabra  \n");
              scanf("%c",&tecla);

      if ( tecla >'i' && tecla<'k')
        printf(" escogido la letra correcta y su posicion correcta, tendras un segundo intento de la palabra como ventaja en esta posicion. \n");
       else if ( tecla >'d' && tecla<'f')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento \n");

         else if (tecla >'q' && tecla<'s')
            printf("letra incluida en la palabra posicion incorrecta, tienes un segundo intento \n");
            else if(tecla>'k' && tecla<'m')
                printf("letra perteneciente a la palabra posicion erronea, tienes un segundo intento \n");
            else if(tecla>'n' && tecla<'p')
             printf("letra se encuentra en la palabra en otra posicion, tienes un segundo intento . \n");

             else{
                printf("la letra o caracter no esta incluida en la palabra tienes un segundo intento. \n");
                intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                }

                 {
         printf(" este es su segundo intento respecto a la quinta letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if  ( letra >'i' && letra<'k')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (letra>'q' && letra<'s')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'n' && letra<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'k' && letra<'m')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'d' && letra<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
         else{
            printf("la letra o caracter no esta incluido en la palabra. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                 }

              {
int i;
char nombre[30];
int encontrado;
struct resultado sustantivo[2]={ {"reloj"},
{"RELOJ"}
};
 {

 };

                  printf("escriba la palabra: ");
                       scanf("%s",nombre);
encontrado=0; //hemos encontrado 0, de momento
for(i=0;i<2;i++)
{
int iguales;
iguales=strcmp(nombre,sustantivo[i].nombre);
if(iguales==0) //si son iguales
{
encontrado++;
printf("has adivinado la palabra\n");
ganar=1;

}
}
if(encontrado==0)
printf("has fallado el juego el juego se volvera a iniciar desde el principio \n");


else
printf("el juego ha finalizado",encontrado);



}


    }
}
   else if (dificultad ==1)

   {
        {
          printf("escoge la primera letra de la palabra, es una consonante y esta se haya en el intervalo de letras p , u del abecedario(letras no incluidas)  \n");
    scanf("%c", &letra);


      if ( letra >'q' && letra<'s')
        printf(" escogido la letra correcta y su posicion correcta, tendras una segunda opurtunidad como ventaja para adivinar otra letra de la palabra . \n");


       else if ( letra >'d' && letra<'f')

        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");



       else if  (letra>'i' && letra<'k')
            printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");

              else if  (letra>'n' && letra<'p')
                 printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");

        else if (letra >'k' && letra<'m')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");

        else{

            printf("la letra o caracter no esta incluida en la palabra, tienes un segundo intento respecto a la primera posicion \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados);}




        {

            printf(" este es su segundo intento respecto a la primera letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if ( letra >'q' && letra<'s')
        printf(" escogido la letra correcta y su posicion correcta. \n");

        else if  (letra>'i' && letra<'k')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'n' && letra<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'k' && letra<'m')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'d' && letra<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
     else{
        printf("letra o caracter no incluida en la palabra");
        intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}



            }


   }


            { // segunda letra






            printf("\n");
             scanf("%c",&tecla);


     printf("escoja la segunda letra de la palabra, es una vocal y esta se haya en el intervalo b , j de letras del abecedario(letras no incluidas). \n");
    scanf("%c",&tecla);

        if (tecla > 'd' && tecla<'f')
            printf("has escogido la letra correcta y su posicion adecuada, tendras un segundo intento en esta posicion de la letra como ventaja. \n");

          else if (tecla>'i' && tecla<'k')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta, tienes un segundo intento. \n");

            else if (tecla>'n' && tecla<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta , tienes un segundo intento. \n");
        else if (tecla >'k' && tecla<'m')
            printf("la letra esta incluida  pero no en su posicion correcta, tienes un segundo intento. \n");
           else if ( tecla  >'q' && tecla<'s')
        printf("la letra esta incluida  pero no en su posicion correcta , tienes un segundo intento. \n");

        else{
            printf("la letra o caracter no esta incluida en la palabra, tienes un segundo intento. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}

        {

            printf(" este es su segundo intento respecto a la segunda letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if ( letra >'d' && letra<'f')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (letra>'i' && letra<'k')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'n' && letra<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'k' && letra<'m')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'q' && letra<'s')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
        else{
            printf("la letra o caracter no esta incluida en la palabra. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}

            }


   }





    { //tercera letra
        printf("siguiente letra. \n");
             scanf("%c",&tecla);

             printf("escoja la tercera letra de la palabra, es una consonanate y esta se haya en el intervalo i, n de letras del abecedario(letras no incluidas). \n");
              scanf("%c",&tecla);

      if ( tecla >'k' && tecla<'m')
        printf(" escogido la letra correcta y su posicion correcta, tendras un segundo intento en esta posicion de la palabra como ventaja. \n");
       else if ( tecla >'d' && tecla<'f')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento \n");

         else if (tecla >'q' && tecla<'s')
            printf("letra incluida en la palabra posicion incorrecta, tienes un segundo intento \n");
            else if(tecla>'n' && tecla<'p')
                printf("letra perteneciente a la palabra posicion erronea, tienes un segundo intento \n");
            else if(tecla>'i' && tecla<'k')
             printf("letra se encuentra en la palabra en otra posicion, tienes un segundo intento . \n");


  else{
    printf("la letra o caracter no esta incluida en la palabra, tienes un segundo intento \n");
    intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}




    {
         printf(" este es su segundo intento respecto a la tercera letra de la palabra . \n");
              scanf("%c",&tecla);
              printf("escoje la letra , \n");
              scanf("%c",&tecla);
             if ( tecla >'k' && tecla<'m')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (tecla>'q' && tecla<'s')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (tecla>'n' && tecla<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (tecla >'i' && tecla<'k')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( tecla  >'d' && tecla<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
         else{
            printf("la letra o caracter no esta incluido en la palabra. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}

    }

    { //cuarta letra
        printf("es una vocal y esta se encuentra en el intervalo n,v de  letras del abecedario(letras no incluidas). \n");
             scanf("%c",&tecla);

             printf("escoja la cuarta letra de la palabra. \n");
              scanf("%c",&tecla);

      if ( tecla >'n' && tecla<'p')
        printf(" escogido la letra correcta y su posicion correcta, tendras un segundo intento de la palabra como ventaja en esta posicion. \n");
       else if ( tecla >'d' && tecla<'f')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento \n");

         else if (tecla >'q' && tecla<'s')
            printf("letra incluida en la palabra posicion incorrecta, tienes un segundo intento \n");
            else if(tecla>'k' && tecla<'m')
                printf("letra perteneciente a la palabra posicion erronea, tienes un segundo intento \n");
            else if(tecla>'i' && tecla<'k')
             printf("letra se encuentra en la palabra en otra posicion, tienes un segundo intento . \n");

             else{
                printf("la letra o caracter  no esta incluida en la palabra tienes un segundo intento. \n");
                intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                }

                 {
         printf(" este es su segundo intento respecto a la cuarta letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if ( letra >'n' && letra<'p')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (letra>'q' && letra<'s')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'k' && letra<'m')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'i' && letra<'k')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'d' && letra<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
         else{
            printf("letra o caracter no icluido en la palabra. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                 }

                 { //quinta letra

                     printf("siguiente letra de la palabra, es una consonante esta se encuentra en el intervalo g,m de  letras del abecedario(letras no incluidas). \n");

                     scanf("%c",&tecla);
                       printf("escoja la quinta letra de la palabra. \n");
              scanf("%c",&tecla);

      if ( tecla >'i' && tecla<'k')
        printf(" escogido la letra correcta y su posicion correcta, tendras un segundo intento de la palabra como ventaja en esta posicion. \n");
       else if ( tecla >'d' && tecla<'f')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento \n");

         else if (tecla >'q' && tecla<'s')
            printf("letra incluida en la palabra posicion incorrecta, tienes un segundo intento \n");
            else if(tecla>'k' && tecla<'m')
                printf("letra perteneciente a la palabra posicion erronea, tienes un segundo intento \n");
            else if(tecla>'n' && tecla<'p')
             printf("letra se encuentra en la palabra en otra posicion, tienes un segundo intento . \n");

             else{
                printf("la letra o caracter no esta incluida en la palabra tienes un segundo intento. \n");
                intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados);}
                }

                 {
         printf(" este es su segundo intento respecto a la quinta letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if  ( letra >'i' && letra<'k')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (letra>'q' && letra<'s')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'n' && letra<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'k' && letra<'m')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'d' && letra<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
         else{
            printf("la letra o caracter no esta incluida en la palabra. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados);}
                 }
      {
int i;
char nombre[30];
int encontrado;
struct resultado sustantivo[2]={ {"reloj"},
{"RELOJ"}
};


                  printf("escriba la palabra: ");
                       scanf("%s",nombre);
encontrado=0; //hemos encontrado 0, de momento
for(i=0;i<2;i++)
{
int iguales;
iguales=strcmp(nombre,sustantivo[i].nombre);
if(iguales==0) //si son iguales
{
encontrado++;
ganar=1;
printf("has adivinado la palabra\n");


}
}
if(encontrado==0)
printf("has fallado el juego el juego se volvera a inciar desde el principio \n");


else
printf("el juego ha finalizado",encontrado);



}
}






   }



    else if (dificultad == 2)
{


    printf("escoge la primera letra de la palabra, esta se haya en el intervalo de letras,   p , u del abecedario(letras no incluidas)  \n");
    scanf("%c", &letra);



   {



      if ( letra >'q' && letra<'s')
        printf(" escogido la letra correcta y su posicion correcta, tendras una segunda opurtunidad como ventaja para adivinar otra letra de la palabra . \n");



       else if ( letra >'d' && letra<'f')

        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");

       else if  (letra>'i' && letra<'k')
            printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");
              else if  (letra>'n' && letra<'p')
                 printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");
        else if (letra >'k' && letra<'m')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento. \n");
        else{
            printf("la letra o caracter no esta incluida en la palabra, tienes un segundo intento respecto a la primera posicion. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}


        {

            printf(" este es su segundo intento respecto a la primera letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if ( letra >'q' && letra<'s')
        printf(" escogido la letra correcta y su posicion correcta. \n");

        else if  (letra>'i' && letra<'k')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'n' && letra<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'k' && letra<'m')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'d' && letra<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
     else{

        printf("letra o caracter  no incluida en la palabra. \n");
     intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
            }


   }


            { // segunda letra






            printf(" \n");
             scanf("%c",&tecla);


     printf("escoja la segunda letra de la palabra, esta se haya en el intervalo b , f de letras del abecedario(letras no incluidas). \n");
    scanf("%c",&tecla);

        if (tecla > 'd' && tecla<'f')
            printf("has escogido la letra correcta y su posicion adecuada, tendras un segundo intento en esta posicion de la letra como ventaja. \n");

          else if (tecla>'i' && tecla<'k')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta, tienes un segundo intento. \n");

            else if (tecla>'n' && tecla<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta , tienes un segundo intento. \n");
        else if (tecla >'k' && tecla<'m')
            printf("la letra esta incluida  pero no en su posicion correcta, tienes un segundo intento. \n");
           else if ( tecla  >'q' && tecla<'s')
        printf("la letra esta incluida  pero no en su posicion correcta , tienes un segundo intento. \n");

        else{
            printf("la letra o caracter no esta incluida en la palabra, tienes un segundo intento. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}

        {

            printf(" este es su segundo intento respecto a la segunda letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if ( letra >'d' && letra<'f')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (letra>'i' && letra<'k')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'n' && letra<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'k' && letra<'m')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'q' && letra<'s')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
        else{
            printf("la letra o caracter no esta incluida en la palabra. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}

            }


   }





    { //tercera letra
        printf("siguiente letra \n");
             scanf("%c",&tecla);

             printf("escoja la tercera letra de la palabra, esta se haya en el intervalo h , m de letras del abecedario(letras no incluidas). \n");
              scanf("%c",&tecla);

      if ( tecla >'k' && tecla<'m')
        printf(" escogido la letra correcta y su posicion correcta, tendras un segundo intento en esta posicion de la palabra como ventaja. \n");
       else if ( tecla >'d' && tecla<'f')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento \n");

         else if (tecla >'q' && tecla<'s')
            printf("letra incluida en la palabra posicion incorrecta, tienes un segundo intento \n");
            else if(tecla>'n' && tecla<'p')
                printf("letra perteneciente a la palabra posicion erronea, tienes un segundo intento \n");
            else if(tecla>'i' && tecla<'k')
             printf("letra se encuentra en la palabra en otra posicion, tienes un segundo intento . \n");


  else{
    printf("la letra o caracter no esta incluida en la palabra, tienes un segundo intento \n");
    intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
    {
         printf(" este es su segundo intento respecto a la tercera letra de la palabra . \n");
              scanf("%c",&tecla);
              printf("escoje la letra , \n");
              scanf("%c",&tecla);
             if ( tecla >'k' && tecla<'m')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (tecla>'q' && tecla<'s')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (tecla>'n' && tecla<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (tecla >'i' && tecla<'k')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( tecla  >'d' && tecla<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
         else{
            printf("letra o caracter no esta incluido en la palabra. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}

    }

    { //cuarta letra
        printf(" esta se encuentra en el intervalo m , q de  letras del abecedario(letras no incluidas). \n");
             scanf("%c",&tecla);

             printf("escoja la cuarta letra de la palabra. \n");
              scanf("%c",&tecla);

      if ( tecla >'n' && tecla<'p')
        printf(" escogido la letra correcta y su posicion correcta, tendras un segundo intento de la palabra como ventaja en esta posicion. \n");
       else if ( tecla >'d' && tecla<'f')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento \n");

         else if (tecla >'q' && tecla<'s')
            printf("letra incluida en la palabra posicion incorrecta, tienes un segundo intento \n");
            else if(tecla>'k' && tecla<'m')
                printf("letra perteneciente a la palabra posicion erronea, tienes un segundo intento \n");
            else if(tecla>'i' && tecla<'k')
             printf("letra se encuentra en la palabra en otra posicion, tienes un segundo intento . \n");

             else{
                printf("la letra o caracter no esta incluida en la palabra tienes un segundo intento. \n");
                intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                }

                 {
         printf(" este es su segundo intento respecto a la cuarta letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if ( letra >'n' && letra<'p')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (letra>'q' && letra<'s')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'k' && letra<'m')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'i' && letra<'k')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'d' && letra<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
         else{
            printf("letra o caracter no incluido en la palabra. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                 }

                 { //quinta letra

                     printf("siguiente letra de la palabra esta se encuentra en el intervalo g,k de  letras del abecedario(letras no incluidas). \n");
             scanf("%c",&tecla);


             printf("escoja la quinta letra de la palabra  \n");
              scanf("%c",&tecla);

      if ( tecla >'i' && tecla<'k')
        printf(" escogido la letra correcta y su posicion correcta, tendras un segundo intento de la palabra como ventaja en esta posicion. \n");
       else if ( tecla >'d' && tecla<'f')
        printf("posicion equivocada de la letra pero esta incluida en la palabra, tienes un segundo intento \n");

         else if (tecla >'q' && tecla<'s')
            printf("letra incluida en la palabra posicion incorrecta, tienes un segundo intento \n");
            else if(tecla>'k' && tecla<'m')
                printf("letra perteneciente a la palabra posicion erronea, tienes un segundo intento \n");
            else if(tecla>'n' && tecla<'p')
             printf("letra se encuentra en la palabra en otra posicion, tienes un segundo intento . \n");

             else{
                printf("la letra o caracter no esta incluida en la palabra tienes un segundo intento. \n");
                intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                }

                 {
         printf(" este es su segundo intento respecto a la quinta letra de la palabra. \n");
              scanf("%c",&letra);
              printf("escoje la letra , \n");
              scanf("%c",&letra);
             if  ( letra >'i' && letra<'k')
        printf(" escogido la letra correcta y su posicion correcta. \n");

       else if  (letra>'q' && letra<'s')
            printf("la letra esta incluida en la palabra pero no en su posicion correcta. \n");
            else if  (letra>'n' && letra<'p')
                 printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else  if (letra >'k' && letra<'m')
            printf("la letra esta incluida  pero no en su posicion correcta. \n");
       else if ( letra  >'d' && letra<'f')
        printf("la letra esta incluida  pero no en su posicion correcta. \n");
         else{
            printf("letra o caracter no incluido en la palabra. \n");
            intentosrealizados ++;
        printf(" este es su %d  intentos \n",intentosrealizados,intentos);}
                 }


   {
int i;
char nombre[30];
int encontrado;
struct resultado sustantivo[2]={ {"reloj"},
{"RELOJ"}
};


                  printf("escriba la palabra: ");
                       scanf("%s",nombre);
encontrado=0;
for(i=0;i<2;i++)
{
int iguales;
iguales=strcmp(nombre,sustantivo[i].nombre);
if(iguales==0)
{
encontrado++;
printf("has adivinado la palabra\n");
ganar=1;

}
}
if(encontrado==0)
printf("has fallado el juego, el juego se volvera a iniciar desde el principio \n");

else
printf("el juego ha finalizado",encontrado);



}
}
}
   }

while (ganar != 1);
int puntuacion;
{


puntuacion= dificultad*100/intentosrealizados;



if(intentosrealizados!=0){
    printf("");}
    if (intentosrealizados=0){
        printf(" obtuviste la maxima puntuacion");}
        printf("has obtenido %d de puntuacion", puntuacion);
    }


                  return puntuacion;
    }

