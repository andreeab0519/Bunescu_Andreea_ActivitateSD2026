/*#include<stdio.h>
int main() {
    printf("Hello World!\n Introduceti un numar intreg") ;
    int variabila=0; //citesc nr intreg
    scanf("%d", &variabila); //citesc o variabila intreaga
    printf("Ai introdus: %d", variabila);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    printf("Introduceti un numar real: ");
    float variabila = 0.0;
    scanf("%f", &variabila); // citirea unei var reale
    printf("Ati introdus %5.2f", variabila);
    return 0;
}
