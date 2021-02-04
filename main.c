// Com base no código de árvore AVL que você construiu em disciplinas anteriores (especificamente,
// estruturas de dados), modifique o código da mesma para que seja implementada como uma biblioteca (.h) e
// que permita a inclusão de elementos de forma genérica, isto é, que elementos de qualquer tipo podem ser
// armazenados na árvore AVL. No programa principal, considere que a árvore AVL genérica será utilizada
// para manter valores inteiros. faça a separação de funções cliente e funções que manipulam o TAD genérico
// em diferentes arquivos.
// A estrutura é uma árvore AVL, portanto DEVE existir as funções de balanceamento da árvore.
// O programa DEVE possuir um Menu com as seguintes opções:
// 1. Inserir elemento;
// 2. Excluir elemento;
// 3. Imprimir elementos (1 para imprimir na tela os três percursos e 2 para imprimir em arquivo texto os
// três percursos);
// 4. Mostrar menor valor da árvore;
// 5. Mostrar maior valor da árvore;
// 6. Mostrar altura da árvore;
// 7. Sair.
// Devem ser implementadas funções de validação. Ex.: Ao buscar e excluir elementos da árvore, mostrar
// mensagem se ela estiver vazia.
// Sobre o formato da entrega:
// Os trabalhos são individuais e os arquivos .c e .h devem ser enviados via Moodle até as 23:55 do dia da
// entrega.
// Realizem testes funcionais antes da entrega. Arquivos que não compilarem receberão nora ZERO. 


#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include "functions.c"

int main()
{
    short exit = 0;
    short option = 0;
    
    do
    {
        interface();
        scanf("%i", &option);

        switch (option)
        {
        case 1 :
            {

            }
        break;

        case 2 :
            {

            }
        break;
        
        case 3 :
            {

            }
        break;
        
        case 4 :
            {

            }
        break;
        
        case 5 :
            {

            }
        break;
        
        case 6 :
            {

            }
        break;
        
        case 7 :
            {
                exit = 1;
            }
        break;
        
        default:
            {
                system("cls");
                printf("Comando Invalido");
                printf("\n");
                system("pause");
            }
        break;
        }

    } while (exit == 0);
    


    return 0;
}