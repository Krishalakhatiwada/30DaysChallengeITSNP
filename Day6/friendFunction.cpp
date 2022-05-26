/*
Make a class named Fruit with a data member to calculate the number
of fruits in a basket. Create two other classes named Apples and Mangoes
to calculate the number of apples and mangoes in the basket.
print the number of fruits of each type and the total number of fruits in the basket using a friend function.
*/
#include <iostream>

using namespace std;
class Apples;
class Mangoes;
class fruit
{
public:
    int countFruit;
    friend fruit cfruit(Apples a, Mangoes b);
    int getFruit()
    {
        return countFruit;
    }
};
class Apples
{
public:
    int nApples;
    Apples()
    {
    }
    Apples(int apple)
    {
        nApples = apple;
    }
    int getApple()
    {
        return nApples;
    }
};
class Mangoes
{
public:
    int nmangoes;
    Mangoes(int m)
    {
        nmangoes = m;
    }
    int getmangoes()
    {
        return nmangoes;
    }
};

fruit cfruit(Apples a, Mangoes b)
{
    fruit f;
    f.countFruit = a.nApples + b.nmangoes;
    return f;
}
int main()
{
    Apples objApple(30);
    Mangoes objMango(50);
    fruit objFruit;
    objFruit = cfruit(objApple, objMango);

    cout << "No. of Apples:" << objApple.getApple() << endl;
    cout << "Np. of Mangoes:" << objMango.getmangoes() << endl;
    cout << "Total No. of fruits:" << objFruit.getFruit() << endl;
    return 0;
}