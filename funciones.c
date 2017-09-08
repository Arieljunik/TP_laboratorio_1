/** \brief FUNCION DE SUMA DE FLOTANTES.
     Devuelve la suma de dos Flotantes.
 *
 * \param numero flotante
 * \param numero flotante
 * \return suma de los dos numeros
 *
 */
float suma (float num1, float num2)
{
float resultado;
resultado = num1+num2;
return resultado;
}

/** \brief FUNCION DE RESTA DE FLOTANTES.
     Devuelve la resta de dos Flotantes.
 *
 * \param numero flotante
 * \param numero flotante
 * \return resta de los dos numeros
 *
 */
float resta (float num1, float num2)
{
float resultado;
resultado = num1-num2;
return resultado;
}

/** \brief FUNCION DE DIVISION DE FLOTANTES.
     Devuelve la division de dos Flotantes.
 *
 * \param numero flotante
 * \param numero flotante
 * \return division de los dos numeros
 *
 */
float division(float num1, float num2)
{
float resultado;
resultado = num1/num2;
return resultado;
}

/** \brief FUNCION DE MULTIPLICACION DE FLOTANTES.
     Devuelve la multiplicación de dos Flotantes.
 *
 * \param numero flotante
 * \param numero flotante
 * \return multiplicacion de los dos numeros
 *
 */
float multi(float num1, float num2)
{
float resultado;
resultado = num1*num2;
return resultado;
}

/** \brief FUNCION DE FATORIALES.
     Devuelve el factorial de un numero.
 *
 * \param numero flotante
 * \return factorial de un numero entero
 *
 */

int fact(float num1)
{
int entero;
entero=(int)num1;
int calculo;
    if(entero==1)
    {
     return 1;
    }
calculo=entero* fact(entero-1);
return (calculo);
}
