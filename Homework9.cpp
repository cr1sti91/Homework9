#include "Teme_pe_acasa.h"

int main()
{
	std::cout << "Tema pe acasa:" << std::endl;
	const std::string optiuni_intrare{ R"(
			1.Tema piscina
			2.Tema universitate
			3.Calculator de impozit
			4.Joc de ghicit numarul
	)" };

	//Afisam optiunile posibile
	std::cout << "Optiuni:" << std::endl << optiuni_intrare << std::endl;
	
	//Citim optiunea necesara de la tastatura
	std::cout << "Introduce numarul din dreptul optiunii necesare: "; 
	short optiune{}; 
	std::cin >> optiune;
	std::cout << std::endl;

	//Executam functia ce corespunde optiunei introduse
	if (optiune == 1) {
		temaPiscina();
	}
	else if (optiune == 2) {
		temaUniversitate();
	}
	else if (optiune == 3) {
		calculatorDeImpozit();
	}
	else if (optiune == 4) {
		//Numarul random il setez din afara functiei pentru ca in cazul in care ghicitorul esueaza
		// sa nu fie setat al numar random, insa sa continue sa ghiceasca numarul numarul initial
		
		//Este creat un generator de numere random
		std::random_device rd;
		//Setam o distribuitie intre 1 si 10 a numerelor random
		std::uniform_int_distribution<int> dist(1, 10);
		//Folosind distributia data, asignam o valoare random variabilei ranodom_number
		unsigned short random_number = dist(rd);

		jocDeGhicitNumarul(random_number);
	}
	else {
		std::cout << "Optiune incorecta!" << std::endl;
	}	
}

