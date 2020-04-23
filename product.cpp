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

    void Product :: printInformationAboutProduct() const

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



     Product& Product :: operator ++()//оператор увеличение поля
    {
        this->size ++;
        return *this;
    }

        Product& Product :: operator --()//оператор уменьшения поля
    {
        this->size --;
        return *this;
    }
    Product Product :: operator ++(int)
    {
        Product tmp(*this);
        this->size ++;
        return tmp;
    }

        Product Product :: operator --(int)
    {
        Product tmp(*this);
        this->size --;
        return tmp;
    }

    int Product :: operator == (const Product product11) const
    {
        if (this->name == product11.name)
        {
            if(this->color == product11.color)
            {
                if(this->size == product11.size)
                {
                    return 1;
                }
            }
        }
        return 0;    }

    int Product :: operator != (const Product product11) const
    {
        if (this->name != product11.name)
        {
            if(this->color != product11.color)
            {
                if(this->size != product11.size)
                {
                    return 1;
                }
            }
        }
        return 0;
    }

    int Product :: operator < (const Product product11) const
    {
        if (this->size < product11.size)
        return 1;
        return 0;
    }

    int Product :: operator > (const Product product11) const
    {
        if (this->size < product11.size)
        return 0;
        return 1;
    }

    int Product :: operator <= (const Product product11) const
    {
        if (this->size <= product11.size)
        return 1;
        return 0;
    }

    int Product :: operator >= (const Product product11) const
    {
        if (this->size <= product11.size)
        return 0;
        return 1;
    }

    Product& Product :: operator = (const Product product11)
    {
        this->name = product11.name;
        this->size = product11.size;
        this->color = product11.color;
        return *this;
    }

    ostream& operator << (ostream &out, const Product &product_in)//оператор вывода
    {
        out << "Name:\t" << product_in.name << "Size:\t" << product_in.size << "Color:\t" << product_in.color;
        return out;
    }
    istream& operator >> (istream &in, Product &product_in)//оператор ввода
    {
        in >> product_in.name;
        in >> product_in.size;
        in >> product_in.color;
        return in;
    }


