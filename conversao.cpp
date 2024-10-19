#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

main(){
	//int
	float temp, CF, FC, FK, KF ,CK, KC, unidC;
    char esc, unid, comp, conv;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Tendo em vista que: \nT representa temperatura e C representa comprimento ");
	
	printf("\nCom qual unidade de medida você quer trabalhar? ");
	scanf("%c", &unid);
	
     	switch (toupper(unid)){
		case 'T': printf("\nQual escala termométrica de origem? "); break;
		case 'C': printf("\nQual a unidade de comprimento de origem? "); break;
		default:  printf("\nCaractere inválido");	
    }
	
	if(unid=='t' || unid=='T'){
	       printf("\nAs escalas termométricas estão representadas por: \nF para Fahrenheit \nC para Celsius \nK para Kelvin \nEscolha uma delas: ");
		   scanf("%s", &esc);
		   
		       switch(toupper(esc)) {
		       case 'F': printf("\nDigite o valor correspondente: ");
		                 scanf("%f", &temp); break;
		       case 'C': printf("\nDigite o valor correspondente: ");
		                 scanf("%f", &temp); break;
			   case 'K': printf("\nDigite o valor correspondente: ");
		                 scanf("%f", &temp); break;		          
		       default:  printf("\nEscala não existente ");         
			   }
			     
			      printf("\nConsiderando que: \n1 = Celsius para Farenheit \n2 = Farenheit para Celsius \n3 = Farenheit para Kelvin \n4 = Kelvin para Farenheit \n5 = Celsius para Kelvin \n6 = Kelvin para Celsius ");
			      
				       printf("\nO valor de %2.f será convertido para qual escala? ", temp);
			           scanf("%s", &conv);
			                switch (conv){
			            	case '1': CF= ((temp*1.8)+ 32);
							          printf("\nSua conversão fica em %2.f Farenheit ", CF);break;							           							         
		                    case '2': FC=((temp-32)/1,8);
		                              printf("\nSua conversão fica em %2.f Celsius ", CF);break;							            														 
			                case '3': FK= ((((temp-32)*5)/9) +273);
			                          printf("\nSua conversão fica em %2.f Kelvin", FK);break;			                          			                	
							case '4': KF = (((temp-273)*1.8) +32);
							          printf("\nSua conversão fica em %2.f Farenheit", KF);break;	         
							case '5': CK = (temp+273);
							          printf("\nSua conversão fica em %2.f Kelvin", CK);break;			
							case '6': KC =	(temp-273);
							          printf("\nSua conversão fica em %2.f Celsius", KC);break;						 		          
		                    default:  printf("\nConversão não existente "); 
			            	
						}
				    
	}else
	   if(unid=='c' || unid =='C'){
	   	    printf("\nAs unidades de comprimento são: \n1-Quilômetros (km) \n2-Hectômetros (hm) \n3-Decâmetro (dam) \n4-Metro (m) \n5-Decímetro (dm) \n6-Centímetro (cm) \n7-Milímetro (mm)");
	        printf("\nEscolha uma delas: ");
	        scanf("%s", &comp);
	          switch(comp) {
		       case '1': printf("\nDigite o valor correspondente: ");
		                 scanf("%f", &unidC); break;
		       case '2': printf("\nDigite o valor correspondente: ");
		                 scanf("%f", &unidC); break;
			   case '3': printf("\nDigite o valor correspondente: ");
		                 scanf("%f", &unidC); break;
			   case '4': printf("\nDigite o valor correspondente: ");
		                 scanf("%f", &unidC); break;
		       case '5': printf("\nDigite o valor correspondente: ");
		                 scanf("%f", &unidC); break;
			   case '6': printf("\nDigite o valor correspondente: ");
		                 scanf("%f", &unidC); break;	          
		       default:  printf("\nNão existente ");         
			   }
			   
			     printf("\nVocê quer converter para qual unidade?");
			     //scanf("%s", &convUnid);
			          /*switch (convUnid){
			          	case 1: 
					  }*/
			         
			      
			  
	   
	   }
	
	

}
