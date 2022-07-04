#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

       int N, i;
       double a, b, c, media;

       cout << "Quantos casos voce vai digitar? ";
       cin >> N;

       for (i = 0; i < N; i++) {
            cout << "Digite tres numeros: " << endl;
            cin >> a;
            cin >> b;
            cin >> c;

            media = (double)(a * 2 + b * 3 + c * 5) / ( 2 + 3 + 5 );
            cout << fixed << setprecision(1);
            cout << "MEDIA = " << media << endl;
       }


    return 0;
}
