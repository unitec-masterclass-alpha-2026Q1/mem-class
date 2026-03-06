#include <iostream>
#include <iomanip>
#include "person.h"

void Print(Person& p);

int main()
{
    Person p("Ahmed", 25, 13011);
    Person q("Rito", 56,10099);
    Person r(q); // Ctor de Copia
    Person s("Linus", 8, 10001);
    
    // std::cout << p.GetName() << std::endl;
    // std::cout << q.GetName() << std::endl;

    p = q; // Asignacion

    Print(p); // Parametro por valor
    Print(q); // Parametro por valor
    Print(r); // Parametro por valor
    Print(s); // Parametro por valor

    Person x = std::move(p);
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - \n";
    //Print(p); // Parametro por valor
    Print(q); // Parametro por valor
    Print(r); // Parametro por valor
    Print(s); // Parametro por valor
    Print(x); // Parametro por valor
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - \n";
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - \n";


    Person a("Natali", 19, 12511003);
    Person b("Raihane", 20,12511033);
    Person c("Pedro", 50, 941041); // Ctor de Copia

    Print(a); // Parametro por valor
    Print(b); // Parametro por valor
    Print(c); // Parametro por valor
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - \n";

    c = std::move(a);
    //Print(a); // Parametro por valor
    Print(b); // Parametro por valor
    Print(c); // Parametro por valor
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - \n";




    return 0;
}

void Print(Person& p){
    std::cout << "Name: " << std::setw(8) << p.GetName() 
              << " Age: " << std::setw(4) << p.GetAge() 
              << " ID: " << std::setw(6)  << p.GetId() 
              << " Name Address: " << p.GetNameAddress() 
              << "\n";
}