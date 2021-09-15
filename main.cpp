#include <iostream>
#include<locale.h>
#include "Classes.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	setandoClasse();
	
	Classes loka;
	cout << loka.get_CdClasse();
	return 0;
}
