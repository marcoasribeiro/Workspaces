#ifndef CARTA_H_
#define CARTA_H_

enum Naipe {E, P, C, O};
enum Valor {AS, DOIS, TRES, QUATRO, CINCO, SEIS,
SETE, OITO, NOVE, DEZ, DAMA, VALETE, REI, JOKER};

class Carta2
{
private:
Naipe naipe;
Valor valor;
/public:
Carta();
Carta(Naipe,Valor);
void setNaipe(Naipe);
void setValor(Valor);
void imprime_carta();
Naipe getNaipe() const;
Valor getValor() const;
bool epar(Carta outra);
};
#endif /*CARTA_H_*/
