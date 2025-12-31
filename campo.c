#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define t1 9

void moggado(char array[t1][t1], int n){
	for(short int i = 0; i < t1; i++){
		for(short int q = 0; q < t1; q++){
			short int v = 0;
				if(q == 0 && q == 9){

					if (array[q][i] == array[0][i]){

						if(array[q+1][i] == 'b'){
							v += 1;
							printf("a\n");
						}
						if(array[q][i+1] == 'b')
							v += 1;
							printf("i\n");
						if(array[q+1][i+1] == 'b'){

							v += 1;
							printf("h\n");
						}

					}
					else if(array[q][i] == array[9][i]){
						if(array[q-1][i] == 'b'){
							v += 1;
							printf("o\n");
						}
						if(array[q][i+1] == 'b'){
							v += 1;
							printf("q\n");
						}

						if(array[q-1][i+1] == 'b'){
							v += 1;
							printf("y\n");
						}
					}
							
							


				array[i][q] = v + '0';

				
				}
			
			}
	}
	

		
		
	
	




void lelouch(char array[t1][t1], int n){
	srand(time(NULL));
	for(short int i = 0; i < 10; i++){
		short int l = rand() % t1;
		short int j = rand() % t1;
		array[l][j] = 'b';
	}
	moggado(array, n);


}


int main(void){
	char jogo[t1][t1];
	int n = sizeof(jogo) / sizeof(jogo[0]);

	short int x, d;
	printf("escolha a coordenada:\n"); scanf("%d %d", &x, &d);

	bool i = true;
	do{
		lelouch(jogo, n);
		i = false;		
	
	}while(i == true);
	for(short int q1 = 0; i < t1; q1++){
		for(short int q2 = 0; q2 < t1; q2++){
			printf("%c", jogo[q1][q2]);
		
		}
	}
	return 0;



}
