#include <iostream>

using namespace std;
string invertendo_string(string frase);

int main()
{
    string texto = "ZambolinTorresMaluco";
    string invertido = invertendo_string(texto);
    cout << invertido;
}

string invertendo_string(string frase) {
    string teste2{};
    size_t tamanho_string{ size(frase) };
    for (int i = tamanho_string - 1;tamanho_string > 0; --i) {
        tamanho_string -= 1;
        teste2 += frase[i];

    }
    return teste2;

}

