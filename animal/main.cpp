#include <iostream>
#include <string>

using namespace std;

class Animal{
  public:
  int expectativaVida;
  double peso;
  char genero;
  string nome,tipo;

  void imprime(){
    cout<<"**********************************"<<endl;
    cout<<"Nome: "<<nome<<" Genero: "<<genero<<endl;
    cout<<"Tipo: "<<tipo<<" Peso: "<<peso<<" Expectativa de vida: "<<expectativaVida<<endl;

  }

  Animal(int exp, double p, char sx, string nm, string tp){
    expectativaVida=exp;
    peso=p;
    genero=sx;
    nome=nm;
    tipo=tp;
  }

};

class Consulta{
  public:
  int dia, mes, ano;
  string procedimento;
  double valor;

  void entraConsulta(int d, int m, int a, string proc, double v){
    dia=d;
    mes=m;
    ano=a;
    procedimento=proc;
    valor=v;
  }

  void imprime(){
    cout<<"Consulta em: "<<dia<<"/"<<mes<<"/"<<ano<<endl;
    cout<<"Procedimento: "<<procedimento<<endl;
    cout<<"Valor: "<<valor<<endl;
  }

};

class PacienteVet:public Animal{
  public:
  Consulta agenda[5];
  int num_consultas=0;

  PacienteVet(int exp, double p, char sx, string nm, string tp):Animal(exp, p, sx, nm, tp){}

  void entraConsulta(int d, int m, int a, string proc, double v){
    agenda[num_consultas].entraConsulta(d, m, a, proc, v);
    num_consultas++;
  }

  void imprime(){
    Animal::imprime();
    agenda[num_consultas].imprime();
  }
};

class AnimalEstimacao:public Animal{
  public:
  char bravo;
  string dono;

  AnimalEstimacao(int exp, double p, char sx, string nm, string tp, char b, string d):Animal(exp, p, sx, nm, tp){
    bravo=b;
    dono=d;
  }

  void imprime(){
    Animal::imprime();
    cout<<"Bravo: "<<bravo<<" - "<<"Dono: "<<dono<<endl;
  }

};
int main() {
  string nomes[2]={"Gata", "Toto"};
  char sexo[2]={'F','M'};
  string tipos[2]={"Leao", "Cachorro"};
  string donos[2]={"Karla", "Maria"};
  char bravos[2]={'S', 'N'};
  string proc[3]={"Consulta", "internacao", "Vermifugo"};

  Animal *anm[2];
  Animal leao(20, 340.0, sexo[0], nomes[0], tipos[0]);
  PacienteVet animal1(12, 23.5, sexo[1], nomes[1], tipos[1]);
  PacienteVet animal2(15, 4.7, sexo[0], nomes[2], tipos[2]);
  AnimalEstimacao pet1(5, 2.8, sexo[0], nomes[3], tipos[3], bravos[1], donos[0]);
  AnimalEstimacao pet2(7, 0.23, sexo[1], nomes[4], tipos[4], bravos[0],donos[1]);

  leao.imprime();
  anm[0]=&leao;

  animal1.entraConsulta(27, 3, 2020, proc[1], 75.0 );
  animal1.imprime();
  anm[1]=&animal1;

  animal2.entraConsulta(30,4,2020, proc[0],45.0 );
  animal2.imprime();
  anm[2]=&animal2;

  pet1.imprime();
  pet2.imprime();

  anm[3]=&pet1;
  anm[4]=&pet2;

  for(int i=0; i<5; i++){
    anm[i]->imprime();
  }

  return 0;
}
