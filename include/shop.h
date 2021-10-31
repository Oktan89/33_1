#pragma once

#include <string>
#include <map>
#include <exception>

class exception_shop : std::exception
{
    std::string _message;
    
public:
    exception_shop(const std::string& message) : _message(message){}
    const char* what() const noexcept override
    {   
        
        return _message.c_str();
    }
};

class Shop{

    std::map<std::string, std::size_t> _shop;

public:
    Shop() = default;
    ~Shop() = default;
    Shop(const Shop& other) = default;
    Shop& operator=(Shop& other) = default;
    
    //Inser new Article and count
    void insert(const std::string& article, std::size_t count);
    
    //Add count to existing article
    void add(const std::string& article, std::size_t count);

    //Remove count to existing article
    void remove(const std::string& article, std::size_t count);

    //Return count to existing article
    std::size_t count_article(const std::string& article) const;

    //Return size article
    std::size_t count_product() const;
};