#include <iostream>
    
using namespace std;

int main()
{
    int V[10];
    for(int i = 0; i < 10; i++){
        V[i] = 2*i;
    }
    for(int *p = &V[0]; p != &(V[10]); p++){
        cout << *p << " ";
    }
    cout << endl;
    
    return 0;
}
