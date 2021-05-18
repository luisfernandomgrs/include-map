// map::rbegin/rend
#include <iostream>
#include <map>
#include "main.h";

int main()
{
  orderByReverse();

  return 0;
}

void orderByReverse()
{
  std::map<char, int> mymap;

  mymap['x'] = 100;
  mymap['y'] = 200;
  mymap['z'] = 300;

  // show content:
  std::map<char, int>::reverse_iterator rit;
  for (rit = mymap.rbegin(); rit != mymap.rend(); ++rit)
    std::cout << rit->first << " => " << rit->second << std::endl;

  std::cout << std::endl;
}