#include <iostream>
    
using namespace std;

int main()
{
    int N, *P = &N;
    cin >> N;

    cout << "INICIO: " << *P << endl;

    *P -= N;

    cout << "Final: " << *P << endl;
    
    return 0;
}
