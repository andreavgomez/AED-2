/* 04-Cond
* Se desarrolla la funci�n valor absoluto pidi�ndole por teclado al usuario un entero para poder
efectuar la ejecuci�n de la funci�n y as� obtener su resultado.
* Natalia Bel�n Damilano
 * 31/5/2020
 */

#include <iostream>
#include <assert.h>     

int Abs(int);

int main()
{
    int num;

    std::cout << "Este es un prototipo para determinar el resultado de una funci�n valor absoluto |x|. \n"
        "Ingrese un valor entero (Z) cualquiera para obtener el resultado final: ";

    std::cin >> num;

    assert(3 == Abs(-3));
    assert(0 == Abs(0));
    assert(3 == Abs(3));

    num < 0 ? assert(-num == Abs(num)) : assert(num == Abs(num));

    std::cout << "Resultado: |" + std::to_string(num) + "|=" + std::to_string(Abs(num));
    std::cout << " \n";

    system("pause");
}

int Abs(int x)
{
    return x<0 ? -x : x;
}
