#include <stdio.h>
#include <stdlib.h>

//ESTRUCTURAS:
typedef struct {
int x=0,y=0;
} punto;

//FUNCIONES:
void imprime_pantalla(punto *xy, int n);
int dificultad();
void nivel1(int n);
void nivel2(int n);
void nivel3(int n);
void pista(int n);
void movimiento(int n);
void horizontal(punto *xy, int n);
void vertical(punto *xy, int n);


int menu()
{
	
int i, n=0;	
n= dificultad();
nivel1(n);
nivel2(n);
nivel3(n);
	
	
	
 return 0;
}

int dificultad(){
	int i;
	char dificultad;
	printf("Elige la dificultad:\n");
	printf("\t a.Facil\n \t b.Medio\n \t c.Dificil\n");
	scanf("%c", &dificultad);
	switch(dificultad){
		
		case 'a':
		case 'A':
			i=1;
			printf("Has elegido el nivel facil\n");
			system("cls");
			printf("ERES UN CAGAO\n");
			system("cls");
			break;
			
		case 'b':
		case 'B':
			i=2;
			printf("Has elegido el nivel medio\n");
			system("cls");
			printf("BUENO VENGA, QUE NO TE LO VOY A PONER TAN FACIL...\n");
			system("cls");
			break;
			
		case 'c':
		case 'C':
			i=3;
			printf("Has elegido el nivel dificil\n");
			system("cls");
			printf("VAMOS VALIENTE!\n");
			system("cls");
			break;
	}
return i;
	
}

void imprime_pantalla(int n){
	
	
	int fil, col;
char pantalla[20][30]={
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
	{'#','|','_','_','_','_','|','#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','|','_','_','_','_','|','#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','|','_','_','_','_','|','#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
    {'#','·','·','·','·','·','·','#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','#','#','-','-','#','#','#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','·','#'},
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','-','-','#'},
	};
	
	for(fil=0; fil<20; fil++){
		for(col=0; col<30; col++){
			printf("%c", pantalla[fil][col]);
			printf("\n");
		
	}
	
}
}
void movimiento(int n){
	
	punto xy;

char letra;
printf("El programa funciona con la interacciÃ³n del usuario a partir de las teclas w (arriba), a (izquierda), x (abajo), d (derecha), y sus correspondientes mayÃºsculas./n Por ejemplo, si el usuario aprieta la tecla w el punto se desplaza haciaarriba una unidad,/n y si aprieta W se desplaza cinco unidades hacia arriba.\n");

do{
scanf("%c", &letra);
switch(letra){
	case 'a':
	n=-1;
	horizontal( &xy, n);	
	break;
	
	case 'A':
	n=-1;
	horizontal( &xy, n);
	break;
	
	case 'd':
	n=1;
	horizontal( &xy, n);
	break;
	
	case 'D':
	n=1;
	horizontal( &xy, n);
	break;
	
	case 'w':
	n=1;
	vertical( &xy, n);	
	break;
	
	case 'W':
	n=1;
	vertical( &xy, n);	
	break;
	
	case 's':
	n=-1;
	vertical( &xy, n);	
	break;
	
	case 'S':
	n=-1;
	vertical( &xy, n);	
	break;
	
}
	
void imprime_pantalla(xy, n);



printf("El punto es (%d,%d)\n", xy.x, xy.y);

}while(letra != 'q');


	
}


void horizontal(punto *xy, int n){
	xy->x = xy->x + n;
	
	

}

void vertical(punto *xy, int n){
	xy->y = xy->y + n;
	

}

	
	





