#include <iostream>
#include "person.h"

void Print(Person p);

int main()
{
    Person p("Ahmed", 25, 13011);
    Person q("Rito", 56,10099);
    Person r(q); // Ctor de Copia
    
    std::cout << p.GetName() << std::endl;
    std::cout << q.GetName() << std::endl;

    p = q; // Asignacion

    Print(r); // Parametro por valor



    return 0;
}

void Print(Person p){
    std::cout << "Name: " << p.GetName() << " Age: " << p.GetAge() << " ID: " << p.GetId() << "\n";
}