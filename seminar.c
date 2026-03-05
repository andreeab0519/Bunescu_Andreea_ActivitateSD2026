/*#include<stdio.h>
int main() {
    printf("Hello World!\n Introduceti un numar intreg") ;
    int variabila=0; //citesc nr intreg
    scanf("%d", &variabila); //citesc o variabila intreaga
    printf("Ai introdus: %d", variabila);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    printf("Introduceti un numar real: ");
    float variabila = 0.0;
    scanf("%f", &variabila); // citirea unei var reale
    printf("Ati introdus %5.2f", variabila);
    return 0;
}
*/
//sablon1
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define strcpy_s(dest, size, src) strcpy(dest, src)
struct Telefon {
	int id;
	int RAM;
	char* producator;
	float pret;
	char serie;
};

struct Telefon initializare(int id, int ram,const char* producator, float pret, char serie) {  //funct de init
	struct Telefon t;    //declar var locala
	t.id = id;                                                                 //init prin atrib directa
	t.RAM = ram;
	t.producator = (char*)malloc(sizeof(char) * (strlen(producator) + 1));     //aloc dinamic memorie in heap
	strcpy_s(t.producator, strlen(producator) + 1, producator);               //copiaza continutul string ului in mem alocata
	t.pret = pret;
	t.serie = serie;
	return t;
}

void afisare(struct Telefon t) {                 //primeste struct prin val
	if (t.producator != NULL) {                  //verifica daca exista producator
		printf("%d. Telefonul %s seria %c are %d GB RAM si costa %5.2f RON.\n", 
			t.id, t.producator, t.serie, t.RAM, t.pret);  //afiseaza campurile struct
	}
	else {
		printf("%d. Telefonul din seria %c are %d GB RAM si costa %5.2f RON.\n",
			t.id, t.serie, t.RAM, t.pret);
	}
}

void modificaPret(struct Telefon* t, float noulPret) {   //primeste pointer la struct
	if (noulPret > 0) {
		t->pret = noulPret;                             //modif direct campul pret al structurii
	}                                                    //permite modificarea struct init
}

void dezalocare(struct Telefon* t) {               //elibereaza memoria alocata dinamic pt producator
	if (t->producator != NULL) {
		free(t->producator);                   //elibereaza memoria din heap
		t->producator = NULL;                 //evita pointer dangling
	}
}

int main() {
	struct Telefon t;
	t = initializare(1, 256, "Samsung", 2000.5, 'A');
	afisare(t);
	modificaPret(&t, 1000);

	afisare(t);
	dezalocare(&t);
	afisare(t);
	return 0;
}
*/

//sablon2 
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #define strcpy_s(dest, size, src) strcpy(dest,src)
 struct Telefon {
    int id;
    int RAM;
    char* producator;
    float pret;
    char serie;
 };

 struct Telefon initializare ( int id, int ram, const char* producator, float pret, char serie /*parametrii necesari*/) {
    struct Telefon t;
    t.id = id;
    t.RAM = ram;
    t.producator = (char*)malloc(sizeof(char)*(strlen(producator)+1));
    strcpy_s(t.producator, strlen(producator)+1, producator);
    t.pret = pret;
    t.serie = serie;
    return t;
 }
void afisare(struct Telefon t){
                                                                                        //afisarea unui atribut
    if(t.producator!=NULL){
    printf("%d. Telefonul %s seria %c are %d Gb RAM si costa %5.2f RON\n ", 
    t.id, t.producator, t.serie, t.RAM, t.pret);
    } else{
        printf("%d. Telefonul seria %c are %d Gb RAM si costa %5.2f RON\n ", 
    t.id, t.serie, t.RAM, t.pret);
    }
}
/*void modificaPret( struct Telefon t, float noulPret){
    if(noulPret > 0) {
    t.pret = noulPret;
    }

}*/
void modificaPret (struct Telefon* t, float noulPret) {
    if ( noulPret > 0) {
        t->pret = noulPret;
    }
}
void dezalocare(struct Telefon* t){
    //decalozare campuri alocate dinamic
    //struct Telefon t;
    //return 0;
    if(t->producator != NULL) {
        free(t->producator);
        t->producator = NULL;
    }
}
//int main()
//{
//  struct Telefon t;
 // t = initializare(1, 256, "Samsung", 2000.5, 'A');
//  afisare(t);
//   modificaPret(t, 1000);
//  afisare(t);
//  return 0;
//}
int main()
{
    struct Telefon t;
    t = initializare(1, 256, "Samsung", 2000.5, 'A');
    afisare(t);
    modificaPret(&t, 1000);
    afisare(t);
    dezalocare(&t);
    afisare(t);
    return 0;
}
