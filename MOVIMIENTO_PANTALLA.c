#include <stdio.h>
//acceso a componentes de una estructura
typedef struct {
int x=0,y=0;
} punto;

// Función para controlar el desplazamiento horizontal, siendo xy el
// punto, y n el número de unidades a desplazar
void horizontal(punto *xy, int n);
// Función para controlar el desplazamiento vertical
void vertical(punto *xy, int n);

int main () {
punto xy;
int n=0;
char letra;
printf("El programa funciona con la interacción del usuario a partir de las teclas w (arriba), a (izquierda), x (abajo), d (derecha), y sus correspondientes mayúsculas./n Por ejemplo, si el usuario aprieta la tecla w el punto se desplaza haciaarriba una unidad,/n y si aprieta W se desplaza cinco unidades hacia arriba.\n");

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

printf("El punto es (%d,%d)\n", xy.x, xy.y);
}while(letra != 's');


return 0;
}


void horizontal(punto *xy, int n){
	xy->x = xy->x + n;



}

void vertical(punto *xy, int n){
	xy->y = xy->y + n;


}

int pantalla(){
int fil, col, caso;
char pared=254, columna=219, columna_arriba=220, columna_abajo=223;
int pantalla[20][30]={
	{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
	{4,0,3,3,3,3,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,3,3,3,3,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,3,3,3,3,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,6,6,2,2,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4},
	{6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,2,2,6}

	};

	for(fil=0; fil<20; fil++){
		for(col=0; col<30; col++){
		    if(pantalla[fil][col]==1){
                    printf("%c", pared);

		    }
		    if(pantalla[fil][col]==0){
                    printf(" ");

		    }
		    if(pantalla[fil][col]==2){
                    printf("-");

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
		     if(pantalla[fil][col]==6){
                    printf("%c", columna_abajo);

		    }

        }
                    printf("\n");

	}
	return 0;
}

