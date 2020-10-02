#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
int i;
setlocale (LC_ALL, "portuguese");

cout << "Escolha uma das opções:\n";
cout << "1.Números binários para decimais\n";
cout << "2.Números decimais para binários\n";
cout << "3.Sair\n" << endl;
cout << "Digite o numero da opcao desejada: \n";
cin >> i;
system("cls");
while ((i < 1) || (i > 3))
{
cout << "Opcao invalida!Tente novamente.\n" << endl;
cout << "Escolha uma das opções:\n";
cout << "1.Números binários para decimais\n";
cout << "2.Números decimais para binários\n";
cout << "Sair\n" << endl;
cout << "Digite o numero da opcao desejada: \n";
cin >> i;
system("cls");
}

if (i == 1)
{
    int binario, resultado, resto = 0;
    int digito[8];

    cout << "Digite um número binário: " << endl;
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

    cout << endl << "O número equivalente em decimal é: " << resultado << endl;
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

    cout << "O número em binário é:" << endl;

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
