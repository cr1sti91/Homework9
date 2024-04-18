#include "Teme_pe_acasa.h"

void temaPiscina() 
{
	unsigned int varsta{}; 
	std::cout << "TEMA PISCINA:" << std::endl;
	//Citim de la utilizator varsta persoanei
	std::cout << "Introduce-ti varsta persoanei: "; 
	std::cin >> varsta; 

	//Verificam daca persoana poate intra pe gratis sau cu plata
	if (varsta < 7) {
		std::cout << "Gratis!" << std::endl;
	}
	else {
		std::cout << "Pret 30 RON" << std::endl;
	}
}

void temaUniversitate()
{
	unsigned short puncte{};
	std::cout << "TEMA UNIVERSITATE:" << std::endl;
	//Citim de la utilizator numarul de puncte acumulat
	std::cout << "Introduce-ti numarul de puncte: ";
	std::cin >> puncte;

	//Verificam daca utilizatorul este admis sau este respins
	if (puncte >= 90 && puncte <= 100) {
		std::cout << "Admis!" << std::endl;
	}
	else if (puncte < 90 && puncte >= 0) {
		std::cout << "Respins!" << std::endl;
	}
	else {
		std::cout << "Invalid data!" << std::endl;
	}
}


void calculatorDeImpozit() 
{
	std::cout << "CALCULATOR DE IMPOZIT" << std::endl;
	//Citirea venitului anual de la utilizator
	std::cout << "Introduce-ti venitul dvs anual: ";
	double venit_anual{}; 
	std::cin >> venit_anual;

	double impozit{}; 
	//Initializam aparte coeficientii, pentru a evita hard coding
	double coeficient_1 = 0.1, coeficient_2 = 0.15, coeficient_3 = 0.2;

	//Verificam ce impozit trebuie aplicat venitului anual si il calculam
	if (venit_anual <= 15000 && venit_anual >= 0) {
		impozit = coeficient_1 * venit_anual;
	}
	else if (venit_anual > 15000 && venit_anual <= 30000) {
		impozit = coeficient_2 * venit_anual;
	}
	else if (venit_anual > 30000) {
		impozit = coeficient_3 * venit_anual; 
	}
	else {
		//Cazul in care venitul este negativ
		std::cout << "Se pare ca ai avut un an fara noroc :(, succes in anul urmator!" << std::endl;
		return;
	}

	std::cout << "Impozitul tau este: " << impozit << " RON." << std::endl;
}


void jocDeGhicitNumarul(const unsigned short random_number) 
{	
	//Citim numarul introdus de la tastatura
	unsigned short ghicitor{}; 
	std::cout << "Cum crezi, la ce numar ma gandesc (de la 1 la 10)?" << std::endl;
	std::cin >> ghicitor; 

	//Comparam valoarea de la tastatura cu numarul random dat
	if (ghicitor == random_number) {
		std::cout << "Felicitari! Ai ghicit numarul." << std::endl;
	}
	else if (ghicitor < random_number) {
		std::cout << "Prea mic! Incearca din nou." << std::endl;
		std::cout << "Mai doresti o incercare? (Pentru continuare introduce \"Da\") : "; 
		std::string raspuns{}; 
		std::cin >> raspuns; 
		//Verificam daca utilizatorul doreste sa continue sa ghiceasca 
		if (raspuns == "Da") {
			jocDeGhicitNumarul(random_number); 
		}
		else {
			//In caz contrar functia isi termina executarea
			return;
		}
	}
	else if (ghicitor > random_number) {
		std::cout << "Prea mare! Incearca din nou." << std::endl;
		std::cout << "Mai doresti o incercare? (Pentru continuare introduce \"Da\") : ";
		std::string raspuns{};
		std::cin >> raspuns;
		//Verificam daca utilizatorul doreste sa continue sa ghiceasca 
		if (raspuns == "Da") {
			jocDeGhicitNumarul(random_number);
		}
		else {
			//In cazul in care utilizatorul nu doreste sa continue, functia se opreste
			return;
		}
	}
}

