#pragma once

class Person {
private:
    char* _name;
    int _age;
    int _id;

public:
    Person(const char* name, int age, int id); 
    // Regla de 3
    ~Person();
    Person(const Person& p);
    const Person& operator=(const Person& rhs);

    Person(Person&& p)noexcept; // Move Constructor
    const Person& operator=(Person&& rhs) noexcept; // Move Copy Assignment Operator
    void SetName(const char* name);
    const char* GetName() const;
    int GetAge() const;
    int GetId() const;
    void Explode();
    void* GetNameAddress()const;
};