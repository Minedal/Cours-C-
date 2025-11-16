#include <iostream>
#include <string>

/*
	- Variable : type nom = valeur
	-> int : entier [- 2.2milliards ; 2.2milliard]  (Nombre naturel/relatif)
	--> short int : entier plus court 
	--> long int : entier plus long
	--> unsigned int : entier positif

	-> float : nombre à virgule  (nombres réel)
		float nombreVirgule = 15.18f;

	-> double : float mais plus grand (plus de nombre après la virgules)
		double grandNombreVirgule = 18.45662; 

	-> char : caractère unique
		char caractere = 'A';

	-> bool : vrai ou faux  (1 : true ; 0 : false)
		bool condition = true;

	-> auto : devine automatique le type de la variable
		auto test = 'B';  //type char
*/

/*

	Nommage : 
	-> miniscule pour le premier mot
	-> pas d'espace
	-> pas de caractère spéciaux (é, ", -, ;, ., etc)
	-> _ autorisé
	-> majuscule au debuts des autres mots

*/



int main1() {

	int nombreEntier = 15;
	float nombreVirgule = 15.18f;
	double grandNombreVirgule = 15.895911;
	char lettre = 'A';
	bool condition = true;
	
	auto lettre2 = 'B';


	std::string chaine = "Hello";
	


	return 0; //retourne une valeur
}