#pragma once

class Person {
private:
    char* _name;
    int _age;
    int _id;

public:
    Person(const char* name, int age, int id);
    ~Person();
    Person(const Person& p);
    const Person& operator=(const Person& rhs);
    void SetName(const char* name);
    const char* GetName() const;
    int GetAge() const;
    int GetId() const;
    void Explode();
};