#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float n1, n2, n3, n4, n5, n6;

    cout << "Insira 3 valores: " << endl;
    cin >> n1 >> n2 >> n3;

    n4 = n1 + n2;
    n5 = n2 + n3;
    n6 = n4 * n5;

    cout << "A soma do primeiro número com o segundo número, vezes a soma do segundo com o terceiro é: " << n6 << endl;



    return 0;
}
