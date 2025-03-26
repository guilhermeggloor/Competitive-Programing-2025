#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Entrada: unica linha de entrada com inteiro N (1 < N <= 10⁵)

int main()
{
    int N;

    cin >> N;

    vector<int> pares, impares;

    for (int i = 0; i < N; i++)
    {
        int numero;
        cin >> numero;

        if (numero % 2 == 0)
        {
            pares.push_back(numero);
        }
        else
        {
            impares.push_back(numero);
        }
    }

    sort(pares.begin(), pares.end());

    sort(impares.rbegin(), impares.rend());

    for (int num : pares)
        cout << num << endl;

    for (int num : impares)
        cout << num << endl;

    return 0;
}