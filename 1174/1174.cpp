#include <iostream>
#include <vector>
#include <iomanip>

#define M 100

using namespace std;

int main()
{
    vector<float> vetor(M, 0);
    int menor = 10;

    for (int i = 0; i < M; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 0; i < M; i++)
    {
        if (vetor[i] <= menor)
        {
            cout << fixed << setprecision(1);
            cout << "A[" << i << "] = " << vetor[i] << endl;
        }
    }

    return 0;
}