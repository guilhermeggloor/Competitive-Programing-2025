#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// menos de 3 milhões de habitantes
// ninguém em mais do que 230cm de altura
// primeira linha de entrada -> NC < 100 = quantidade de casos de teste/cidades
// para cada caso de teste a primeira linha tem um inteiro (1 < N <= 3000000)
// proxima linha altura de cada pessoa em centimetros (20 <= h <= 230)

// Saida:
//  Para cada caso de teste de entrada, imprima uma linha contendo os valores das alturas de todos os moradores da cidade
//(em cm), por ordem crescente de altura, separados por um espaço em branco.

int main()
{
    int NC;

    cin >> NC;

    if (NC >= 100)
    {
        cout << "precisa ser menor do que 100" << endl;
        return 1;
    }

    while (NC--)
    {
        int N;
        cin >> N;

        if (N <= 1 || N > 3000000)
        {
            return 1;
        }

        vector<int> h(N);

        for (int i = 0; i < N; i++)
        {
            cin >> h[i];
        }

        sort(h.begin(), h.end());

        for (int i = 0; i < N; i++)
        {
            if (i > 0)
            {
                cout << " " << h[i] << endl;
            }
        }
    }

    return 0;
}