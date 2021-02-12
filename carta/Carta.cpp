using std::string;
using std::cout;
using std::endl;
using std::vector;

#include "Carta.h"

Carta::Carta() {
naipe = E;
valor = AS;
}

Carta::Carta(Naipe np,Valor vl) {
setNaipe(np);
setValor(vl);

}

Naipe Carta::getNaipe()const {
return naipe;
}

Valor Carta::getValor()const {
return valor;
}

void Carta::setNaipe(Naipe n) {
naipe=n;
}

void Carta::setValor(Valor v) {
valor=v;
}
void Carta::imprime_carta() {
if((valor==0) || (valor >=10 && valor <= 13)) {
	switch(valor){
		case 0  :cout << "A" ;break;
		case 10 :cout << "D" ;break;
		case 11 :cout << "V" ;break;
		case 12 :cout << "R" ;break;
		case 13 :cout << "J" ;break;
		default: 1;
	}
}
else
	cout << valor+1;

if(valor != 13) {
	switch(naipe) {
		case 0 :cout << "E" << endl;break;
		case 1 :cout << "P" << endl;break;
		case 2 :cout << "C" << endl;break;
		case 3 :cout << "O" << endl;break;
		default: 1;
	}
}
}

bool Carta::epar(Carta outra) {
bool par_bool;
Naipe par_n, par_nsup;
par_n = outra.Carta::getNaipe();
}
