#include <iostream>





/*

	Si : 
	if(condition){[code]}

	sinon si :
	else if(condition){[code]}

	sinon :
	else{[code]}

	opérateur :
	- < : inférieur
	- <= : 
	- > :
	- >= :
	- == :
	- && :
	- || :
	- != :
	- ! : 

	

	Switch :

	switch(variable){
	case condition :
		[code];
		break;
	case condition2 :
		[code];
		break;

	default :
		[code];
		break;
	}
	
*/





int main() {

	int age = 14;
	bool condition = false;

	if (age >= 18) {
		std::cout << "Majeur" << std::endl;
	}
	else {
		std::cout << "Mineur" << std::endl;
	}



	std::cout << " ---------------------------  " << std::endl << std::endl;

	if (condition) {
		std::cout << "vraie" << std::endl;
	}
	else if (!condition) {
		std::cout << "faux" << std::endl;
	}


	std::cout << " ---------------------------  " << std::endl << std::endl;

	int prix = 20;
	int prix2 = 14;

	if (prix == 20 && prix == 17) {
		std::cout << "prix = 20 euros ET 17 euros" << std::endl;
	}
	else if (prix == 20 || prix == 17) {
		std::cout << "prix = 20 euros OU 17 euros" << std::endl;
	}
	if (prix != 15) {
		std::cout << "prix different de 15 euros" << std::endl;
	}



	std::cout << " ---------------------------  " << std::endl << std::endl;



	switch (age) {
	case 0:
		std::cout << "age = 0" << std::endl;
		break;

	case 1:
	case 2:
	case 3:
		std::cout << "age = 1, 2, 3" << std::endl;
		break;

	case 18:
		std::cout << "age = 18" << std::endl;
		break;

	default:
		std::cout << "age = " << age << std::endl;
		break;

	}

	if (age == 0);





	return 0;
}