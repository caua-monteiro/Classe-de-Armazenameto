#include <iostream>
    
using namespace std;

int main()
{
    int N = 6;
    const int K = 3;
    int *P = NULL;
    P = &N;
    cout << "INICIAL: " << P << " " << *P << endl;
    *P += K;
    cout << "Pos incremento: " << P << " " << *P << endl;
    
    return 0;
}
