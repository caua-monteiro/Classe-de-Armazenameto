#include <iostream>
    
using namespace std;

extern int Var;

int main()
{
    int N;
    cin >> N;
    cout << "Inicio" << Var << endl;
    Var += N;
    cout << "FIm" << Var << endl;
    
    return 0;
}
