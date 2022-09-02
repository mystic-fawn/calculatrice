#include <iostream>
using namespace std;

#ifndef CALC_HPP
#define CALC_HPP

float result;

float add(char* x, char* y)
{

  result = stof(x) + stof(y);
  return result;
}
float sub(char* x, char* y)
{
  result = stof(x) - stof(y);;
  return result;
}
float mul(char* x, char* y)
{
  result = stof(x) * stof(y);
  return result;
}
float div(char* x, char* y)
{
  result = stof(x) / stof(y);
  return result;
}
float sqrt(char* x)
{
  result = stof(x) * stof(x);
  return result;
}
float pow(char* x, char* y)
{
  result = 1;
  for (int i = 0; i < stoi(y); i++)
  {
    result *= stof(x);
  }
  return result;
}
#endif // CALC_HPP
