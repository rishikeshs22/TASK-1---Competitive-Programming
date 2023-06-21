#include <iostream>
#include <algorithm>

using namespace std;

long long possible_locations(int coords[], int N) {
    if (N % 2 == 1) return 1;
    sort(coords, coords + N);
    int a = N / 2 - 1;
    int b = N / 2;
    return ((long long) (coords[b] - coords[a] + 1));
}


int main() {
    int N;
    cin >> N;
    int X[N], Y[N];
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    cout << possible_locations(X, N) * possible_locations(Y, N) << '\n';

}

