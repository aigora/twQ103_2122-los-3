#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>


void banner();
void datos();
void registro();


struct Persona
{
    char nombre[50];
    char apellido[50];
    char mail[50];
    char contra[20];
};
typedef struct Persona persona;

struct tiempo
{
    int fecha;
    char dia[50];
    char temporal[50];
};

int main(){


int numero_dias,sesion,respuesta, i=1, j=1, code, resp, luzverde=0, bomba=4, cable,ganar=1, luzroja=0, muerte=0, inicio, ebom, talk, puntos=50;
char jugador[50], instrucciones, top;
int vida_jug = 200;
int bomba_clorobenceno=60, pedrada = 40, rayosUV= 80, cura;
int eleccion = 4, eleccion2=4;
int dano_recibido;
int wurtz = 45, cannizaro_oscuro = 70, claisen = 30, ozonolisis = 55;
int vida_rival = 200, ataque;
int turno = 1;
struct tiempo tiempo [numero_dias];

	
FILE * fentrada;
int dano_hecho;
int acabado = 0;
	
banner();


printf("Bienvenido es la primera vez que juegas?\n1.Iniciar sesion\n2.Registrarse\n3.Salir\n");
scanf("%d",&sesion);


if(sesion==1){        
   registro();
}else if(sesion==2){
 datos();	
 registro();
}else{
    printf("Vuelva pronto\n");
    banner();
    return 0;
}
printf("Loading...");
sleep(2);
system("cls");




while(inicio!=1){
	banner();
printf("Bienvendio a Butrul run ??Que desea hacer?\n");
printf("1 Modo Historia\n2.Como jugar\n3.Top jugadores\n");
scanf("%d",&resp);


    if(resp==1){
    	inicio=1;
    	printf("Has accedido al modo historia\n\n\n");
    	printf("Hola heroe!! Bienvenido a Butrul Run\n\nComo te llamas?\n");
	        scanf("%s", jugador);
	printf("numero de dias: ");
	scanf("%d", &numero_dias);
	
	for(i = 0; i < numero_dias; i++) {
		printf("dia de la semana: ");
		fflush(stdin);
		gets(tiempo[i].dia);
		printf("numero del dia: ");
		scanf("%d", &tiempo[i].fecha);
		printf("tiempo meteorologico: ");
		fflush(stdin);
		gets(tiempo[i].temporal);
		printf("\n");
	}
	
	for(i = 0; i < numero_dias; i++) {
		printf("el dia %s %d se encuentra %s", tiempo[i].dia, tiempo[i].fecha, tiempo[i].temporal);
		printf("\n");
	}
	        printf("\n%s, te encuentras en el escondite del BUTRUL y debes de investigar el lugar para encontrar las pistas oportunas para avanzar en la mision.\n", jugador);
         	printf("Se encuentran a la vista varios objetos para comprobar:\n");
        	while (i==1){
		        printf("\t 1._ Libreta\n\t 2._ Escritorio\n\t 3._ Armario\nEscoja uno de los 3 elementos\n");
        		scanf("%d", &respuesta);
        		system("cls");
		        if (respuesta == 1){
		     		FILE * fmochila;
					fmochila = fopen("mochila.txt", "r");
					if(fmochila == NULL){
	    				printf("Error en la apertura del fichero\n");
						return 0;
					puntos += 10;
					}else{
						fmochila = fopen("mochila.txt", "w");
						fprintf(fmochila, "libreta\n");
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
         			puntos -= 10;
        		}else if(respuesta==3){
	        		printf("En el armario hay algunas ropas, posibles disfraces... pero nada digno de interes\n");
        			printf("Elige otra vez\n");
			        i=1;
			        puntos -= 10;
	        	}else{
			        printf("Esta respuesta no existe, elige otra vez\n");
		        	i=1;
		        	puntos -= 10;
	        	}
         	}   
			printf("Leyendo...\n");
   			sleep(3);
			
			printf("'El sujeto del experimento da buena reaccion a la sintesis de Wurtz, parece que incrementa su fuerza a la par que sus cadenas carbonadas.'\n \tSeguir leyendo los apuntes (1)\n\tCerrar el libro (2)\n");
			scanf("%d", &respuesta);
			while(respuesta==2){
				printf("Creo que quedan muchas cosas que saber en los Nieto`s Secades Notes...\n.\n.\n.\n");
				scanf("%d", &respuesta);
				puntos -= 10;				
			}
			puntos += 10;
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
                        puntos -= 10;
            		}else {
                		printf("Enhorabuena! La bomba esta desactivada\n");
                		muerte=1;
                		puntos += 10;

                    }

	
            }
            printf("Despues de desactivar la bomba, examinas el artefacto? (1 Si, 2 No)\n");
            scanf("%d", &ebom);
            while (ebom==2){
            	printf("Puede haber cosas interesantes en la bomba\n\Escoge otra vez\n");
            	scanf("%d", &ebom);
            	puntos -= 10;
			}
			puntos += 10;
            system("cls");
			printf("Que curioso!!! Era una bomba de clorobenceno. Me lo quedo\nEnhorabuena, has encontrado clorobenceno y lo has guardado en la mochila\n");
			FILE * fmochila;
			fmochila = fopen("mochila.txt", "r");
			if(fmochila == NULL){
	    		printf("Error en la apertura del fichero\n");
				return 0;
			}else{
				fmochila = fopen("mochila.txt", "a");
				fprintf(fmochila, "clorobenceno\n");
				fclose(fmochila);
			}
			sleep(2);
			
			printf("Al salir del escondite del BUTRUL te encuentras a un amigo de la universidad. El doctor Claissen. Quieres hablar con el? (1 si, 2 no)\n");
			scanf("%d", &talk);
			while(talk==2){
				printf("Estas seguro? Hace mucho que no le ves...\n");
				scanf("%d", &talk);
				puntos -= 10;
			}
			puntos += 10;
			printf("'Hola %s', cuanto tiempo, el doctor Friedel me ha dado una cosa para ti!!!\n", jugador);
			printf("El doctor Claissen te ha regalado un generador de Rayos UV, lo has metido en la mochila y ya tienes todo lo necesario para derrotar al BUTRUL\n");
			fmochila = fopen("mochila.txt", "r");
			if(fmochila == NULL){
	    		printf("Error en la apertura del fichero\n");
				return 0;
			}else{
				fmochila = fopen("mochila.txt", "a");
				fprintf(fmochila, "Rayos UV");			
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
		
		if(vida_rival<=0){
			acabado=1;
			break;
		}
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
	
		
		}
	if (vida_rival && vida_jug <= 0)
		printf("Doble KO");
	else if(vida_rival <= 0){
		system("cls");
		
		printf("¡Felicidades! has derrotado a Butrul\n.\n.\n.");
		printf("Enhorabuena, has salvado el mundo de la voracidad del butrul, gracias a ti podremos vivir tranquilos %s\n Has completado esta aventura con un total de %d puntos y seras inscrito en el top de jugadores\n", jugador, puntos);
		
		if(fentrada == NULL){
		    printf("Error en la apertura del fichero\n");
			return 0;
		}else{
			fentrada=fopen("top.txt","a");
			fprintf(fentrada, "%s\t%d", jugador, puntos);
			fclose(fentrada);
			}
	}
	else if (vida_jug <= 0)
		printf("Has sido vencido por Butrul, arderas en el infierno");
		banner();
}

    if(resp==2){
    	inicio=0;
    	printf("Has accedido a las instrucciones\n");
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



void registro(){
	struct Persona persona;
	int i;
int	arroba;
int punto;
do{
	printf("Introduzca su mail\n");
    fflush(stdin);
    scanf("%s", persona.mail);
    for (i = 0; i < 15; i++){
        if (persona.mail[i] == '@'){
            arroba = 1;
        }            
        if (persona.mail[i] == '.'){
            punto = 1;
        }           
    }            
        if (arroba == 1 && punto == 1){
            printf("Correo valido\n");
        }        
        else{
            printf("Correo invalido\n");
        }        

} while (arroba != 1 && punto != 1);
    printf("Introduzca la contrasena\n");
    scanf("%s", persona.contra);
}


void datos(){
	struct Persona persona;
	int i;
	    printf("Datos de la persona\n");
        printf("Introduzca el nombre\n");
        fflush(stdin);
        gets(persona.nombre);
        printf("Introduzca apellido\n");
        gets(persona.apellido);
        fflush(stdin);

}
