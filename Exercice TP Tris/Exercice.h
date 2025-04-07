#ifndef EXERCICE_H
#define EXERCICE_H


typedef struct {

	char nomM[20];
	int codeM;
	int dateM;
	int datePM;
	float prixM;
	int uvendueM;
	int stock;

}Medoc;

Medoc *nouveauMedicament();
void affichage();

#endif 

