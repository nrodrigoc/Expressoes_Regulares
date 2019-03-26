#include <iostream>
#include <conio.h>
#include <iterator>
#include <string>
#include <regex>

/*Avalia se o automato foi aceito*/
void PrintMatches(std::string str, std::regex reg) {
	bool match = std::regex_match(str, reg); //compara o que foi recebido (str) com o a linguagem (reg)
	std::cout << (match ? "Aceito" : "Nao aceito") << std::endl;
	std::cout << "\n";
}

void VerificaCPF() {

}

void VerificaTelefone() {
	std::cout << "Digite um telefone valido: ";
	std::string str;
	std::cin >> str;
	std::regex reg("[[:d:]]{4}-[[:d:]]{4}");
	PrintMatches(str, reg);
}

void VerificaEmail() {
	std::cout << "Digite um email valido: ";
	std::string str;
	std::cin >> str;
	std::regex reg("[[:w:]|-]+@[[:lower:]]+\\.(com|org|br)");
	PrintMatches(str, reg);
}

void VerificaURL() {
	std::cout << "Digite um URL valido: ";
	std::string str;
	std::cin >> str;
	std::regex reg("[w]{3}\\.[[:w:]]+\\.(com|org|br)");
	PrintMatches(str, reg);
}

void Menu() {
	int opcao;
	std::cout << "Qual automato deseja acessar? (Digite o numero correspondente)\n\n";
	std::cout << "(1)Verificador de CPF\n"
				 "(2)Verificador de Telefone\n"
				 "(3)Verificador de Email\n"
				 "(4)Verificador de URL\n";
	std::cin >> opcao;
	std::cout << "\n";

	switch (opcao) {
		case 1: VerificaCPF(); break;
		case 2: VerificaTelefone(); break;
		case 3: VerificaEmail(); break;
		case 4: VerificaURL(); break;
		default: break;
	}
}


int main() {

	while (true) {
		Menu();
		std::cout << "Pressione qualquer tecla para continuar...";
		_getch();
		system("cls");
	}

	return 0;
}