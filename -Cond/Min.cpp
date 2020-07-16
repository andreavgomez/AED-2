/* 04-Cond
* Se desarrolla la funci�n de valor m�nimo entre dos valores dados. Para verificar que el desarrollo est�
    bien hecho, se procede a realizar pruebas con assert.
* Natalia Bel�n Damilano
 * 31/5/2020
 */

#include <iostream>
#include <cassert>     

double Min(double, double);

int main()
{

    assert(-3 == Min(-3, 5.7));
    assert(0 == Min(0, 1));
    assert(10.233 == Min(10.3, 10.233));

}

double Min(double a, double b)
{
    return (a < b) ? a : b;
}
