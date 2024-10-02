#include <iostream>
    
using namespace std;

int main()
{
    int *P, *Q;

    if(P > Q)
        cout << "Endereco de P e MAIOR" << endl;
    else    
        cout << "Endereco de P e MENOR" << endl;

    if(*P == *Q)
        cout << "Conteudo de P e Q sao IGUAIS" << endl;
    else
        cout << "Conteudo de P e Q sao Diferentes" << endl;

    cout << "P: " << P << " " << *P << endl;
    cout << "Q: " << Q << " " << *Q << endl;
    return 0;
}
