#include "shop.h"


void Shop::insert(const std::string& article, std::size_t count)
{
    if(count == SIZE_MAX)
        throw exception_shop("Error count");
    
    auto it_find = _shop.find(article);

    if(it_find != _shop.end())
    {
        throw exception_shop("Such an article [" + article + "] already exists, use \"ADD\" to add the product");
    }
    else
    {
       _shop.insert(std::make_pair(article, count));
    }
};

void Shop::add(const std::string& article, std::size_t count)
{
    if(count == SIZE_MAX)
        throw exception_shop("Error count");
   
    auto it_find = _shop.find(article);

    if(it_find != _shop.end())
    {
        it_find->second += count;
    }
    else
    {
        throw exception_shop("Article " + article + " not found");
    }
}
    
