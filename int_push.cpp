#include<iostream>
#include<string>
#include<regex>
#include<cmath>
using namespace std;
class int_pop
{
private:
  int value01;
  int one;
  int result;
  bool Judge;
  void space(int value);
public:
  void setJudge(bool judge);
  bool getJudge(void);
  int getInput(void);
  void setValue(int value1);
  void setFirst(int value3);
  int getFirst(void);
  int getResult(void);
  void show(void);
  ~int_pop(void);
};
int_pop::~int_pop(void)
{
  this->value01 = (int)NULL;
  this->one = (int)NULL;
  this->result = (int)NULL;
  this->Judge = (bool)NULL;
}
void int_pop::setJudge(bool judge)
{
  this->Judge = judge;
}
bool int_pop::getJudge(void)
{
  return this->Judge;
}
void int_pop::setFirst(int value3)
{
  this->one = value3;
}
void int_pop::setValue(int value1)
{
  this->value01 = 0;
  this->one = 0;
  this->result = 0;
  this->value01 = value1;
  this->value01 = abs(this->value01);
  if (this->value01 > 9999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setJudge(false);
  } else if (this->value01 < -9999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setJudge(false);
  } else {
    this->one = this->value01 % 10;
    this->result = this->value01 / 10;
    this->setJudge(true);
  }
}
int int_pop::getFirst(void)
{
  return this->one;
}
int int_pop::getResult(void)
{
  return this->result;
}
int int_pop::getInput(void)
{
  return this->value01;
}
void int_pop::space(int value)
{
  if (value < 10) {
    std::cout << "             *" << std::endl;
  } else if (value < 100) {
    std::cout << "            *" << std::endl;
  } else if (value < 1000) {
    std::cout << "           *" << std::endl;
  } else if (value < 10000) {
    std::cout << "          *" << std::endl;
  } else if (value < 100000) {
    std::cout << "         *" << std::endl;
  } else if (value < 1000000) {
    std::cout << "        *" << std::endl;
  } else if (value < 10000000) {
    std::cout << "       *" << std::endl;
  } else if (value < 100000000) {
    std::cout << "      *" << std::endl;
  }
}
void int_pop::show(void)
{
  if (this->getJudge() != false) {
    std::cout << "****************************" << std::endl;
    std::cout << "*    input : " <<  this->getInput();
    this->space(this->getInput());
    std::cout << "*    first : " << this->getFirst();
    this->space(this->getFirst());
    std::cout << "*   result : " << this->getResult();
    this->space(this->getResult());
    std::cout << "****************************" << std::endl;
  }
}
class int_push
{
private:
  int value01;
  int result;
  void space(int value);
  int_pop object02;
public:
  void setValue(int value1);
  int getResult(void);
  void show(void);
  ~int_push(void);
};
int_push::~int_push(void)
{
  this->value01 = (int)NULL;
  this->result = (int)NULL;
}
void int_push::setValue(int value1)
{
  this->value01 = 0;
  this->result = 0;
  this->value01 = value1;
  this->value01 = abs(this->value01);
  this->object02.setValue(this->value01);
  this->result = this->value01 * 10 + this->object02.getFirst();
}
int int_push::getResult(void)
{
  return this->result;
}
void int_push::space(int value) {
  if (value < 10) {
    std::cout << "                  *" << std::endl;
  } else if (value < 100) {
    std::cout << "                 *" << std::endl;
  } else if (value < 1000) {
    std::cout << "                *" << std::endl;
  } else if (value < 10000) {
    std::cout << "               *" << std::endl;
  } else if (value < 100000) {
    std::cout << "              *" << std::endl;
  } else if (value < 1000000) {
    std::cout << "             *" << std::endl;
  } else if (value < 10000000) {
    std::cout << "            *" << std::endl;
  } else if (value < 100000000) {
    std::cout << "           *" << std::endl;
  }
}
void int_push::show(void)
{
  std::cout << "*********************************" << std::endl;
  std::cout << "*   input  : " << this->object02.getInput();
  this->space(this->object02.getInput());
  std::cout << "*   first  : " << this->object02.getFirst();
  this->space(this->object02.getFirst());
  std::cout << "*   result : " << this->getResult();
  this->space(this->getResult());
  std::cout << "*********************************" << std::endl;
}
class consultant
{
private:
  bool Input;
public:
  void setInput(bool input);
  bool getInput(void);
  void setValue(int value);
  void msg01(void);
  void msg06(void);
  void msg07(void);
  void show(void);
  int_push object01;
  ~consultant(void);
};
consultant::~consultant(void)
{
  this->Input = (bool)NULL;
}
void consultant::setInput(bool input)
{
  this->Input = input;
}
bool consultant::getInput(void)
{
  return this->Input;
}
void consultant::setValue(int value)
{
  if (value > 9999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setInput(false);
  } else if (value < -9999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setInput(false);
  } else {    
    object01.setValue(value);
    this->setInput(true);
  }
}
void consultant::msg01(void)
{
  std::cout << "This program calculate a push first value at integer value." << std::endl;
  std::cout << "Please enter a integer value." << std::endl;
  std::cout << "value>";
}
void consultant::msg06(void)
{
  std::cout << "OK!" << std::endl;
}
void consultant::msg07(void)
{
  std::cout << "Input value is Error!" << std::endl;
  this->setInput(false);
}
void consultant::show(void)
{
  if (this->getInput() != false)
    object01.show();
  else this->msg07();
}
int main(void)
{
  static int value;
  consultant lady;
  lady.msg01();
  if (std::cin >> value) {} else {lady.msg07(); value = (int)NULL;
    if (lady.getInput() != true) return 1;}
  lady.setValue(value);
  lady.show();
  value = (int)NULL;
  return 0;
}
