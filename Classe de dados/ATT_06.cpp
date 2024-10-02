#include <iostream>
    
using namespace std;

int estatico(){
    static int Saida = 0;
    Saida++;
    return Saida;
}

int main()
{
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << estatico() << endl;
    }    
    
    return 0;
}
