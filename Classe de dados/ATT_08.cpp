#include <iostream>
    
using namespace std;

void Incremento(int A){
    A++;
}

int main()
{
    register int N = 12;
    for(int i = 0; i < 10; i++){
        Incremento(N);
        cout << N << endl;
    }
    
    return 0;
}
