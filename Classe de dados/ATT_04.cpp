#include <iostream>
    
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int *P = NULL, *Q = NULL;
    P = &N; Q = &M;

    cout << "INICIAL: " << endl;
    cout << "P: " << P << " " << *P << endl;
    cout << "Q: " << Q << " " << *Q << endl;   

    *Q -= *P;
    *P -= *Q;   

    cout << "Fim: " << endl;
    cout << "P: " << P << " " << *P << endl;
    cout << "Q: " << Q << " " << *Q << endl;   


    return 0;
}
