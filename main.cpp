#include <iostream>
#include "product.h"
#include <string>
#include <stdlib.h>


using namespace std;// объявление куда обращаемся за функциями


void menu()
{
    setlocale(LC_ALL, "Russian");
    cout << "\tMenu:" << endl;
    cout << "\t1-Vivesti vsy infu o tovare: " << endl;
    cout << "\t2-Name product:" << endl;//установить название продукта
    cout << "\t3-Size product:" << endl;
    cout << "\t4-Color product:" << endl;
    cout << "\t5-Poluchit' name product:" << endl;// получить название продукта
    cout << "\t6-Poluchit' size product:" << endl;
    cout << "\t7-Poluchit' color product" << endl;
    cout << "\t8-Copy dannii product" << endl;
    cout << "\t9-Delete product" << endl;
}

void infproduct(short countOfProduct, Product *Products)//выводит информацию о всех продуктах
{
    for (short i = 0; i < countOfProduct; i++)
    {
        cout << i+1 << ")";//начинаем массив с ненулевого элемента

        Products[i].printInformationAboutProduct();// вызовем функцию


        Products[i].printInformationAboutProduct();// вызовем функцию
    }

}

int main()
{

   setlocale(LC_ALL, "Russian");

    string tmpName, tmpColor;//временное
    short var = 0, tmpsize = 0, countOfProduct = 1, i = 0, y = 0;//задаётся массив
    Product *Products = new Product[countOfProduct], *tmpProducts;//создаётся массив на кол-во продуктов
    while (1)
    {

        infproduct(countOfProduct, Products);
        cin >> i;
        if (i == 0)
        {
            delete Products;
            return 0;
        }

        while (i != 0)
        {
            menu();
            cin >> var;//ввод
            switch (var)
            {
                case 0:
                    i = 0;
                    break;
                case 1:
                    Products[i-1].printInformationAboutProduct();
                    break;
                case 2:
                    cout << "\nVvedite name producta:" << endl;
                    cin >> tmpName;// ввод
                    Products[i-1].setName(tmpName);
                    break;
                case 3:
                    cout << "\nVvedite size producta:" << endl;
                    cin >> tmpsize;
                    if (tmpsize >= 0)
                    {
                        Products[i-1].setSize(tmpsize);
                    }else{
                        cout << "Poprobuite ewe" << endl;
                        }
                    break;
                case 4:
                    cout << "\nVvedite color producta:" << endl;
                    cin >> tmpColor;
                    Products[i-1].setColor(tmpColor);
                    break;
                case 5:
                    cout << "\n Name product:\t" << (tmpName = Products[i-1].getName()) << endl;// взято имя продукта
                    break;
                case 6:
                    cout << "\n Size product:\t" << (tmpsize = Products[i-1].getSize()) << endl;
                    break;
                case 7:
                    cout << "\n Color product:\t" << (tmpColor = Products[i-1].getColor()) << endl;
                    break;
<<<<<<< Updated upstream
                case 8:{
=======
                case 8:
                    {
>>>>>>> Stashed changes
                    countOfProduct++;//Цвет продукта
                    tmpProducts = new Product[countOfProduct];//создаём новый динамический массив с чилом продуктов на 1 больше постоянного
                    for (y = 0; y < countOfProduct-1; y++)
                    {
                        tmpProducts[y] = Products[y];
                        delete &(Products[y]);
                    }
                    delete Products;
                    Products = tmpProducts;//tmp - temporary-временные продукты
                    Product newProduct(Products[i-1]);
                    cout << "\n" << countOfProduct;
                    Products[countOfProduct-1] = newProduct;
                    break;}
                    case 9:{
                    Products[i-1] = Products[countOfProduct-1];
                    delete & (Products[countOfProduct-1]);
                    countOfProduct --;
                    tmpProducts = new Product[countOfProduct];
                    for (y = 0; y < countOfProduct; y++)
                        {
                            tmpProducts[y] = Products[y];
                            delete & (Products[y]);
                        }
                        delete Products;
                        Products = tmpProducts;
                        i = 0;
                        break;}
                    }
            }
        }

    }


