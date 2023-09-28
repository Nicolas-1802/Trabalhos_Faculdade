#include <iostream>

using namespace std;

int main()
{
    int l1, l2, l3;

    cout << "Insira o valor dos lados do triangulo: " << endl;
    cin >> l1 >> l2 >> l3;



    if(l1 > l2 + l3 && l2 > l1 + l3 && l3 > l1 + l2){

        cout << "Isto nao eh um triangulo" << endl;

        } else if(l1 == l2 && l2 == l3){

            cout << "Isso eh um triangulo equilatero" << endl;

        }else if(l1 != l2 && l1 != l3 && l2 != l3){

            cout << "Isto eh um triangulo escaleno" << endl;

        }else

            cout << "Isto eh um triangulo isoceles" << endl;

    return 0;
}
