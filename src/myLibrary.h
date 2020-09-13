
/**
 * @brief esta función guarda el menu de opciones para mostrar.
 * @return muestra el menú de opciones.
 */
int dpn_showMenu(int flagMenu1, int flagMenu2, float operatorA, float operatorB);
/**
 * @brief
 * @param text
 * @param textError
 * @return
 */

int dpn_getFloat(char *mensaje, char *mensajeError, float *pResultado);
/**
 * @brief en esta función se pide un número tipo float.
 * @param pide por texto al usuraio ingresar el número,
 * @param le indica al usuario mediante un texto que debe reingresar el dato
 * @param guarda el dato correcto ingresado por el usuario.
 * @return
 */
int add(float operatorA, float operatorB);
/**
 @brief realiza la suma de dos numeros tipo float
 * @param primer parametro para la suma
 * @param segundo parametro para la suma
 * @return retorna numero float resultado de la operación
 */
int substraccion(float operatorA, float operatorB);
/**
 * @brief realiza la resta de dos numeros tipo float
 * @param primer parametro para la resta
 * @param segundo parametro para la resta
 * @return retorna numero float resultado de la operación
 */
int multiplication(float operatorA, float operatorB);
/**
 * @brief realiza la multiplicaión de dos numeros tipo float
 * @param primer parametro para la multiplicación
 * @param segundo parametro para la multiplicación
 * @return retorna numero float resultado de la operación
 */
int division(float operatorA, float operatorB);
/**
 * @brief función recursiva para calcular factorial
 * @param parametro del cual se va a a calcular el factorial
 * @return retorna el factorial del parametro ingresado
 */

long int factorial(int operatorB);
/**
 * @brief funcion hacer acting del float para poder factorizar el entero.
 * @param operatorA
 * @return
 */
int numberInteger(float operatorA);
