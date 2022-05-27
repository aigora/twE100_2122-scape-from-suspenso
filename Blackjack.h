#include <time.h>
#include <string.h>
#include <stdlib.h>

void resetcar(int cartas[53]);
void dibujarcartas(int cartas[11],int dim);
int puntuar(int recibidas[11],int dim, int as);
int Blackjack(int dificultad,int *intentos,int *intentosult);


int Blackjack(int dificultad, int *intentos,int *intentosult){
    srand(time(0));//Crea un seed para generar numeros al azar.
    int ran=rand()%19;
    int i;
    int ass=0;
    int as=0;
    int cartas[53];
    int rancarta;
    int numero;
    int palo;
    char paloa[15];
    int cartasrecibidasdim;
    int cartasrecibidas[11];
    int seguir;
    int barajar=0;


    int intentosrealizados=0;
    int ganar;
    int restantes;



    int puntuacion;


    int cartasdealer;
    int vectordealer[11];
    int puntuaciondealer;
    resetcar(cartas);
    char adjetivos[20][40] = {"con un aliento asqueroso", "con un parche en el ojo", "con un moco colgante", "mejicano", "jodidamente asqueroso", "demasiado hablador", "tan enano como tu picha", "de gran edad", "muy mamado","con muchos tatuajes","claramente gay","barbudo","con pelo punk","con un chupeton en el cuello","mas joven que tu","extremadamente tartamudo","con ketchup en la mejilla","cuyo perfume hueles desde tu silla","con el ego por los cielos","rodeado de mujeres"};
    //version 18+ arriba version family abajo.
    //char adjetivos[20][40] = {"maloliente", "tuerto", "ciego", "mejicano", "muy despistado", "demasiado hablador", "enano", "de gran edad", "olimpico de kung fu","con muchos tatuajes","con pendientes de oro","barbudo","con pelo punk","con las gafas redondas de Harry Potter","mas joven que tu","extremadamente tartamudo","con ketchup en la mejilla","cuyo perfume hueles desde tu silla","con el ego por los cielos","que estaba solo"};
    printf("+---------------------------------------------+");
	printf("\n\n                 BLACKJACK                   ");
	printf("\n\n         Nivel de dificultad ");
if(dificultad==1){
            printf("facil.");
        }
        if(dificultad==2){
            printf("intermedio.");
        }
        if(dificultad==3){
            printf("dificil.");
        }

    printf("\n\n+---------------------------------------------+\n\n\n\n");
    int respuesta;
    int repetir;

    printf("Muchas gracias por entrar al casino, vas a jugar a BLACKJACK.\n\n\n");
    printf("-> Te ves en la pantalla junto un dealer ");

    i=0;
        while(adjetivos[ran][i]!='\0' && i<40){
            printf("%c",adjetivos[ran][i]);
            i++;}printf(", te resulta algo familiar.\n");

    restantes=9-dificultad*2;



        if(ganar!=1 && restantes>0){
    do{
    printf("Te quedan %d intentos, pulsa 1 si quieres seguir jugando y 0 si abandonas el casino.\n",restantes);
    fflush(stdin);
    scanf("%d",&respuesta);
    }while(respuesta!=1 && respuesta!=0);
    printf("Esta tecla no es correcta");
    as=0;
    if(respuesta==1){
        repetir=1;
    }else{
        repetir=0;
    }
    }else{
        repetir=0;
    }
//    intentosrealizados++;

//------------------------------------------------------------------------------------------//
do{
    repetir=0;
    printf("Comienza la partida:\n");
    printf("Te recordamos que debido al nivel seleccionado, empiezas con ");
    if(dificultad==1){printf("siete intentos");} if(dificultad==2){printf("cinco intentos");} if(dificultad==3){printf("tres intentos");}printf(" para ganar.\n");
    if(restantes>1){printf("Te quedan %d intentos.\n",restantes);}
    if(restantes==1){printf("Te queda un intento.\n");}
    printf("Empezamos:\n");


    //El dealer recibe su primera carta. se le muestra al jugador
        cartasdealer=0;
        puntuaciondealer=0;

            if(barajar==52){
                printf("El dealer se sorprende, se ve obligado a barajar.\n");
                barajar=0;
                resetcar(cartas);
            }
            do{
                rancarta=rand()%52;

            }while(cartas[rancarta]==1);
            cartasdealer++;
            barajar++;
            vectordealer[cartasdealer-1]=rancarta+1;
            cartas[rancarta]=1;
            if((rancarta)%13>9){
                puntuaciondealer=10;
            }else{
                puntuaciondealer=(rancarta+1)%13;
                if(rancarta%13==0){
                    puntuaciondealer=puntuaciondealer+10; // primera carta si es as vale 11
                }
            }

            dibujarcartas(vectordealer,cartasdealer);
            printf("Esta es la carta que recibe el dealer, por valor de %d puntos.\nAhora tu:\n",puntuaciondealer);

    cartasrecibidasdim=0;
    //recibir la primera carta--------------------------------------------
    if(barajar==52){
        printf("El dealer se sorprende, se ve obligado a barajar.\n");
        barajar=0;
        resetcar(cartas);
    }
    do{
    rancarta=rand()%52;

    }while(cartas[rancarta]==1);
    barajar++;
        cartas[rancarta]=1;

        cartasrecibidasdim++;
        numero=rancarta%13+1;
        palo=rancarta/13.0;
    if(palo==0){strcpy(paloa,"corazones");}
    if(palo==1){strcpy(paloa,"diamantes");}
    if(palo==2){strcpy(paloa,"picas");}
    if(palo==3){strcpy(paloa,"treboles");}
    if(numero>1 && numero<11){
        printf("Recibes un %d de %s",numero,paloa);
    }
    if(numero==1){printf("Recibes un As de %s",paloa);
    printf(" escoge ahora, cuanto vale tu as? (reponde 1 o 11)(no podras cambiar)");
    scanf("%d",&ass);
    if(ass==1){
        as=as+0;
    }
    if(ass==11){
        as=as+10;
    }
    }
    if(numero==11){printf("Recibes una J de %s",paloa);}
    if(numero==12){printf("Recibes una Q de %s",paloa);}
    if(numero==13){printf("Recibes una K de %s",paloa);}
    printf("\n");

    cartasrecibidas[cartasrecibidasdim-1]=rancarta+1;
    puntuacion = puntuar(cartasrecibidas,cartasrecibidasdim,as);
    //recibir a partir de la segunda carta--------------------------------------------
    do{
    if(barajar==52){
        printf("El dealer se sorprende, se ve obligado a barajar.\n");
        barajar=0;
        resetcar(cartas);
    }
    do{
    rancarta=rand()%52;

    }while(cartas[rancarta]==1);
    barajar++;
        cartas[rancarta]=1;

        cartasrecibidasdim++;
        numero=rancarta%13+1;
        palo=rancarta/13.0;
    if(palo==0){strcpy(paloa,"corazones");}
    if(palo==1){strcpy(paloa,"diamantes");}
    if(palo==2){strcpy(paloa,"picas");}
    if(palo==3){strcpy(paloa,"treboles");}
    if(numero>1 && numero<11){
        printf("Recibes un %d de %s",numero,paloa);
    }
    if(numero==1){printf("Recibes un As de %s",paloa);
    printf(" escoge ahora, cuanto vale tu as? (reponde 1 o 11)(no podras cambiar)");
    scanf("%d",&ass);
    if(ass==1){
        as=as+0;
    }
    if(ass==11){
        as=as+10;
    }
    }
    if(numero==11){printf("Recibes una J de %s",paloa);}
    if(numero==12){printf("Recibes una Q de %s",paloa);}
    if(numero==13){printf("Recibes una K de %s",paloa);}
    printf("\n");
    cartasrecibidas[cartasrecibidasdim-1]=rancarta+1;
    dibujarcartas(cartasrecibidas,cartasrecibidasdim);
    puntuacion = puntuar(cartasrecibidas,cartasrecibidasdim,as);
    if(puntuacion>21){
        printf("El dealer te mira con un leve suspiro, te has pasado de puntos y pierdes.\n");
        seguir=666;
        restantes--;
        if(restantes==0){
            printf("Se te acabaron los intentos, has perdido.\n");

        }

    }else if(puntuacion==21){

        printf("El dealer parece enfadarse, has llegado a 21!, ahora es su turno de jugar.\n");
        seguir=0;
    }else{
        printf("Tu dealer ");
        i=0;
        while(adjetivos[ran][i]!='\0' && i<40){
            printf("%c",adjetivos[ran][i]);
            i++;}
        printf(" te pregunta si deseas otra carta.\n");
    do{
    printf("1:si 0:no\n");
    fflush(stdin);
    scanf("%d",&seguir);
    }while(seguir!=1 && seguir!=0);

    }

    }while(seguir==1);
    if(seguir!=666){
        printf("Te has plantado con %d puntos, ahora juega el dealer.\n",puntuacion);
        do{
            if(barajar==52){
                printf("El dealer se sorprende, se ve obligado a barajar.\n");
                barajar=0;
                resetcar(cartas);
            }
            do{
                rancarta=rand()%52;

            }while(cartas[rancarta]==1);
            cartasdealer++;
            barajar++;
            vectordealer[cartasdealer-1]=rancarta+1;
            cartas[rancarta]=1;
            if((rancarta)%13>9){
                puntuaciondealer=puntuaciondealer+10;
            }else{
                puntuaciondealer=puntuaciondealer+(rancarta+1)%13;
            }

            dibujarcartas(vectordealer,cartasdealer);

        if(17>puntuaciondealer){
            printf("El dealer no se detiene, con %d puntos sigue jugando y roba otra carta.\n",puntuaciondealer);
        }
        if(puntuaciondealer>21){
            printf("El dealer se ha pasado, pierde con %d puntos y ganas la partida.\n",puntuaciondealer);
            ganar=1;
            restantes--;
        }
        }while(17>puntuaciondealer && puntuaciondealer<puntuacion);
        if(puntuacion<=puntuaciondealer && puntuaciondealer<22){
            printf("El dealer se ha plantado con %d puntos, te ha ganado, pierdes un intento.\n",puntuaciondealer);

            restantes--;
            if(restantes==0){
            printf("Se te acabaron los intentos, has perdido.\n");

        }
        }
        if(puntuaciondealer<puntuacion){
            printf("El dealer se ha plantado con %d puntos, has conseguido ganar la partida.\n",puntuaciondealer);
            ganar=1;
            restantes--;
        }
    }
    //fin del juego, vemos si hay dinero y si se quiere seguir jugando.
    //---------------------------------------------------------------------//
    if(ganar!=1 && restantes>0){
    printf("Te quedan %d intentos, pulsa 1 si quieres seguir jugando y 0 si abandonas el casino.\n",restantes);
    scanf("%d",&respuesta);
    as=0;
    if(respuesta==1){
        repetir=1;
    }else{
        repetir=0;
    }
    }else{
        repetir=0;
    }
    intentosrealizados++;
}while(repetir==1);
    printf("Abandonas el casino.\n");

    *intentos+=intentosrealizados;
    *intentosult=intentosrealizados;

	return ganar;
}
void resetcar(int cartas[53]){
    int i;
    for(i=0;i<53;i++){
        cartas[i]=0;
    }

    return;
}
void dibujarcartas(int cartas[11],int dim){
    int i;
    int j;
    int numero[11];
    int palo[11];
    char letra[11];
    for(i=0;i<11;i++){
        palo[i]=0;
        letra[i]='0';
    }

    for(i=0;i<dim;i++){
            numero[i]=cartas[i]%13;
            palo[i]=(cartas[i]-1)/13;
            if(palo[i]==4){
                palo[i]=3;
            }

        if(numero[i]==1){letra[i]='A';}
        if(numero[i]==11){letra[i]='J';}
        if(numero[i]==12){letra[i]='Q';}
        if(numero[i]==0){letra[i]='K';}
    }
            for(j=0;j<dim;j++){printf ("+----------------------+   ");}printf("\n");
            for(j=0;j<dim;j++){printf ("|                      |   ");}printf("\n");
            for(j=0;j<dim;j++){printf ("|                      |   ");}printf("\n");
            for(j=0;j<dim;j++){printf ("|                      |   ");}printf("\n");
            for(j=0;j<dim;j++){printf ("|                      |   ");}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|      ..     ..       |   ");}else if(palo[j]==1){printf ("|          ..          |   ");}else if(palo[j]==2){printf ("|          .           |   ");}else if(palo[j]==3){printf ("|        ......        |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|     ....   ....      |   ");}else if(palo[j]==1){printf ("|         ....         |   ");}else if(palo[j]==2){printf ("|        .....         |   ");}else if(palo[j]==3){printf ("|       ........       |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|    ...... ......     |   ");}else if(palo[j]==1){printf ("|        ......        |   ");}else if(palo[j]==2){printf ("|      .........       |   ");}else if(palo[j]==3){printf ("|      ..........      |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|   ...............    |   ");}else if(palo[j]==1){printf ("|       ........       |   ");}else if(palo[j]==2){printf ("|    .............     |   ");}else if(palo[j]==3){printf ("|       ........       |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){if(numero[j]>1 && numero[j]<10){printf ("|  ........%d........   |   ",numero[j]);}else if(numero[j]==10){printf ("|  ........%d.......   |   ",numero[j]);}else{printf ("|  ........%c........   |   ",letra[j]);}}else if(palo[j]==1){if(numero[j]>1 && numero[j]<10){printf ("|     .....%d......     |   ",numero[j]);}else if(numero[j]==10){printf ("|     .....%d.....     |   ",numero[j]);}else{printf ("|     .....%c......     |   ",letra[j]);}}else if(palo[j]==2){if(numero[j]>1 && numero[j]<10){printf ("|   .......%d.......    |   ",numero[j]);}else if(numero[j]==10){printf ("|   .......%d......    |   ",numero[j]);}else{printf ("|   .......%c.......    |   ",letra[j]);}}else if(palo[j]==3){printf ("|   ...............    |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|   ...............    |   ");}else if(palo[j]==1){printf ("|      ..........      |   ");}else if(palo[j]==2){printf ("|    ......  .....     |   ");}else if(palo[j]==3){if(numero[j]>1 && numero[j]<10){printf ("|  .........%d.......   |   ",numero[j]);}else if(numero[j]==10){printf ("|  .........%d......   |   ",numero[j]);}else{printf ("|  .........%c.......   |   ",letra[j]);}}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|    .............     |   ");}else if(palo[j]==1){printf ("|       ........       |   ");}else if(palo[j]==2){printf ("|     ....    ....     |   ");}else if(palo[j]==3){printf ("|   ........ .......   |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|     ...........      |   ");}else if(palo[j]==1){printf ("|        ......        |   ");}else if(palo[j]==2){printf ("|          ..          |   ");}else if(palo[j]==3){printf ("|     ....    ....     |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|      .........       |   ");}else if(palo[j]==1){printf ("|         ....         |   ");}else if(palo[j]==2){printf ("|       ........       |   ");}else if(palo[j]==3){printf ("|          ..          |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|        ......        |   ");}else if(palo[j]==1){printf ("|          ..          |   ");}else if(palo[j]==2){printf ("|    ....      ....    |   ");}else if(palo[j]==3){printf ("|       ........       |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|         ....         |   ");}else if(palo[j]==1){printf ("|                      |   ");}else if(palo[j]==2){printf ("|                      |   ");}else if(palo[j]==3){printf ("|    ..............    |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|          ..          |   ");}else if(palo[j]==1){printf ("|                      |   ");}else if(palo[j]==2){printf ("|                      |   ");}else if(palo[j]==3){printf ("|                      |   ");}}printf("\n");
            for(j=0;j<dim;j++){if(palo[j]==0){printf ("|                      |   ");}else if(palo[j]==1){printf ("|                      |   ");}else if(palo[j]==2){printf ("|                      |   ");}else if(palo[j]==3){printf ("|                      |   ");}}printf("\n");
            for(j=0;j<dim;j++){printf ("|                      |   ");}printf("\n");
            for(j=0;j<dim;j++){printf ("|                      |   ");}printf("\n");
            for(j=0;j<dim;j++){printf ("|                      |   ");}printf("\n");
            for(j=0;j<dim;j++){printf ("|                      |   ");}printf("\n");
            for(j=0;j<dim;j++){printf ("+----------------------+   ");}printf("\n");


    return;
}

int puntuar(int recibidas[11],int dim, int as){

    int puntuacion=0;
    int i;
    for(i=0;i<dim;i++){
        if(recibidas[i]%13>10 || recibidas[i]%13==0){
            puntuacion=puntuacion+10;
        }else{
            puntuacion=puntuacion+recibidas[i]%13+as;
            as=0;
        }
    }

    printf("El valor de tus cartas es de %d puntos.\n",puntuacion);



    return puntuacion;
}
