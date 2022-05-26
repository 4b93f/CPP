#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook()
{
    
}

Phonebook::~Phonebook()
{

}

void Phonebook::add(int i)
{

    this->List[i].add_contact();
}

void Phonebook::search(int i)
{
    std::string index;
    int j;

    if (i == -1)
    {
        std::cout << "Please add contact first" << std::endl;
        return;
    }
    std::cout << std::endl << "List of the contact :" << std::endl;
    this->List->printName(this->List, i);
    std::cout << "Which contact do you want to see info ? " << std::endl;
    std::cout << std::endl;
    std::getline(std::cin, index);
    j = atoi(index.c_str());
    if (j > 8 || j < 1 || j > i + 1)
    {
		system("clear");
        std::cout << "Wrong number" << std::endl;
        return ;
    }
    this->List->printContactInfo(this->List, j - 1);
}