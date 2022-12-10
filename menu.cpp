#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int opc, res = 0, res2div = 0;
  float n1,n2,n1div, n2div;

  cout<<"\n1️⃣ : Suma.";
  cout<<"\n2️⃣ : Division.";
  cout<<"\n3️⃣ : Salir.";
  cout<<"\n✨ : Digite una opcion: "; cin>>opc;

  switch(opc){
    case 1:
      cout.precision(2);
      cout<<"-> : Digite dos numeros a sumar: "; cin>>n1>>n2;
      res = (n1+n2);
      cout<<"\n\n\nEl resultado es: "<<res;
      break;
    case 2:
      cout.precision(2);
      cout<<"-> : Digite dos numeros a dividir: "; cin>>n1div>>n2div;
      res2div = (n1div/n2div);
      cout<<"\n\n\nEl resultado es: "<<res2div;
      break;
    case 3:
      printf("Saliendo del programa...");
      break;
  }


    return 0;
}
