// StudentC.h

#pragma once

#include <string>
#include <iostream>
using namespace std;

class StudentC {
private:
    string spec;

    class Man {
    private:
        string name;
        int age;
        char gender;
        double weight;

    public:
        Man();
        Man(const string& name, int age, char gender, double weight);
        Man(const Man& other);

        string getName() const;
        int getAge() const;
        char getGender() const;
        double getWeight() const;

        void setName(const string& name);
        void setAge(int age);
        void setGender(char gender);
        void setWeight(double weight);

        void Init(const string& name, int age, char gender, double weight);
        void Read();
        void Display() const;
        string toString() const;

        Man& operator=(const Man& other);
        Man& operator++();        // Префіксний інкремент
        Man operator++(int);      // Постфіксний інкремент
        Man& operator--();        // Префіксний декремент
        Man operator--(int);      // Постфіксний декремент
        operator string() const;  // Приведення типу до літерного рядка
    };

    Man man;

public:
    StudentC();
    StudentC(const string& spec, const string& name, int age, char gender, double weight);
    StudentC(const StudentC& other);

    string getSpec() const;
    void setSpec(const string& spec);

    Man getMan() const;
    void setMan(const Man& man);

    void Init(const string& spec, const string& name, int age, char gender, double weight);
    void Read();
    void Display() const;
    string toString() const;

    StudentC& operator=(const StudentC& other);
    void ShowSizeWithPacking();
    void ShowSizeWithoutPacking();
};
