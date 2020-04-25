#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include <string>

using namespace std;
class Product
{
private: //напрямую их изменить нельзя
    string name;
    short size;
    string color;
public:
    Product();//конструктор по умолчанию
    Product(string name, short size, string color);//конструктор с параметрами
    Product(const Product &product);//конструктор копирования
    void printInformationAboutProduct() const;
    void setName(string name_in);//установить имя
    bool setSize(short size_in);
    void setColor(string color_in);
    string getName() const;//получить
    short getSize() const;
    string getColor() const ;
    Product& operator ++ (); //префиксный инкремент
    Product& operator -- (); // префиксный декремент
    Product operator ++ (int); //постфиксный инкремент
    Product operator -- (int); // постфиксный декремент
    int operator == (const Product product1) const;// оператора равенства
    int operator != (const Product product1) const;// оператора неравенства
    int operator > (const Product product1) const;// оператора больше
<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
    int operator < (const Product product1) const;// оператора меньше
    int operator >= (const Product product1) const;// оператора больше или равно
    int operator <= (const Product product1) const;// оператора меньше или равно
    Product& operator = (const Product product) ;// оператора присваивания
    friend istream& operator >> (istream &in, Product &product_in);// оператора ввода
    friend ostream& operator << (ostream &out, const Product &product_in) ;// оператора вывода
};

#endif // PRODUCT_H_INCLUDED
