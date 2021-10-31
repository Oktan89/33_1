#include <iostream>
#include <exception>
#include "shop.h"


int main()
{
    Shop shop;

    
    try
    {
        shop.add("test", 2);
    }
    catch(exception_shop& ex)
    {
        std::cout<< ex.what() << std::endl;
    }

}