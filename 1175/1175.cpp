#include <iostream>
#include <vector>

#define M 20

using namespace std;

int main()
{
    vector<int> vetor(M, 0);
    int copy;
    int end = M - 1;

    for (int i = 0; i < M; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 0; i < M / 2; i++)
    {
        copy = vetor[i];
        vetor[i] = vetor[end];
        vetor[end] = copy;
        end--;
    }

    for (int i = 0; i < M; i++)
    {
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}