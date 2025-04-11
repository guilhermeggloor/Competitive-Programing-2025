#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line1, line2;
    int ncasos = 0;
    unordered_map<string, int> ump; // ump = unordered map

    while (getline(cin, line1))
    {
        ump.clear();
        getline(cin, line2);

        if (ncasos != 0)
        {
            cout << "\n";
        }

        istringstream iss(line2);
        string tamanho, genero;
        while (iss >> tamanho >> genero)
        {
            if (line1.compare(tamanho) == 0)
                ump[genero]++;
        }
        cout << "Caso " << ncasos + 1 << ":" << "\n";
        cout << "Pares Iguais: " << ump["F"] + ump["M"] << "\n";
        cout << "F: " << ump["F"] << "\n";
        cout << "M: " << ump["M"] << "\n";
        ncasos++;
    }

    return 0;
}