#include <iostream>
#include <exception>
#include "shop.h"


int main()
{
    Shop shop;

    
    try
    {
        shop.insert("test", 1);
        shop.add("test", 2);
    }
    catch(exception_shop& ex)
    {
        std::cout<< ex.what() << std::endl;
    }

    std::cout << shop.count_article("test") << std::endl;

}