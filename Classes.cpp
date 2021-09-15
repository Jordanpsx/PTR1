#include<iostream>
#include<locale.h>
using namespace std;

class Classes {
	string NmClasse = ""; 								// - Nome da classe
	int CdClasse = 0; 									// - Código da Classe
	int BPinicial = 2;									// - Numero do Bonus de Proficiencia Inicial
	string TesteResistencia = "";						// - Tipo de resistencia inicial por tipo de classe
	//int DadoVida;									
	//PvNiveisPosteriores
	
	public:
		/* Nome da Classe */
		void set_NmClasse(string name) {
			NmClasse = name;
		}
		
		string get_NmClasse() {
			return NmClasse;
		}
		
		/* Código da Classe */
		void set_CdClasse(int codigo) {
			CdClasse = codigo;
		}
		
		int get_CdClasse() {
			return CdClasse;
		}
		/* Bônus de PRoficiência Inicial */
		int get_BPinicial() {
			return BPinicial;
		}
		
		/* Resistências */
		void set_TesteResistencia(string resistencia) {
			TesteResistencia = resistencia;
		}
		
		string get_TesteResistencia() {
			return TesteResistencia;
		}
		
		
		CoutDefineClasse();
		system("clear");
		definirClassePersonagem(CdClasse);
		
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
	cout << "\nEntão..." << endl << "Escolha qual classe ?jogador? deseja"
		 << "\nCaso não conheça sobre as classes ou deseja revisar, digite 0" << endl;
	
	int varClasse;	
	cout << "Classe do seu personagem: ";
	cin >> varClasse;
	
	if(varClasse == 0) {
		system("start http......");
		
		cout << "\nClasse do seu personagem: ";
		cin >> varClasse;
	}
	
	else if(varClasse > 12) {
		cout << "\nValor inválido.\nEscolha novamente a classe do seu personagem: ";
		cin >> varClasse;
	}
	
	else {
		Classes personagem;
		personagem.set_CdClasse(varClasse);
	}
}

void definirClassePersonagem(int CdClasse) {
	Classes personagem;
	
	switch(CdClasse) {
		case 1: 
			personagem.set_NmClasse("Bárbaro");
			personagem.set_TesteResistencia("Força" + "\n" + "Constituição");
			cout << "O seu personagem é um Bárbaro."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
				
		case 2:
			personagem.set_NmClasse("Bardo");
			personagem.set_TesteResistencia("Destreza" + "\n" + "Carisma");
			cout << "O seu personagem é um Bardo."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
				
		case 3: 
			personagem.set_NmClasse("Clérigo");
			personagem.set_TesteResistencia("Sabedoria" + "\n" + "Carisma");
			cout << "O seu personagem é um Clérigo."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
			
		case 4: 
			personagem.set_NmClasse("Druida");
			personagem.set_TesteResistencia("Inteligência" + "\n" + "Sabedoria");
			cout << "O seu personagem é um Druida."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
			
		case 5: 
			personagem.set_NmClasse("Guerreiro");
			personagem.set_TesteResistencia("Força" + "\n" + "Constituição");
			cout << "O seu personagem é um Guerreiro."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
			
		case 6: 
			personagem.set_NmClasse("Monge");
			personagem.set_TesteResistencia("Força" + "\n" + "Destreza");
			cout << "O seu personagem é um Monge."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
		
		case 7: 
			personagem.set_NmClasse("Paladino");
			personagem.set_TesteResistencia("Sabedoria" + "\n" + "Carisma");
			cout << "O seu personagem é um Paladino."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
			
		case 8: 
			personagem.set_NmClasse("Guardião");
			personagem.set_TesteResistencia("Força" + "\n" + "Destreza");
			cout << "O seu personagem é um Guardião."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
			
		case 9: 
			personagem.set_NmClasse("Ladino");
			personagem.set_TesteResistencia("Destreza" + "\n" + "Inteligência");
			cout << "O seu personagem é um Ladino."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
		
		case 10: 
			personagem.set_NmClasse("Feiticeiro");
			personagem.set_TesteResistencia("Constituição" + "\n" + "Carisma");
			cout << "O seu personagem é um Feiticeiro."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
				
		case 11: 
			personagem.set_NmClasse("Bruxo");
			personagem.set_TesteResistencia("Sabedoria" + "\n" + "Carisma");
			cout << "O seu personagem é um Bruxo."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
			
		case 12: 
			personagem.set_NmClasse("Mago");
			personagem.set_TesteResistencia("Inteligência" + "\n" + "Sabedoria");
			cout << "O seu personagem é um Mago."
			/* Parte de couts que definirão as carcterísticas do personagem
			*/
			break;
					
		default:
			break;
	}		
}
