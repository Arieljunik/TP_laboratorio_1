#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float valor_a;
    float valor_b;
    float res_op;
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando %.2f\n",valor_a);
        printf("2- Ingresar 2do operando %.2f\n",valor_b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1: printf("Ingrese el primer operando:\t");
                    scanf("%f",&valor_a);
                    system("CLS");
                break;
            case 2: printf("Ingrese el segundo operando:\t");
                    scanf("%f",&valor_b);
                    system("CLS");
                break;
            case 3:
                res_op=suma(valor_a,valor_b);
                system("CLS");
                printf("El resultado de la suma es:\t %.2f\n\n",res_op);
                break;
            case 4:
                res_op=resta(valor_a,valor_b);
                system("CLS");
                printf("El resultado de la resta es:\t %.2f\n\n",res_op);
                break;
            case 5:
                if (valor_b==0){
                    system("CLS");
                    printf("No es posible dividir por 0\n\n");
                    break;
                    }
                else{
                res_op=division(valor_a,valor_b);
                system("CLS");
                printf("El resultado de la division es:\t %.2f\n\n",res_op);
                     }
                break;
            case 6:
                res_op=multi(valor_a,valor_b);
                system("CLS");
                printf("El resultado de la multiplicacion es:\t %.2f\n\n",res_op);
                break;
            case 7:
                system("CLS");
                res_op=fact(valor_a);
                printf("El resultado del factorial de %.0f es:\t %.0f\n\n",valor_a,res_op);
                res_op=fact(valor_b);
                printf("El resultado del factorial de %0.f es:\t %.0f\n\n",valor_b,res_op);
                break;
            case 8:
                res_op=suma(valor_a,valor_b);
                system("CLS");
                printf("El resultado de la suma es:\t %.2f\n\n",res_op);
                res_op=resta(valor_a,valor_b);
                printf("El resultado de la resta es:\t %.2f\n\n",res_op);
                if (valor_b==0){
                    printf("No es posible dividir por 0\n\n");
                    break;
                    }
                else{
                res_op=division(valor_a,valor_b);
                printf("El resultado de la division es:\t %.2f\n\n",res_op);
                     }
                res_op=multi(valor_a,valor_b);
                printf("El resultado de la multiplicacion es:\t %.2f\n\n",res_op);
                res_op=fact(valor_a);
                printf("El resultado del factorial de %0.f es:\t %.0f\n\n",valor_a,res_op);
                res_op=fact(valor_b);
                printf("El resultado del factorial de %0.f es:\t %.0f\n\n",valor_b,res_op);
                break;
            case 9:
                seguir = 'n';
                break;
        }

}
    return 0;
}
