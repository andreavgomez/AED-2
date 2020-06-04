/* 04-Cond
* Se desarrolla la funci�n F3, la cual es una funci�n por partes. Se procede a realizar pruebas con assert para verificar 
    el correcto desarrollo de la funci�n.
* Natalia Bel�n Damilano
 * 31/5/2020
 */

#include <iostream>
#include <cassert>     

double F3(double);

int main()
{
    
    assert(-4 == F3(-4));
    assert(-3 == F3(3));
    assert(4 == F3(4));

}

double F3(double x)
{
    return
        x >= -3 and x <= 3 ? -x : x;
}
