/* 04-Cond
* Se desarrolla la funci�n valor absoluto pidi�ndole por teclado al usuario un entero para poder
efectuar la ejecuci�n de la funci�n y as� obtener su resultado.
* Natalia Bel�n Damilano
 * 31/5/2020
 */

#include <iostream>
#include <assert.h>     

double F3(double);

int main()
{
    std::cout << "Este es un prototipo para determinar el valor de la funcion F3 (funcion por partes) teniendo en cuenta el valor de la variable X. \n";
    
    assert(-4 == F3(-4));
    assert(-3 == F3(3));
    assert(4 == F3(4));

    system("pause");

}

double F3(double x)
{
    return
        x >= -3 and x <= 3 ? -x : x;
}
