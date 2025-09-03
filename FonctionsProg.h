#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include <conio.h>
using namespace std;
using std::pow;

void ProgCercle() {
	float varRayon, airCercle, volCercle, p1, p2;
	cout << "Veuillez saisir le rayon du cercle en m: ";
	cin >> varRayon;
	while (varRayon < 0) {
		cout << "Le rayon rentrer doit etre positif." << endl;
		cout << "Veuillez rentrer de nouveau le rayon: "; //Demande à l'utilisateur de re saisir une valeur valide
		cin >> varRayon;
	}
	pI = 3.14;//On défini pi
	p1 = pow(varRayon, 2);//On enregistre dans la variable p1 le rayon au carré
	p2 = pow(varRayon, 3);//On enregistre dans la variable p2 le rayon au cube
	airCercle = pI * p1;//On calcule l'air grâce à la formule qui nous est donnée à l'aide de la variable pi et p1
	volCercle = (4 / 3.0) * pI * p2;//On calcule le volume grâce à la formule qui nous est aussi donnée avec les variables pi et p2
	cout << "La surface de ce cercle est de : " << airCercle << " m^2\n"
		<< "Le volume de ce cercle est de: " << volCercle << " m^3\n";//On affiche le résultat
};

void Equation2ndDegre(){

};
void AffichageCarresCubes(){
	int i, j, j2, j3;

	for (i = 0; i < 1; i++) {

		cout << "					AFFICHAGE DES CARRES ET CUBES D'UN NOMBRE" << endl;
		cout << endl;
		cout << "					x		" << "x2		" << "x3		" << endl;

		for (j = 0; j < 51; j++) {

			j2 = pow(j, 2);
			j3 = pow(j, 3);

			if ((j / 10) == true) {
				_getch();
			}

			cout << "					" << j;
			cout << "       |        " << j2;
			cout << "       |      " << j3 << endl;

		}
	}
};

void CalculBinaire(){
	int choixUtill;
	//Affichage du menu


	cout << "PROGRAMMES DE MANIPULATION DE NOMBRES BINAIRES" << endl
		<< "1- Opération booléenes" << endl
		<< "2- Opérations binaires" << endl
		<< "3- Permutation" << endl
		<< "4- Inversion de bits" << endl
		<< "5- Conversion BCD" << endl
		<< "6- Conversion de base" << endl
		<< "Tapez votre choix : ";

	cin >> choixUtill;

	cout << endl;

	switch (choixUtill) {

	case 1: cout << "1- Opération booléenes" << endl;
		cout << endl;

		bool B1, B2;
		unsigned int NB1, NB2, NB3, NB4;

		cout << "B1" << setw(6) << "B2" << setw(6) << "NON" << setw(6) << "ET" << setw(6) << "OU" << setw(6) << "NONOU" << endl;



		for (int i = 0; i < 2; i++) {
			B1 = i;
			for (int j = 0; j < 2; j++) {

				B2 = j;
				cout << B1 << setw(6) << B2 << setw(6) << (!B1) << setw(6) << (B1 && B2) << setw(6) << (B1 || B2) << setw(6) << !(B1 || B2) << endl;
			}


		}



		break;

	case 2:

		cout << "2- Opérations binaires" << endl;

		cout << "Saisir 2 nombres en hexadécimal" << endl

			<< "Nombre 1 : ";

		cin >> hex >> NB1;

		cout << "Nombre 2 : ";

		cin >> hex >> NB2;

		cout << endl;

		cout << "Voici le tableau des opérations binaires pour ces deux nombre :" << endl;

		cout << endl;

		cout << setw(60) << "OPERATIONS BINAIRES" << endl
			<< setw(20) << "Ou binaire" << setw(20) << "Ou logique" << setw(20) << "Et binaire" << setw(20) << "Et logique" << setw(20) << "Ou exclusif" << endl;
		cout << setw(20) << hex << (NB1 | NB2) << setw(20) << hex << (NB1 || NB2) << setw(20) << hex << (NB1 & NB2) << setw(20) << hex << (NB1 && NB2) << setw(20) << hex << (NB1 ^ NB2) << endl;

		break;

	case 3:

		cout << "3- Permutation" << endl;

		cout << "Saisir un nombre en hexadécimal" << endl

			<< "Nombre : ";

		cin >> hex >> NB1;

		cout << endl;

		NB2 = NB1;

		NB3 = NB1 & 0xF0; // Isole le 2ème quartet 

		NB4 = NB1 & 0x0F; // Isole le 1er quartet

		cout << "Nombre rentré : " << hex << NB2 << "  Nombre permuté : " << hex << ((NB3 >> 4) + (NB4 << 4));


		break;

	case 4: cout << "4- Inversion de bits" << endl;

		cout << "Entrez un nombre en hexadécimal " << endl;

		cout << "Nombre : ";

		cin >> hex >> NB1;

		cout << "Nombre rentré : " << hex << NB1 << "  Nombre inversé : " << hex << (NB1 ^ 0x1C0);
};

void ManipulationBinaire(){
	cout << "Vous avez choisi Manipulation binaire";
};

void Quitter(){
	exit(0);
};