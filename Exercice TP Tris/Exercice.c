#include <stdio.h>
#include <stdlib.h>
#include "Exercice.h"



Medoc* nouveauMedicament() {

	
	Medoc* nvMedoc = malloc(sizeof(Medoc));

	if (nvMedoc == NULL)
	{
		printf("Erreur d'allocation !\n");
	
	}

	else {
		printf("\nEntrer le nom de votre medicament : ");
		scanf_s("%s", &nvMedoc->nomM, 20);
		getchar();
		printf("\nEntrer le code de votre medicament : ");
		scanf_s("%d", &nvMedoc->codeM);
		getchar();
		printf("\nEntrer la date de fabriquation de votre medicament : ");
		scanf_s("%d", &nvMedoc->dateM);
		getchar();
		printf("\nEntrer la date de peremption de votre medicament : ");
		scanf_s("%d", &nvMedoc->datePM);
		getchar();
		printf("\nEntrer le prix de votre medicament : ");
		scanf_s("%f", &nvMedoc->prixM);
		getchar();
		printf("\nEntrer le nombre de vente de votre medicament : ");
		scanf_s("%d", &nvMedoc->uvendueM);
		getchar();
		printf("\nEntrer le stock restant de votre medicament : .");
		scanf_s("%d", &nvMedoc->stock);
		getchar();
	}

	return nvMedoc;
	
	
}

void affichage() {

	
	
	Medoc* medicament;

	printf("\n\n----Menu Pharmacetique----\n\n");
	printf("1. Entrer un nouveau médicament\n");
	printf("2. Rechercher un medicament\n");

	printf("\nChoix : ");
	int choix;
	scanf_s("%d",&choix);
	getchar();

	if (choix == 1) 
		medicament = nouveauMedicament();

	//if (choix == 2) rechercheMedicament();

	else printf("\n Erreur de saisie.");


}

int main() {


		affichage();

	




	return 0;
}