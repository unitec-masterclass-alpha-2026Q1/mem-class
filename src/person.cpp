#include "person.h"

#include <cstddef>   // size_t
#include <cstring>   // std::strlen, std::strcpy

Person::Person(const char* name, int age, int id)
    : _name(nullptr), _age(age), _id(id)
{
    if (!name) {
        // Allocate an empty string if name is null
        _name = new char[1];
        _name[0] = '\0';
        return;
    }

    std::size_t len = std::strlen(name);
    _name = new char[len + 1];
    std::strcpy(_name, name);
}
Person::Person(const Person& p): _name(nullptr), _age(p._age), _id(p._id){
    _name = new char[strlen(p._name) + 1];
    std::strcpy(_name, p._name);
}
const Person& Person::operator=(const Person& rhs){
    if (this == &rhs) // a = a
        return *this;
    
    
    delete[] _name;
    _id = rhs._id;
    _age = rhs._age;
    _name = new char[strlen(rhs._name) + 1];
    std::strcpy(_name, rhs._name);
    return *this;
}

Person::~Person(){
    delete[] _name;
}

void Person::SetName(const char* name)
{
    if (!name) {
        _name = new char[1];
        _name[0] = '\0';
        return;
    }

    std::size_t len = std::strlen(name);
    _name = new char[len + 1];
    std::strcpy(_name, name);
}

const char* Person::GetName() const
{
    return _name;
}

int Person::GetAge() const
{
    return _age;
}

int Person::GetId() const
{
    return _id;
}
void Person::Explode(){
    delete[] _name;
    _name = nullptr;
}