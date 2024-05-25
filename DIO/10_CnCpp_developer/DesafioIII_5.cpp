#include <iostream>
#include <string>
using namespace std;

constexpr const char* naipeText[] {"Paus","Ouros","Copas","Espadas"};

enum class Naipe { Paus, Ouros, Copas, Espadas };
enum class Valor { As, Valete, Dama, Rei };
constexpr const char* valorText[] {"Ás","Valete","Dama","Rei"};

class Carta {
    private: 
        string naipe, valor;
    
    public: 
    Carta(string n, string v) {
        naipe = n;
        valor = v;
    }
    string getNaipe() {
        return naipe;
    }
    string getValor() {
        return valor;
    }
};


int main() {
  int valorEscolhido, naipeEscolhido;
  cin >> valorEscolhido >> naipeEscolhido;
  Carta cartaEscolhida(naipeText[static_cast<int>(naipeEscolhido)], valorText[static_cast<int>(valorEscolhido-1)]);
  //TODO: Implementar as condições necessárias para impressão da saída deste desafio.
  cout<<"Carta escolhida: "<< cartaEscolhida.getValor() <<" de "<< cartaEscolhida.getNaipe()<<endl;
  return 0;
}
