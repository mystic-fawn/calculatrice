#include <iostream>
#include "calc.hpp"
#include "error.hpp"
using namespace std;

string arguments;
float num1, num2;

int main(int argc, char **argv, char **envp)
{
  if (argc > 1)
  {
    arguments = argv[1];
    if (arguments == "add")
    {
      if (argc != 4){
        error::input_error(argc < 4);
      }else{
      cout << "result:\t"<< add(argv[2], argv[3]) << endl;}
    }
    else if (arguments == "sub"){
      if (argc != 4){
        error::input_error(argc < 4);
      }else{
      cout << "result:\t"<< sub(argv[2], argv[3]) << endl;
    }
    }
    else if (arguments == "mul"){
      if (argc != 4){
        error::input_error(argc < 4);
      }else{
        cout << "result:\t"<< mul(argv[2], argv[3]) << endl;
      }
    }
    else if (arguments == "div")
    {
      if (argc != 4){
        error::input_error(argc < 4);
      }else{
        cout << "result:\t" << div(argv[2], argv[3]) << endl;
      }
    }
    else if (arguments == "sqrt")
    {
      cout << "result:\t" << sqrt(argv[2]) << endl;
    }
    else if (arguments == "pow")
    {
      cout << "result\t"<< pow(argv[2], argv[3]) << endl;
    }
    else{
      error::invalid();
    }
  }else{
    error::input_error(true);
  }
  //return 0;
}
