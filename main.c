#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    // Solicita ao usuário que insira o operador
    printf("Digite a operacao (+, -, *, /, %%): ");
    scanf(" %c", &operador);  // Note o espaço antes do %c para consumir qualquer caractere de espaço em branco

    // Solicita ao usuário que insira os números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Realiza a operação conforme o operador inserido
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro! Divisao por zero nao permitida.\n");
                return 1; // Encerra o programa com código de erro
            }
            break;
        case '%':
            if(num2 != 0) {
                resultado = (int)num1 % (int)num2;  // Converte os números para inteiros antes de calcular o resto da divisão
            } else {
                printf("Erro! Divisao por zero nao permitida.\n");
                return 1; // Encerra o programa com código de erro
            }
            break;
        default:
            printf("Operador invalido!\n");
            return 1; // Encerra o programa com código de erro
    }

    // Exibe o resultado da operação
    printf("Resultado: %.2f\n", resultado);

    return 0;
}