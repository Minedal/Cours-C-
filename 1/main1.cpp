#include <iostream>
#include <string>

/*
	- Variable : type nom = valeur
	-> int : entier [- 2.2milliards ; 2.2milliard]  (Nombre naturel/relatif)
	--> short int : entier plus court 
	--> long int : entier plus long
	--> unsigned int : entier positif

	-> float : nombre � virgule  (nombres r�el)
		float nombreVirgule = 15.18f;

	-> double : float mais plus grand (plus de nombre apr�s la virgules)
		double grandNombreVirgule = 18.45662; 

	-> char : caract�re unique
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
	-> pas de caract�re sp�ciaux (�, ", -, ;, ., etc)
	-> _ autoris�
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