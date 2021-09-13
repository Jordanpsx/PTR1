#include<iostream>
#include<locale.h>
using namespace std;

class Classes {
	string NmClasse; 								// - Nome da classe
	int CdClasse; 									// - Código da Classe
	int NrBPinicial;								// - Numero do Bonus de Proficiencia Inicial
	
	public:
		void set_NmClasse(string newNmClasse) {
			NmClasse = newNmClasse;
		}
		
		string getNmClasse() {
			return NmClasse;
		}
		
		void setCdClasse(int newCdClasse) {
			CdClasse = newCdClasse;
		}
		
		int getCdClasse() {
			return CdClasse;
		}
		
		void setNrBPinicial(int newNrBPinicial) {
			NrBPinicial = newNrBPinicial;
		}
		
		int getNrBPinicial() {
			return NrBPinicial;
		}	
};

void CoutDefineClasse() {
	setlocale(LC_ALL, "Portuguese");
	cout << "Bem vindo ?jogador?" <<endl; // decidimos dps
	cout << "Está na hora de voce escolher a classe do seu personagem."
		 << "\nExistem 12 classes dentro do D&D5, elas são:"
		 << "\n1 => Bárbaro (BARBARIAD)"
		 << "\n2 => Bardo (BARD)"
		 << "\n3 => Clérigo (CLERIC)"
	 	 << "\n4 => Druida (DRUID)"
	 	 << "\n5 => Guerreiro (FIGHTER)"
	 	 << "\n6 => Monge (MONK)"
	 	 << "\n7 => Paladino (PALADIN)"
	 	 << "\n8 => Guardião (RANGER)"
	 	 << "\n9 => Ladino (ROGUE)"
	 	 << "\n10 => Feiticeiro (SORCERER)"
	 	 << "\n11 => Bruxo (WARLOCK)"
	 	 << "\n12 => Mago (WIZARD)" << endl;
	cout << "\nEntão..." << endl << "Digite o número de qual classe ?jogador? deseja"
		 << "\nCaso não conheça sobre as classes ou deseja revisar, digite 0" << endl;
	
	int varClasse;	
	cout << "Classe do seu personagem: ";
	cin >> varClasse;
	
	if(varClasse == 0) {
		system("start http......");
		
		cout << "Classe do seu personagem: ";
		cin >> varClasse;
	}
	
	Classes classe;
	classe.setCdClasse(varClasse);
	return;
}
