#include <iostream>
#include "product.h"
#include <string>
#include <cstring>


using namespace std;
    Product :: Product()
    {
        setSize(0);
    }

    Product :: Product(string name, short size, string color)//конструктор с тремя параметрами
    {
        setName(name);//установить имя
        setSize(size);
        setColor(color);
    }

    Product :: Product(const Product &otherProduct)//конструктор копирования
    {
        this -> name = otherProduct.name;//указыаем на этот объект
        this -> size = otherProduct.size;
        this -> color = otherProduct.color;
    }
    void Product :: printInformationAboutProduct() сonst
    {
         cout << "Name: " << name << "\tSize: " << size << "\tColor: " << color << endl;
    }


    void Product :: setName(string name_in)//изменить имя
    {   this -> name = name_in;  }

    void Product :: setSize(short size_in)
    {   this -> size = size_in;  }

    void Product :: setColor(string color_in)
    {   this -> color = color_in;  }

    string Product :: getName() const//возвратить имя
    {
        return name;
    }
    short Product :: getSize() const//возвратить размер

    {
        return size;
    }

    string Product :: getColor() const//возвратить цвет
    {
        return color;
    }


