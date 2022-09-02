#include <iostream>

#ifndef ERROR_HPP
#define ERROR_HPP
namespace error{
void input_error(bool size)
{
  if (size)
  {
    cout << "more arguments are needed for it" << endl;
  }else{
    cout << "too many arguments" << endl;
  }

}
void invalid()
{
  cout << "invalid arguments" << endl;
}
}
#endif // ERROR_HPP
