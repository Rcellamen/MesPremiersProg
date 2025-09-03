/*Nom du projet : (MesPremiersProg)
Nom de l'auteur : CELLAMEN
Date de création : 03/09/2025
Révison ou version : 16.10.0
Version du compilateur : 4.8.04084
Résumé : Programme permettant de choisir une action à effectuer parmi un menu d'options proposé. 
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include "FonctionsProg.h"
using namespace std;
using std::pow;



int main()
{
	std::locale::global(std::locale("fr-FR")); //Pour l'utilisation des accents 


	int choixUtil;
	//Affichage du menu


	cout << "Choissisez votre programme" << endl
		<< "1- Programme de cercle" << endl
		<< "2- Equation 2nd degré" << endl
		<< "3- Affichage des carrées et cubes d'un nombre" << endl
		<< "4- Calcul binaire" << endl
		<< "5- Manipulation binaire" << endl
		<< "6- Quitter" << endl
		<< "Tapez votre choix : ";

	cin >> choixUtil;
	if (choixUtil < 0 || choixUtil > 6) {
		cout << "Le choix n'est pas valide, veuillez recommencer : " << endl
			<< "Choissisez votre programme" << endl
			<< "1- Programme de cercle" << endl
			<< "2- Equation 2nd degré" << endl
			<< "3- Affichage des carrées et cubes d'un nombre" << endl
			<< "4- Calcul binaire" << endl
			<< "5- Manipulation binaire" << endl
			<< "6- Quitter" << endl
			<< "Tapez votre choix : ";
		cin >> choixUtil;
	}
	cout << endl;
	switch (choixUtil) {
	case 1 :
		
			{
			cout << "Vous avez choisi Programme de cercle";
			ProgCercle();
			}
			break;
	case 2:
	{
		cout << "Vous avez choisi equation 2nd degré";	
	}
	break;
	case 3:
	{
		cout << "Vous avez choisi Affichage des carrées et cubes d'un nombre" << endl;
		
	}
	break;
	case 4:
	{
		cout << "Vous avez choisi Calcul binaire" << endl;
		

	break;
	}
	break;
	case 5:
	{
		
	}
	break;
	case 6:
	{
		cout << "Vous avez choisi Quitter";
		
	}
	break;
	default:
		break;	
}

