#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>

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

int main(){
banner();
int respuesta, i=1, j=1, code, resp, luzverde=0, bomba=4, cable,ganar=1, luzroja=0;
char jugador[50], instrucciones, top;



printf("Bienvendio a Butrul run Â¿que desea hacer?\n");
printf("1 Modo Historia\n2.Como jugar\n3.Top jugadores\n");
scanf("%d",&resp);

    if(resp==1){
    	printf("Has accedido al modo historia\n\n\n");
    	printf("Hola heroe!! Bienvenido a Butrul Run\n\nComo te llamas?\n");
	        scanf("%s", jugador);
	        printf("\n%s, te encuentras en el escondite del BUTRUL y debes de investigar el lugar para encontrar las pistas oportunas para avanzar en la mision.\n", jugador);
         	printf("Se encuentran a la vista varios objetos para comprobar:\n");
        	while (i==1){
		        printf("\t 1._ Libreta\n\t 2._ Escritorio\n\t 3._ Armario\nEscoja uno de los 3 elementos\n");
        		scanf("%d", &respuesta);
		        if (respuesta == 1){
		        	printf("En la libreta encuentras unas anotaciones. Parece una informacion clasificada. Hay una especie de rompecabezas. Quiza sea la solucion\n");
		        	printf("Coges el papel y parece que hay unos simbolos raros\n");
					printf("@ + @ + @ = 30\n");
					printf("@ + $ + 2$ = 25\n");
					printf("$ + & + & = 9\n");
					printf("code:$@&$@\n");
					//el codigo es 5102510
					while(j==1){
						printf("introduzca la clave para leer la informacion clasificada\n");
						scanf("%d", &code);
						printf("has introducido %d\t",code);
						if(code == 5102510){
					    	printf("codigo correcto, ahora puedes leer lo que pone en la libreta.\n");
					 		j=0;
						}else{
 							printf("codigo erroneo\n");
 							j=1;
 						}
 					}

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
			        printf("Esta respuesta no existe, elige otra vez\n");
		        	i=1;
	        	}
         	}   
			printf("Leyendo...\n");
   			sleep(3);
			printf("'El sujeto del experimento da buena reaccion a la sintesis de Wurtz, parece que incrementa su fuerza a la par que sus cadenas carbonadas.'\n \tSeguir leyendo los apuntes (1)\n\tCerrar el libro (2)\n");
			scanf("%d", &respuesta);
			while(respuesta==2){
				printf("Creo que quedan muchas cosas que saber en los Nieto`s Secades Notes...\n.\n.\n.\n");
				scanf("%d", &respuesta);				
			}
			sleep(2);
			printf("'...El sujeto se ve debil ante los compuestos clorados, ante la exposicion al clorobenceno se vuelve extremadamente agresivo y, posteriormente, recobrara su estado normal'\n.\n.\n\n");
			printf("%s, esta sonando un pitido intermitente desde el fondo de la habitacion,  deberias acercarte a mirar.\n.\n.\n.\n", jugador);
			printf("Acercandose...\n");
			sleep(2);
			printf("PORRAS, HAS ACTIVADO UN SISTEMA DE DEFENSA DEL BUTRUL!!!\n");
			
			printf("has llegado a una puerta que tiene un artefacto extraño\nParecen 7 cables, hay que cortar los correctos.....\nNo parece que haya ningun acertijo\nHay 3 luces\n");
//	cables correctos 3,6 y 7

        	while(bomba!=1){
		    printf("que cable cortas\n");
		    scanf("%d", &cable);
	    	if(cable==1||cable==2||cable==4||cable==5){
		    	printf("se ha encendido una luz roja, Parece que ese cable era incorrecto.....Aun quedan %d intentos\n",2-luzroja);
			    bomba=bomba-1;
			    luzroja++;
		    }else if(cable==3||cable==6||cable==7){
	        	printf("se ha encendido una luz verde.");
        		luzverde=luzverde+1;
        		printf("numero de luces verdes=%d\n quedan %d luces verdes\n",luzverde , 3-luzverde);	}
	    	if(luzverde==3){
		    	bomba=1;
	     	}
	
        	if(luzverde!=3){

            	printf("Has muerto........Volviendo al punto de partida\n\n\nhas llegado a una puerta que tiene un artefacto extraño\nParecen 7 cables, hay que cortar los correctos.....\nNo parece que haya ningun acertijo\nHay 3 luces\n");
	    	    bomba=0;
			}else {
	        	printf("Enhorabuena! La puerta esta abierta");
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
