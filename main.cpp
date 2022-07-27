/*
Nous allons écrire un programme permettant de saisir trois notes (sur 20) d'un étudiant,
calculant sa moyenne et affichant cette moyenne avec la mention
("Très bien" à partir de 16, 
"Bien" entre 14 et 16, 
"Assez bien" entre 12 et 14, 
"Passable" entre 10 et 12, 
"Insuffisant" en dessous de 10)
*/

#include <iostream>
using namespace std;

int main()
{
	double N1(0);
	cout << "Entrez N1 comprise entre 0 et 20" << endl;
	cin >> N1;
	cin.ignore();

	double N2(0);
	cout << "Entrez N2 comprise entre 0 et 20" << endl;
	cin >> N2;
	cin.ignore();

	double N3(0);
	cout << "Entrez N3 comprise entre 0 et 20" << endl;
	cin >> N3;
	cin.ignore();

	double moyenne(0); // Calcul de la moyenne
	moyenne = (N1 + N2 + N3) / 3; 

	if (moyenne >= 16)
	{
		cout << "Vous avez la mention Très bien, votre moyenne est " << moyenne << endl;
	}
	else if (moyenne >= 14 and moyenne <= 16)
	{
		cout << "Vous avez la mention bien, votre moyenne est " << moyenne << endl;
	}
	else if (moyenne >= 12 and moyenne <= 14)
	{
		cout << "Vous avez la mention Assez bien, votre moyenne est " << moyenne << endl;
	}
	else if (moyenne >= 10 and moyenne <= 12)
	{
		cout << "Vous avez la mention Passable, votre moyenne est " << moyenne << endl;
	}
	else if (moyenne < 10)
	{
		cout << "Insuffisant, vous n'avez pas la moyenne, votre moyenne est " << moyenne << endl;
	}

	else
	{
		cout << "La moyenne est comprise entre 0 et 20 " << endl;
	}
	return 0; 

}