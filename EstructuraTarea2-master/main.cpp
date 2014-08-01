// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la pila son pares, de lo contrario devuelve false
bool sonPares(stack<int> mi_pila)
{
    while(!mi_pila.empty())//mira si esta vacia
    {
        if( mi_pila.top() % 2 == 0)//formula para evaluar si son par
        {
            mi_pila.pop();
        }
        else//si no es asi retorna falso
            {
                return false;
            }

    }
    return true;//si es asi verdadero
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    while(!mi_lista.empty())//mira si esta vacia
    {
        if( mi_lista.front() % 2 == 0)//formula para evaluar si son par
        {
            mi_lista.pop_front();
        }
        else//si no es asi retorna falso
            {
                return false;
            }

    }
    return true;//si es asi verdadero
}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty())//mira si esta vacia
    {
        if(mi_pila.top()==str) //ve si es de la pila
        {
            return true;
        }

        mi_pila.pop();
    }

    return false;
}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty())//mira si esta vacia
    {
        if(mi_lista.front()==str) //ve si es de la lista
        {
            return true;
        }

        mi_pila.pop_front();
    }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(stack<int> mi_pila)
{
    int suma =0;

     while(!mi_pila.empty())//mira si esta vacia
    {
        suma=suma + mi_pila.top(); //suma la cola
        mi_pila.pop();
    }
    return suma;//devuelve la suma
}

//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{
    int pluss =0;

     while(!mi_lista.empty())//mira si esta vacia
    {
        pluss=pluss + mi_lista.front(); //suma la cola
        mi_lista.pop_front();
    }
    return pluss;//devuelve la suma
}

//Devuelve true si los elementos de la lista son palindromos, de lo contrario devuelve false
bool esPalindroma(list<char>mi_lista)
{
      while(!mi_lista.empty())//mira si esta vacia
    {
        if (mi_lista.front()== mi_lista.back()) //si son iguales decuelve verdadero de lo contrario falso
    {
        return true;
    }
    mi_lista.pop_front();
    mi_lista.pop_back();
    }
    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
