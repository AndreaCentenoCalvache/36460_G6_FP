/*Universidad de las Fuerzas Armadas-ESPE
   Asignatura  : Fundamentos de Programación
   Estudiante  : Andrea Centeno
   NRC         : 36460
   Fecha       : 12/11/2026
   Enunciado    : Uso básico de punteros
   Descripción : Muestra el contenido y la dirección de variables
                 enteras usando los operadores & (dirección) y
                 * (contenido), y cómo un puntero cambia de destino.
   Salidas     : contenidos y direcciones de memoria de a, b, p y q.
 */

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 0;
    int *p = NULL;
    int *q = NULL;

    printf("Contenido de a = %d\n", a);
    printf("Direccion de a = %p\n", (void *)&a);

    p = &a;      /* p apunta a a */
    b = *p;      /* b copia el valor 10 */

    printf("Direccion a la que apunta p = %p\n", (void *)p);
    printf("Contenido de *p = %d\n", *p);
    printf("Contenido de b = %d\n", b);

    q = &b;      /* q apunta a b */
    p = q;       /* p ahora también apunta a b */

    printf("Direccion de b = %p\n", (void *)&b);
    printf("Contenido de *q = %d\n", *q);
    printf("Direccion a la que apunta q = %p\n", (void *)q);
    printf("Direccion a la que apunta p = %p\n", (void *)p);

    return 0;
}
