#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false); // caso usar somente c++ como cout e cin usa isso que o codigo fica mais rapido
    cin.tie(nullptr);                 // melhora a eficiência até a metade

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string linha;
        int total = 0;
        map<string, int> especies;

        while (getline(cin, linha)) // só para de ler a linha quando estiver vazia
        {
            if (linha.empty() && total > 0)
            {
                break;
            }

            if (!linha.empty())
            {
                especies[linha]++;
                total++;
            }
        };
        for (const auto &[especie, qtd] : especies)
        {
            double calc = (qtd / (double)total) * 100.0;
            cout << especie << " " << setprecision(4) << fixed << calc << "\n";
        }

        if (i != n - 1)
        {
            cout << "\n";
        }
    }

    return 0;
}