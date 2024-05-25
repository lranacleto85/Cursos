#include <iostream>
#include <string>
using namespace std;

class Robo {
public:
    int velocidadeAtual = 0, velocidadeMaxima, velocidadeMinima;
    
    Robo(int vmin, int vmax) : velocidadeMinima(vmin), velocidadeMaxima(vmax) {
        velocidadeAtual = vmin;
    }
    
    void acelerar() {
        //TODO: Implementar a lógica especificada para o método "acelerar".
        velocidadeAtual += velocidadeAtual <= velocidadeMaxima; 
    }
    
    void desacelerar() {
        //TODO: Implementar a lógica especificada para o método "desacelerar".
        velocidadeAtual -= velocidadeAtual >= velocidadeMinima;
    }
};

int main() {
    int vmin, vmax;
    string comandos;
    
    cin >> vmin >> vmax >> comandos;
    
    Robo robo(vmin, vmax);
    for (char comando : comandos) {
        //TODO: Considerar os comandos para invocar seu respectivo método.
        if (comando=='A') robo.acelerar();
        else              robo.desacelerar();
    }
    cout << robo.velocidadeAtual << endl;
    return 0;
}