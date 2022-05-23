#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>


void banner();
int resp;
int respuesta, i=1;
char jugador[50], instrucciones, top;

int main(){
banner();
printf("Bienvendio a Butrul run ¿que desea hacer?\n");
printf("1 Modo Historia\n2.Como jugar\n3.Top jugadores\n");
scanf("%d",&resp);
    if(resp==1){
    	printf("has accedido al modo historia\n");
    	printf("Hola heroe!! Bienvenido a Butrul Run ¿Como te llamas?\n");
	        scanf("%s", jugador);
	        printf("%s, te encuentras en el escondite del BUTRUL y debes de investigar el lugar para encontrar las pistas oportunas para avanzar en la mision.\n", jugador);
         	printf("Se encuentran a la vista varios objetos para comprobar:\n");
        	while (i==1){
		        printf("\t 1._ Libreta\n\t 2._ Escritorio\n\t 3._ Armario\nEscoja uno de los 3 elementos\n");
        		scanf("%d", &respuesta);
		        if (respuesta == 1){
		        	printf("En la libreta encuentras unas anotaciones. Parece una informacion clasificada.Hay una especie de rompecabezas.Quiza sea la solucion\n");
			        i=0;
		        }else if(respuesta == 2){
         			printf("En el escritorio hay algunos mapas de la ciudad... pero nada digno de interes\n");
        			printf("Elije otra vez\n");
         			i=1;
        		}else if(respuesta==3){
	        		printf("En el armario hay algunas ropas, posibles disfraces... pero nada digno de interes\n");
        			printf("Elige otra vez\n");
			        i=1;
	        	}else{
			        printf("Esta respuesta no existe, elige otra vez");
		        	i=1;
	        	}
         	}
	        }
    if(resp==2){
    	printf("Has accedido a las instrucciones\n");
    	 FILE * fentrada;
		 fentrada = fopen("instrucciones.txt", "r");
		if(fentrada == NULL){
		    printf("Error en la apertura del fichero\n");
			return 0;
		}else{
			while((instrucciones = fgetc (fentrada)) !=EOF){
				printf("%c", instrucciones);
			}
		}
		
	}
	if(resp==3){
    	printf("Top jugadores\n");
		 FILE * fentrada;
		 fentrada = fopen("top.txt", "r");
		if(fentrada == NULL){
		    printf("Error en la apertura del fichero\n");
			return 0;
		}else{
			while((top = fgetc (fentrada)) !=EOF){
				printf("%c", top);
			}
		}
		
	}

	return 0;
}

void banner(){
	                                                                                            
printf("@@@@@@@   @@@  @@@  @@@@@@@  @@@@@@@   @@@  @@@  @@@          @@@@@@@   @@@  @@@  @@@  @@@\n" );
printf("@@@@@@@@  @@@  @@@  @@@@@@@  @@@@@@@@  @@@  @@@  @@@          @@@@@@@@  @@@  @@@  @@@@ @@@\n");
printf("@@!  @@@  @@!  @@@    @@!    @@!  @@@  @@!  @@@  @@!          @@!  @@@  @@!  @@@  @@!@!@@@\n");
printf("!@   @!@  !@!  @!@    !@!    !@!  @!@  !@!  @!@  !@!          !@!  @!@  !@!  @!@  !@!!@!@!\n" );
printf("@!@!@!@   @!@  !@!    @!!    @!@!!@!   @!@  !@!  @!!          @!@!!@!   @!@  !@!  @!@ !!@!\n");
printf("!!!@!!!!  !@!  !!!    !!!    !!@!@!    !@!  !!!  !!!          !!@!@!    !@!  !!!  !@!  !!!\n" );
printf("!!:  !!!  !!:  !!!    !!:    !!: :!!   !!:  !!!  !!:          !!: :!!   !!:  !!!  !!:  !!!\n" );
printf(":!:  !:!  :!:  !:!    :!:    :!:  !:!  :!:  !:!   :!:         :!:  !:!  :!:  !:!  :!:  !:!\n");
printf(":: ::::  ::::: ::     ::    ::   :::  ::::: ::   :: ::::     ::   :::  ::::: ::   ::   ::\n");
printf(":: : ::    : :  :      :      :   : :   : :  :   : :: : :      :   : :   : :  :   ::    : \n");
printf("                                                                                         \n"  );
printf(".\n.\n");                                                                                        
}
