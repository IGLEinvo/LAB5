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

enum TasteType {
    SWEET,SOUR,NEUTRAL
};

enum ToppingType {
    SWEETS, SOURS, NEUTRALS
};

class Fruit {
private:
    string name;
    double size;
    string color;
    TasteType taste;
public:

    Fruit(string name, double size, string color, TasteType taste)
    {
        this->name = name;
        this->size = size;
        this->color = color;
        this->taste = taste;
    }
    string get_name() {
        return name;
    }
    double get_size() {
        return size;
    }
    string get_color(){
        return color;
    }
    TasteType get_type() {
        return taste;
    }
    void print_size_and_name_and_color_and_taste(){
        cout << "Назва: " << name << "\nРозмір: " << size << "\nКолір: " << color << "\nСмак: " << taste << "\n" << endl;
    }

};

class FruitSalad {
    ToppingType type;
    Fruit* fruits;
    FruitSalad(Fruit* fruits)
    {
        this->type = type;
        this->fruits = fruits;
    }
    void chooseTopping()
    {
        if (fruits->get_type() == SWEET)
        {
            type = NEUTRALS;
        }
        else if(fruits->get_type() == SOUR) {
            type = SWEETS;
        }
        else if(fruits->get_type() == NEUTRAL) {
            type = SOURS;

        }
    }

};
