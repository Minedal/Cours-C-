#include <iostream>
#include <string>

/*
	
	- std::cout : permet d'afficher du texte / la valeur d'une variable
	- << : insère une chaîne de caractère

	- std::endl : insérer un saut de ligne et vider le tampon de sortie

	- std::cin : permet d'écrire dans la console et d'enregistrer sa valeur dans une variable
	- >> : extrait une châine de caractère
	
	- std::getline(std::cin, [variable]) : fonction qui permet de lire toute la ligne en entier  //nécessite <string>


	- séquence d'échappement :
	-> \n : saute de ligne
	-> \t : tabulation horizontale
	-> \v : tabulation vertical
	-> \\ : pour afficher un anti slash
	-> \" : pour afficher un guillemet

*/


int main2() {
	

	int nb = 3;
	std::cout << "nombre : " << nb << std::endl;

	std::string name;
	std::cout << "Nom : ";
	//std::cin >> name;
	std::getline(std::cin, name);
	std::cout << name << std::endl;


	std::cout << "----------------------" << std::endl << std::endl;
	std::cout << "salut \ncomment ca va ?" << std::endl;
	std::cout << "\t salut" << std::endl;
	std::cout << "\v double salut" << std::endl;
	std::cout << "\\ , \" , \'";



	return 0;
}