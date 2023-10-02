#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite a operacao (+, -, *, /, %%): ");
    scanf(" %c", &operador);  

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

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
                return 1;
            }
            break;
        case '%':
            if(num2 != 0) {
                resultado = (int)num1 % (int)num2; 
            } else {
                printf("Erro! Divisao por zero nao permitida.\n");
                return 1; 
            }
            break;
        default:
            printf("Operador invalido!\n");
            return 1; 
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}