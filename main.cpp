#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float m2, Custo;
    int NC;
    char TC, Pisc;

    cout << "Insira o tipo de constru��o,";
    cout << "\nDigite 'M' para madeira,";
    cout << "\nDigite 'A' para alvenaria,";
    cout << "\nDigite 'P' para pr�-moldado:" << endl;
    cin >> TC;
    cout << "Digite a �rea da casa e n�mero de comodos: " << endl;
    cin >> m2 >> NC;
    cout << "Vai ter piscina? Digite 'S' para sim e 'N' para n�o: " << endl;
    cin >> Pisc;

    if(TC == 'M' || TC == 'm'){

        Custo = m2 * 200 + NC * 6000;

    }else if (TC == 'A' || TC == 'a'){

        Custo = m2 * 160 + NC * 2400;

    }else if (TC == 'P' || TC == 'p'){

        Custo = m2 * 60 + NC * 10000;

    }else {

        cout << "Tipo Inexistente" << endl;
        return 0;
    }

    if(Pisc == 'S' || Pisc == 's'){

        Custo = Custo + 20000;

    }

    cout << "O custo da obra ser� de " << Custo << "reais" << endl;


    return 0;
}
