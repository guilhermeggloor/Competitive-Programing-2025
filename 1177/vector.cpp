#include <iostream>
#include <vector>

// sequencia de valores até T-1 repetidas vezes
// preencher 1000 espaços de vetor
// se a entrada for 3, então i = 0 => 0, i = 1 => 1, i = 2 => 2, i = 4 => 0, reiniciando

#define M 1000

using namespace std;

int main()
{
    vector<int> vetor(M, 0);
    int T;
    cin >> T;

    int j = 0;
    for (int i = 0; i < M; i++)
    {
        if (j < T)
        {
            vetor[i] = j;
            j++;
        }
        else
        {
            j = 1;
        }
    }

    for (int i = 0; i < M; i++)
    {
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}