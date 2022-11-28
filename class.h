#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

//Створити клас Fruit(name, size, color, taste(SWEET, SOUR, NEUTRAL), etc).
//Додати enum Topping, який також має поле taste(SWEET, SOUR, NEUTRAL).Створити клас FruitSalad,
//який складається з набору фруктів і певного топінгу(можна використати enum).
//Реалізувати метод для вибору топінгу, який залежить від смаку інгредієнтів(на свій смак)).
//Реалізувати метод для перемішування інгредієнтів.

enum tasteType {
    SWEET,SOUR,NEUTRAL
};

enum ToppingType {
    SWEETs, SOURs, NEUTRALs
};

class Fruit {
private:
    string name;
    double size;
    string color;
    tasteType taste;
public:

    Fruit(string name, double size, string color, tasteType taste)
    {
        this->name = name;
        this->size = size;
        this->color = color;
        this->taste = taste;
    }
    string GetName() {
        return name;
    }
    double GetSize() {
        return size;
    }
    string GetColor(){
        return color;
    }
    tasteType GetType() {
        return taste;
    }
    void Print(){
        cout << "Назва: " << name << "\nРозмір: " << size << "\nКолір: " << color << "\nСмак: " << taste << "\n" << endl;
    }

};

class FruitSalat {
    ToppingType type;
    Fruit* fruits;
    FruitSalat(Fruit* fruits)
    {
        this->type = type;
        this->fruits = fruits;
    }
    void chooseTopping()
    {
        if (fruits->GetType() == SWEET)
        {
            type = NEUTRALs;
        }
        else if(fruits->GetType() == SOUR) {
            type = SWEETs;
        }
        else if(fruits->GetType() == NEUTRAL) {
            type = SOURs;

        }
    }

};
