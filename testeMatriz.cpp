#include <stdio.h>

main(){
	int mat[3][3];
//Ler uma posição específica	
    //scanf("%d", &mat [1][2]);
//Lendo a matriz inteira
    /*for (int i = 0; i<3;i++){
    	for (int j = 0; j<3;j++){
    		scanf("%d", &mat [i][j]);
		}
	}*/
//Escrever a matriz
    for (int i = 0; i<3;i++){	
      for (int j = 0; j<3;j++){
    		scanf("%d", &mat [i][j]);
		}
	  printf("\n");	
    }
}
