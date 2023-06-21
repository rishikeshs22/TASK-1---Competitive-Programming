#include <iostream>

using namespace std;

int main() {
    srand(time(0));
    int N = (rand() % 1000000) + 1 ;
    cout << N << '\n';
    for(int i = 0; i < N; i++){
        int x = (rand() % 1000000000) + 1 ;
        int y = (rand() % 1000000000) + 1 ;
        cout << x << ' ' << y << '\n';
    }
}

