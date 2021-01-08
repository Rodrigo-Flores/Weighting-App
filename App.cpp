#include <iostream>
using namespace std;

int main(){
  int nem, ranking, pdt_lan, pdt_mat, pdt_sci, pdt_his;
  int per_nem, per_ranking, _per_pdt_lan, per_pdt_mat, per_pdt_sci, per_pdt_his;
  int option, weight;

  cout <<"\t\t\tBienvenido(a) aquí podrás calcular tu puntaje ponderado!"<< "\n\n";
  cout <<"Primero lo primero. ¿Qué prueba ocuparás para ponderar tu puntaje?"<<endl;
  cout <<"Elige: "<<endl;
  cout <<"1) Ciencias.\n"<<"2) Historia." <<endl; cin >> option;
  cout <<"Ahora, necesitamos saber los porcentajes solicitados en tu ponderacion...";

  if(option == 1){
    cout <<"NEM (Notas de Educacion Media): "; cin >> per_nem;
    cout <<"Ranking: "; cin >> per_ranking;
    cout <<"Prueba de Matematica: "; cin >> _per_pdt_lan;
    cout <<"Prueba de Lenguaje: "; cin >> per_pdt_mat;
    cout <<"Prueba de Ciencias: "; cin >> per_pdt_sci;

    per_nem /= 100;
    per_ranking /= 100;
    per_pdt_lan /= 100;
    per_pdt_mat /= 100;
    per_pdt_sci /= 100;

    cout <<"Ingresa puntajes obtenidos correspondientemente: "<<endl;
    cout <<"NEM (Notas de Educacion Media): "; cin >> nem;
    cout <<"Ranking: "; cin >> ranking;
    cout <<"Prueba de Matematica: "; cin >> pdt_lan;
    cout <<"Prueba de Lenguaje: "; cin >> pdt_mat;
    cout <<"Prueba de Ciencias: "; cin >> pdt_sci;

    nem *= per_nem;
    ranking *= per_ranking;
    pdt_lan *= per_pdt_lan;
    pdt_mat *= per_pdt_mat;
    per_pdt_sci *= per_pdt_sci;

    weight = nem + ranking + pdt_lan + pdt_mat + pdt_sci;

    cout <<"Tu ponderacion es: " << weight << endl;

  }

  return 0;
}
