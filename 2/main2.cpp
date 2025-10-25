#include <iostream>
#include <string>

/*
	
	- std::cout : permet d'afficher du texte / la valeur d'une variable
	- << : ins�re une cha�ne de caract�re

	- std::endl : ins�rer un saut de ligne et vider le tampon de sortie

	- std::cin : permet d'�crire dans la console et d'enregistrer sa valeur dans une variable
	- >> : extrait une ch�ine de caract�re
	
	- std::getline(std::cin, [variable]) : fonction qui permet de lire toute la ligne en entier  //n�cessite <string>


	- s�quence d'�chappement :
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