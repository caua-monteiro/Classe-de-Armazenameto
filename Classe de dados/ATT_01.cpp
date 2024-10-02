#include <iostream>
    
using namespace std;

int main()
{
    int N;
    cin >> N;
    int *P = NULL;
    P = &N;
    cout << "INICIAL: " << P << " " << *P << endl;
    P++;
    cout << "Meio: " << P << " " << *P << endl;
    P -= 2;
    cout << "Meio: " << P << " " << *P << endl;

    
    return 0;
}
