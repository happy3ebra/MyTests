//Программа для тестов и баловства
//Демонстрация арифметических операция 
#include <iostream>
using namespace std;
int main ()
{
    unsigned int score = 5000;
    cout << "score: " << score << endl;
    //изменение значения переменной 
    score = score + 100 ;
    cout << "score: " << score << endl;
    //комбинированный оператор присваивания 
    score += 100;
    cout << "score: " << score << endl;
    //операторы инкремента 
    int lives = 3;
    ++ lives;
    cout << "lives: " << lives << endl;
    lives = 3;
    lives++;
    cout << "lives: " << lives << endl;
    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives. bonus = " << lives << '. ' << bonus << endl;
    lives = 3;
    bonus = lives++ * 10;
    cout << "lives. bonus = " << lives << ". " << bonus << endl;
    // целочисленное ппереполнение 
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "\nscore: " << score << endl;
    return 0;

}