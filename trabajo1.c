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
int respuesta, i=1, j=1, code, resp, luzverde=0, bomba=4, cable,ganar=1, luzroja=0, muerte=0, inicio, ebom, talk;
char jugador[50], instrucciones, top, l[]="Libreta", c[]="Clorobenceno", r[]="Rayos UV";
int vida_jug = 200;
int bomba_clorobenceno=60, pedrada = 40, rayosUV= 80, cura;
int eleccion = 4, eleccion2=4;
int dano_recibido;
int wurtz = 45, cannizaro_oscuro = 70, claisen = 30, ozonolisis = 55;
int vida_rival = 200, ataque;
int turno = 1;
	

int dano_hecho;
int acabado = 0;	




while(inicio!=1){
printf("Bienvendio a Butrul run Â¿que desea hacer?\n");
printf("1 Modo Historia\n2.Como jugar\n3.Top jugadores\n");
scanf("%d",&resp);

    if(resp==1){
    	inicio=1;
    	printf("Has accedido al modo historia\n\n\n");
    	printf("Hola heroe!! Bienvenido a Butrul Run\n\nComo te llamas?\n");
	        scanf("%s", jugador);
	        printf("\n%s, te encuentras en el escondite del BUTRUL y debes de investigar el lugar para encontrar las pistas oportunas para avanzar en la mision.\n", jugador);
         	printf("Se encuentran a la vista varios objetos para comprobar:\n");
        	while (i==1){
		        printf("\t 1._ Libreta\n\t 2._ Escritorio\n\t 3._ Armario\nEscoja uno de los 3 elementos\n");
        		scanf("%d", &respuesta);
        		system("cls");
		        if (respuesta == 1){
		     		FILE * fmochila;
					fmochila = fopen("instrucciones.txt", "r");
					if(fmochila == NULL){
	    				printf("Error en la apertura del fichero\n");
						return 0;
					}else{
						fmochila = fopen("mochila.txt", "w");
						fprintf(fmochila, "%s\n",l);
						fclose(fmochila);
					}
					printf("Enhorabuena, ahora tienes la libreta guardada en tu mochila\n");
		        	sleep(1);
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
			system("cls");
			printf("'...El sujeto se ve debil ante los compuestos clorados, ante la exposicion al clorobenceno se vuelve extremadamente agresivo y, posteriormente, recobrara su estado normal'\n.\n.\n\n");
			printf("%s, esta sonando un pitido intermitente desde el fondo de la habitacion,  deberias acercarte a mirar.\n.\n.\n.\n", jugador);
			printf("Acercandose...\n");
			sleep(2);
			printf("PORRAS, HAS ACTIVADO UN SISTEMA DE DEFENSA DEL BUTRUL!!!\n");
			
			printf("Has llegado a una puerta que tiene un artefacto extraño\nParecen 7 cables, hay que cortar los correctos.....\nNo parece que haya ningun acertijo\nHay 3 luces\n");
//	cables correctos 3,6 y 7
           while(muerte!=1){
            	while(bomba!=1){
	            	printf("Que cable cortas?\n");
            		scanf("%d", &cable);
            		if(cable==1||cable==2||cable==4||cable==5){
            			printf("Se ha encendido una luz roja, Parece que ese cable era incorrecto.....Aun quedan %d intentos\n",2-luzroja);
            			bomba=bomba-1;
            			luzroja++;
            		}else if(cable==3||cable==6||cable==7){	
	                	printf("Se ha encendido una luz verde.");
                		luzverde=luzverde+1;
                		printf("Numero de luces verdes=%d\n quedan %d luces verdes\n",luzverde , 3-luzverde);	}
		            if(luzverde==3){
		            	bomba=1;
	                }	
	
	               }if(luzverde!=3){

                    	printf("Has muerto........Volviendo al punto de partida\n\n\nhas llegado a una puerta que tiene un artefacto extraño\nParecen 7 cables, hay que cortar los correctos.....\nNo parece que haya ningun acertijo\nHay 3 luces\n");
                        bomba=0;
                        muerte=0;
                        luzverde=0;
            		}else {
                		printf("Enhorabuena! La bomba esta desactivada\n");
                		muerte=1;

                    }

	
            }
            printf("Despues de desactivar la bomba, examinas el artefacto? (1 Si, 2 No)\n");
            scanf("%d", &ebom);
            while (ebom==2){
            	printf("Puede haber cosas interesantes en la bomba\n\Escoge otra vez\n");
            	scanf("%d", &ebom);
			}
            system("cls");
			printf("Que curioso!!! Era una bomba de clorobenceno. Me lo quedo\nEnhorabuena, has encontrado clorobenceno y lo has guardado en la mochila\n");
			FILE * fmochila;
			fmochila = fopen("instrucciones.txt", "r");
			if(fmochila == NULL){
	    		printf("Error en la apertura del fichero\n");
				return 0;
			}else{
				fmochila = fopen("mochila.txt", "w");
				fprintf(fmochila, "%s\n", c);
				fclose(fmochila);
			}
			sleep(2);
			
			printf("Al salir del escondite del BUTRUL te encuentras a un amigo de la universidad. El doctor Claissen. Quieres hablar con el? (1 si, 2 no)\n");
			scanf("%d", &talk);
			while(talk==2){
				printf("Estas seguro? Hace mucho que no le ves...\n");
				scanf("%d", &talk);
			}
			printf("'Hola %s', cuanto tiempo, el doctor Friedel me ha dado una cosa para ti!!!\n", jugador);
			printf("El doctor Claissen te ha regalado un generador de Rayos UV, lo has metido en la mochila y ya tienes todo lo necesario para derrotar al BUTRUL\n");
			fmochila = fopen("instrucciones.txt", "r");
			if(fmochila == NULL){
	    		printf("Error en la apertura del fichero\n");
				return 0;
			}else{
				fmochila = fopen("mochila.txt", "w");
				fprintf(fmochila, "%s\n", r);			
	}
	    printf("TODO SE MUEVE, SE ESTA AGRIETANDO LA SUPERFICIE\n\n\n");
	    printf("¡AUCH! ¡Que dano! Vaya golpe te has metido. Que clima mas raro, hace mucho calor...\n\n");
	    printf("-GRRRR- -GRRRR- -GRRRR-\n\n");
	    printf("ES BUTRUL!!! Hay que luchar, no queda otra!\n");
	    printf("Has llegado al final campeon, llega el momento que decidira tu futuro y el del resto de la poblacion\n");
	    printf("Es el momento de enfrentarte a BUTRUL y acabar con todos los males que ha causado!\n\n");
	

	while (acabado != 1){
		
		//Contador turnos
		printf("\n----------------------------------------\nTurno %d\n\n", turno);
		turno++;
		
	
		//Turno estudiante
		printf("Elige una accion:\n Pedrada<1> , Bomba de clorobenceno<2>, Rayos UV<3>, Cura<4>\n");
		scanf("%d", &eleccion);
		if (eleccion == 1){
			dano_hecho= pedrada;
			printf("Has utilizado pedrada! Le has quitado %d puntos de vida\n", dano_hecho);
			}
		else if (eleccion == 2){
			dano_hecho = bomba_clorobenceno; 
			printf("Has utilizado Bomba de Clorobenceno! Le has quitado %d puntos de vida\n", dano_hecho);
			}
		else if (eleccion == 3){
			dano_hecho= rayosUV;
			printf("Has utilizado rayos UV! Le has quitado %d puntos de vida\n", dano_hecho);
		}
		else if (eleccion == 4){
			vida_jug += 40;
			printf("Te has curado 40 puntos, tu vida pasa a ser %d\n", vida_jug);
			dano_hecho = 0;
		}
		else{
			printf("No te sabes este ataque, has perdido el turno por empanado.");
		}
		vida_rival -= dano_hecho;
		printf("Butrul tiene %d puntos de vida\n", vida_rival);
		//Turno rival
		
		printf("\n¿Que hara ahora Butrul?\n\n");
		eleccion2 = rand() % 4 + 1;
		if(eleccion2 == 1){
			dano_hecho = wurtz;
		printf("Butrul uso sintesis de wurtz!\n");
		}
		else if(eleccion2 == 2){
			dano_hecho = cannizaro_oscuro;
		printf("Butrul uso cannizaro oscuro!\n");
		}
		
		else if(eleccion2 == 3){
		dano_hecho = claisen;
		printf("Butrul uso condensacion de claisen!\n");	
		}
	
		else if(eleccion2 == 4){
			dano_hecho= ozonolisis;
		printf("Butrul uso ozonolisis!\n");
		}
		
		
		vida_jug -= dano_hecho;
		
		printf("\n\n\nEl rival te ha hecho %d puntos de dano, tienes %d puntos de vida\n\n\n\n\n\n\n\n\n\n\n", dano_hecho, vida_jug);
		//cls aqui
		
		if(vida_jug <= 0)
		acabado = 1;
		else if(vida_rival <= 0)
		acabado = 1;
		
		}
	if (vida_rival && vida_jug <= 0)
		printf("Doble KO");
	else if(vida_rival <= 0)
		printf("¡Felicidades! has derrotado a Butrul");
	else if (vida_jug <= 0)
		printf("Has sido vencido por Butrul, arderas en el infierno");
}
    if(resp==2){
    	inicio=0;
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
		printf("\n\n\n");
		
	}
	if(resp==3){
		inicio=0;
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
		printf("\n\n\n");
	}
	}

	
	return 0;
}


