#include <iostream>
#include <string>
using namespace std;
class Robo
{
private:
    string nome;
    string modelo;
    int anoFabricacao;

public:
    void setRobot(string nome, string modelo, int anoFabricacao)
    { // void error
        this->nome = nome;
        this->modelo = modelo;
        this->anoFabricacao = anoFabricacao;
    }
    void exibirInformacoes()
    {
        // TODO: Imprimir as informações de acordo com o enunciado deste desafio.
        cout << "O robô " << nome << ", modelo " << modelo << ", foi fabricado em " << anoFabricacao << "." << endl; // printf
    }
};
int main()
{
    string nome, modelo;
    int ano;
    getline(cin, nome);
    getline(cin, modelo);
    cin >> ano;
    // TODO: Instanciar um Rodo passando os valores lidos em seu construtor.
    Robo *r = new Robo();
    r->setRobot(nome, modelo, ano);
    // TODO: Invocar o método "exibirInformacoes".
    r->exibirInformacoes();
    delete r;
    return 0;
}