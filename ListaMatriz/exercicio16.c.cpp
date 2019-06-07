#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int TAMANHO = 50, CARACTER = 50;
    int opcao = 1, qnt;
    system("color 02");

    cout << "Quantas plantas deseja cadastrar: ";
    cin >> TAMANHO;

    int estoque[TAMANHO], quantIdeal[TAMANHO];
    char nome[TAMANHO][CARACTER];

    /**/

    for(int i = 0; i < TAMANHO; i++)
    {
        estoque[TAMANHO] = 0;
        quantIdeal[TAMANHO] = 0;

        for(int j = 0; j < CARACTER; j++)
        {
            nome[i][j] = ' ';
        }
    }

    /**/

    for(int i = 0; i < TAMANHO; i++)
    {
        system("cls");

        cout << "Entre com o nome da " << i+1 << " Planta:\n";
        cin >> nome[i];
        cout << "\nDigite a quantidade de Plantas: ";
        cin >> estoque[i];
        cout << "\nDigite a quantidade Ideal: ";
        cin >> quantIdeal[i];
    }

    /**/

    system("cls");
    while(opcao != 3)
    {
        cout << "\t\tMenu";
        cout << "\n\n1. Vender Planta\n2. Verificar Estoque\n3. Finalizar\n\nOpcao: ";
        cin >> opcao;

        switch(opcao)
        {
        case 1:
            system("cls");

            cout << "Catalogo de Vendas\n\n";

            for(int i = 0; i < TAMANHO; i++)
            {
                if(estoque[i] > 0)
                {
                    cout << i+1 << ". " << nome[i];
                    cout << "\t\tQuantidade em Estoque: " << estoque[i] << "\n";
                }

            }

            cout << "\nQual planta deseja comprar: ";
            cin >> opcao;
            opcao--;
            cout << "Digite a quantidade de plantas desejadas: ";
            cin >> qnt;

            if(qnt <= estoque[opcao])
            {
                estoque[opcao] -= qnt;
            }
            else
            {
                cout << "\nQuantidade superior a do estoque, venda nao efetuada!\n\n";
                system("pause");
            }


            system("cls");
            break;

        case 2:
            system("cls");

            cout << "Estoque\n\n";

            for(int i = 0; i < TAMANHO; i++)
            {
                cout << i+1 << ". " << nome[i];
                if(estoque[i] < quantIdeal[i])
                {
                    cout << "\nRepor Estoque, quantidade atual: " << estoque[i];
                    cout << "\nQuantidade ideal: " << quantIdeal[i];
                    cout << "\nComprar mais: " << (quantIdeal[i] - estoque[i]) << "\n";
                }
                else
                {
                    cout << "\nQuantidade em Estoque: " << estoque[i] << "\n";
                }
                cout << "----\n\n";
            }

            system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
            cout << "Finalizando Programa...\n";

            break;

        default:
            system("cls");
            cout <<"Opcao Invalida.\n";
        }
    }
    return 0;
}
