#include <iostream>
#include <cmath>

using namespace std;

#define M 12

// D (1 ≤ D ≤ 100), VF (1 ≤ VF ≤ 100) and VG (1 ≤ VG ≤ 100)
// VF => velocidade do fugitivo
// VG => velocidade do guarda costeira
// D => distância entra elas(no inicio D)
// 12 milhas nauticas => distancia de uma costa a outra
// é basicamente pitagoras
// calculando a distancia de VF e VG, onde VG é hipotenusa
// T = D/V, sendo:
//  T, o tempo em milhas]
//  D, distancia em milhas
//  V, velocidade em nós
// H² = a² + b²
// H = Raiz(a² + b²)

int main()
{
    double d, vf, vg;

    while (cin >> d >> vf >> vg)
    {
        double dg = sqrt((d * d) + (M * M));

        double tg, tf;

        tg = dg / vg;
        tf = M / vf;

        // cout << tg << " " << tf << endl;ex

        cout << ((tg <= tf) ? "S" : "N") << endl;
    }

    return 0;
}