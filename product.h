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
    void setSize(short size_in);
    void setColor(string color_in);
    string getName() const;//получить
    short getSize() const;
    string getColor() const ;
};

#endif // PRODUCT_H_INCLUDED
