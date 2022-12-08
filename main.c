#include <stdio.h>
#include <conio.h>
int main ()
{
    int opcionSwitch,opcionGeneros;
    char opcionGeneros2,opcionReproductor,opcionCanciones;
    
    printf("Bienvenido a SpotiUv\n"); 
    printf("1.Explorar Generos\n");
    printf("2.Explorar Canciones\n");
    printf("3.Reproductor\n");
    printf("4.Salir\n");
    printf("Selecciona una opcion: ");
    scanf("%i",&opcionSwitch);

        switch (opcionSwitch)
        {
        case 1: printf("Generos\n");
                printf("1.<Nombre genero>\n");
                printf("2.<Nombre genero>\n");
                printf("3.<Nombre genero>\n");
                printf("Opciones:\n");
                printf("p: Regresar al menu principal\n");
                printf("1...n: Seleccionar un genero\n");
                printf("Selecciona una opcion: ");
                scanf("%i",&opcionGeneros);
                scanf("%c",&opcionGeneros2);

                switch (opcionGeneros)
                {
                    case 1: printf("Aqui van los generos");
                        break;                
                    default:
                        break;
                    }
                    switch (opcionGeneros2)
                    {
                    case 'p': printf("Regresando al menu principal...");
                        break; 
                    default:
                        break;
                }
                    break;

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                   
        case 2: printf("Lista de canciones");
                printf("1.<Nombre cancion>\n");
                printf("  <Nombre artista>\n");
                printf("2.<cancion>\n");
                printf("  <Nombre artista>\n");
                printf("Opciones:\n");
                printf("p: Regresar al menu principal\n");
                printf("a: 10 Canciones anteriores\n");
                printf("d: 10 Canciones siguientes \n");
                printf("q: Agregar a la cola una cancion de la lista\n");
                printf("r: Reproducir una cancion\n");
                printf("Selecciona una opcion: ");
                scanf("%c",&opcionCanciones);
                
                switch (opcionCanciones)
                {
                case 'p': printf("Regresando al menu principal...");
                    break;
                case 'a': printf("10 Canciones anteriores...");
                    break;
                case 'd': printf("10 Canciones siguientes...");
                    break;
                case 'q': printf("Agregar a la cola una cancion de la listal...");
                    break;
                case 'r': printf("Reproducir una cancion...");
                    break;
                
                default:
                    break;
                }
            break;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 3: printf("Reproductor\n");
                printf("Actualmente sonando:\n");
                printf("<Nombre de la cancion>\n");
                printf("<Nombre del artista>\n");
                printf("<   ||   >\n");
                printf("Opciones:\n");
                printf("p: Regresar al menu principal\n");
                printf("a: Cancion anterior\n");
                printf("d: Siguiente cancion\n");
                printf("e: Repetir cancion\n");
                printf("r: Activar/desactivar Repeticion\n");
                printf("s: Pausar/Continuar sonando\n");
                printf("Selecciona una opcion: ");
                scanf("%c",&opcionReproductor);

                    switch (opcionReproductor)
                    {
                      case 'p': printf("Regresando al menu principal...");
                                break;
                      case 'a': printf("Cancion anterior...");
                                break;
                      case 'd': printf("Siguiente cancion...");
                                break;
                      case 'e': printf("Repetir cancion...");
                                break;
                      case 'r': printf("Activar/desactivar Repeticion...");
                                break;
                      case 's': printf("Pausando/Continuando...");
                                break;
                      default: 
                                break;
                   }
                   break;

        case 4: printf("Saliendo...");
            break;
        default: 
            break;
          
        }
    
return 0;
}