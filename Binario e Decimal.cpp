#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
int i;
setlocale (LC_ALL, "portuguese");

cout << "Escolha uma das op��es:\n";
cout << "1.N�meros bin�rios para decimais\n";
cout << "2.N�meros decimais para bin�rios\n";
cout << "3.Sair\n" << endl;
cout << "Digite o numero da opcao desejada: \n";
cin >> i;
system("cls");
while ((i < 1) || (i > 3))
{
cout << "Opcao invalida!Tente novamente.\n" << endl;
cout << "Escolha uma das op��es:\n";
cout << "1.N�meros bin�rios para decimais\n";
cout << "2.N�meros decimais para bin�rios\n";
cout << "Sair\n" << endl;
cout << "Digite o numero da opcao desejada: \n";
cin >> i;
system("cls");
}

if (i == 1)
{
    int binario, resultado, resto = 0;
    int digito[8];

    cout << "Digite um n�mero bin�rio: " << endl;
    cin >> binario;

    for (int i = 0; i < 8; i++)
    {
        digito[i] = binario % 10;
        binario /= 10;
    }

    for (int i = 7; i >= 0; i--)
    {
        resultado = (resto * 2) + digito[i];
        resto = resultado;
    }

    cout << endl << "O n�mero equivalente em decimal �: " << resultado << endl;
}
else
if (i == 2)
{
    int decimal;
    short binario[8];

    cout << "Digite o valor em decimal a ser convertido:" << endl;
    cin >> decimal;

    for (int i = 0; i < 8; i++)
    {
        binario[i] = decimal % 2;
        decimal /= 2;
    }

    cout << "O n�mero em bin�rio �:" << endl;

    for (int i = 7; i >= 0; i--)
    {
        cout << binario[i];
    }
}
if ( i == 3)
{

}
cout << endl;
system("PAUSE");
return 0;
}
