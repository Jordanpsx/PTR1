#ifndef Classes_H
#define Classes_H

#include<iostream>
using namespace std;

class Classes {
	string NmClasse; 										// - Nome da classe
	int CdClasse; 											// - C�digo da Classe
	static int BPinicial;									// - Numero do Bonus de Proficiencia Inicial
	string TesteResistencia;								// - Tipo de resistencia inicial por tipo de classe
	
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
		
		/* C�digo da Classe */
		void set_CdClasse(int codigo) {
			CdClasse = codigo;
		}
		
		int get_CdClasse() {
			return CdClasse;
		}
		/* B�nus de Profici�ncia Inicial */
		void set_BPinicial(int bp) {
			BPinicial = bp;
		}
		
		int get_BPinicial() {
			return BPinicial;
		}
		
		/* Resist�ncias */
		void set_TesteResistencia(string resistencia) {
			TesteResistencia = resistencia;
		}
		
		string get_TesteResistencia() {
			return TesteResistencia;
		}
};

void definirClassePersonagem(int CdClasse);
int coutDefineClasse();
int setandoClasse();

#endif
