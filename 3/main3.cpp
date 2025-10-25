#include <iostream>
#include <string>



/*

	int a, b;

	- addition : 
	int c = a + b;

	- soustraction :
	int c = a - b;

	- multiplication :
	int c = a * b;

	- division :
	int c = a / 2;

	- modulo :  //reste de la division
	int c = a % b;


	//les priorités de calcul s'effectue comme en maths
	- parenthèse
	a * a + b;  différent de a * (a + b);

	//string :
	std::string s1, s2;
	std::string s3 = s1 + s2;


*/


int main() {

	int a = 5;
	int b = 10;
	int c = a + b;

	std::cout << a * a + b << std::endl;
	std::cout << a * (a + b) << std::endl;

	//string
	std::string s1 = "Salut";
	std::string s2 = "Comment ca va ?";
	std::string s3 = s1 + ". " + s2;
	std::cout << s3 << std::endl;



	return 0;
}