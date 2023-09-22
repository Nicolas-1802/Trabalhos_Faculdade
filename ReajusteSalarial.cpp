#include <iostream>

using namespace std;

int main()
{

    float salario, reajus;

        cout << "Digite o salario do funcionario: \n";
        cin >> salario;

    if(salario < 2000){

        reajus = (salario * 55)/100;

        cout << "O reajuste eh de: "<< " " << reajus << endl;

        }else if(salario < 5000){

            reajus = (salario * 30)/100;

            cout << "O reajuste eh de : " << " " << reajus << endl;

        }else if(salario > 5000){

            reajus = (salario * 20 )/100;

            cout << "O reajuste eh de: " << " " << reajus;

        }


    return 0;
}
