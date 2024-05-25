#include <iostream>
#include <string>
using namespace std;

class Produto
{
protected:
    string nome;

public:
    Produto(string n) : nome(n) {}
    virtual string informacoes() = 0;
};

class Eletronico : public Produto
{
    int garantia;

public:
    Eletronico(string n, int g) : Produto(n), garantia(g) {}

    string informacoes() override
    {
        return nome + ", garantia: " + to_string(garantia) + " meses";
    }
};

// TODO: Criar a classe Vestuario de acordo com as especificações deste desafio.
class Vestuario : public Produto
{
    string tamanho;

public:
    Vestuario(string n, string g) : Produto(n), tamanho(g) {}

    string informacoes() override
    {
        return nome + ", tamanho: " + tamanho;
    }
};

int main()
{

    int garantia;
    string nome, tamanho;
    getline(cin, nome);
    char tipo;

    cin >> tipo;

    Produto *produto;
    if (tipo == 'E')
    {
        cin >> garantia;
        produto = new Eletronico(nome, garantia);
    }
    else if (tipo == 'V')
    {
        // TODO: Criar e ler o "tamanho", além de instânciar o produto como um Vestuario.
        getline(cin, tamanho);
        produto = new Vestuario(nome, tamanho);
    }

    cout << produto->informacoes() << endl;

    delete produto;
    return 0;
}