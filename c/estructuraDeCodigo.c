#include <stdio.h> 
//Zona donde incluimos nuestras librerias. 
//Directivas de precompilador (Preprocessors Comands).

int main()  //Funcion principal, aqui es donde la ejecucion de mi programa comienza. Todo el codigo va aqui dentro.
{
    /*First hello world in C language*/
    printf("Hola Mundo"); //=> imprime en terminal
    return 0; //=> return 0 termina la funcion. Siempre que ponga 0 en un return dentro de una funcion main, va a cerrar dicha funcion
}


Basic Types:
        Aritmeticos:
            (A) Valores enteros:
                            int 2 o 4 Bytes permite tener numeros negativos y positivos
                                            2 Bytes -32,768 to 32,757
                                            4 bytes -2,147,483,648 to 2,147,483
                            unsigned int 2 o 4 bytes no nos permite tener datos negativos
                                            2 Bytes 0 to 65.535
                                            4 bytes 0 to 4,294,967,295
                            short 2 Bytes
                                            2 Bytes -32,768 to 32,767
                            unsigned short 2 Bytes 0 yo 65,535

                            long 8 Bytes
                                        long 8 bytes -9223372036854775808 to 9223372036854775807
                                        unsigned long 8 Bytes 0 to 18446744073709551615

            (B) De punto FLorante:

                            float 4 Bytes 1.2E-38 to 3.4E+386 ( 6 decimal places)
                            double 8 Bytes 2.3E-308 to1.7E+30815 (15 decimal places)
                            long double 10 Bytes 3.4E-4932 to 1.1E+493219 (19 decimal places)


[enum] : Es un tipo de dato que asigna valores a una lista de constantes 
        enum weekDays {Dom, Lun, Mar, Mie, Jue, Vie, Sab};
                        0    1    2    3    4    5    6