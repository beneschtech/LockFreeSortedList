#include <iostream>
#include <string>
#include "LockFreeSortedList.h"

int main(int,char**)
{
  LockFreeSortedList<unsigned int,std::string> myList;
  myList.clear();
  myList.insert(2,"String 1");
  myList.insert(1,"String 2");
  myList.insert(3,"String 3");
  myList.insert(5,"String 4");
  myList.insert(4,"String 5");
  std::cout << "Unit test: Next line should be '54321'" << std::endl;
  LockFreeSortedList<unsigned int,std::string>::LockFreeSortedListItem *hp = myList.headPtr();
  while (hp)
  {
    std::cout << hp->key;
    hp = hp->next_ptr;
  }
  std::cout << std::endl;
  myList.remove(5,"String 4");
  myList.remove(1,"String 2");
  myList.remove(3,"String 3");
  std::cout << "Unit test: Next line should be '42'" << std::endl;
  hp = myList.headPtr();
  while (hp)
  {
    std::cout << hp->key;
    hp = hp->next_ptr;
  }
  std::cout << std::endl;
  myList.clear();
}
