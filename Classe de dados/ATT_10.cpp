#include <iostream>
    
using namespace std;

int main()
{
    int N = 1, M = 2;
    int *p = &N, *q = &M;

    if(p > q)
        cout << "N esta mais alto na memoria" << endl;
    else
        cout << "M esta mais alto na memoria" << endl;

    cout << p << " " << q << endl;
    
    return 0;
}
