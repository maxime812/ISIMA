#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAILLE_X 30
#define TAILLE_Y 20

void monstre(int t[TAILLE_X][TAILLE_Y],int x,int y){
	int deplacement=0;
	deplacement=(rand() % 4) ;
	printf("%d\n" ,deplacement) ;
	/*if (deplacement==0 && y!=0 && t[x][y-1]{
		y=y-1;
	}
	else if (deplacement==1 && x<TAILLE_X && t[x+1][y]!=1){
		x=x+1;
	}
	else if (deplacement==2 && y<TAILLE_Y && t[x][y+1]!=1){
		y=y+1;
	}
	else if (deplacement==3 && x!=0 && t[x-1][y]!=1){
		x=x-1;
	}*/
}

int main() {
	int x=10;
	int y=10;
	int t[TAILLE_X][TAILLE_Y];
	srand(time(NULL));
	monstre(t,x,y);
	return 0;
}
