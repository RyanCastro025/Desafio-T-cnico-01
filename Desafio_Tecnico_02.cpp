#include <iostream>
using namespace std;

int continuar()
{
    int escolha;

    do
    {
        cout << "Deseja continuar?\n ";
        cout << "1-sim\n";
        cout << "2-nao\n";
        cin >> escolha;

    }

    while (escolha != 1 && escolha != 2);

    if (escolha == 2)
    {
        cout << "voce saiu\n";
        exit(0);
    }
}

int main() {
    while (true) 
    {
        int escolha;

        cout << "Escolha uma opcoo:\n";
        cout << "1-Quem sou eu\n";
        cout << "2-Qual e minha entidade filantropica\n";
        cout << "3-O que tenho a ver com a entidade\n";
        cout << "4-Sair\n";
        cin >> escolha;

        if (escolha == 4)
        {
            cout << "voce saiu\n";
            exit(0);
        }

        switch (escolha) 
        {
        case 1:
            cout << "Eu sou o Mario um encanador italiano, .\n";
            continuar();
            break;

        case 2:
            cout << "Minha entidade filantropica e a Cruz Vermelha, ela presta assistencia humanitaria em todo o mundo.\n";
            continuar();
            break;

        case 3:
            cout << "Eu Mario ajudo a Cruz Vermelha distribuindo suprimentos para pessoas necessitadas.\n";
            continuar();
            break;

        default:
            cout << "Opcao invalida.\n";
            break;
        }
    }
    
}

