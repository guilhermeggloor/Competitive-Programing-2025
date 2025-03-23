#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv)
{
    int n, altura;
    cin >> n >> altura;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int rotulo;
        cin >> rotulo;
        v.push_back(rotulo);
        /* code */
    }

    int movimentos = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (v.at(i) > altura)
        {
            movimentos += v.at(i) - altura;
            v.at(i + 1) -= v.at(i) - altura;
        }
        else if (v.at(i) < altura)
        {
            movimentos += altura - v.at(i);
            v.at(i + 1) += altura - v.at(i);
        }
    }

    movimentos += abs(altura - v.at(n - 1));

    cout << movimentos << endl;

    return 0;
}
