#include<iostream>
#include<cmath>
using namespace std;
class int_pop
{
private:
  int value01;
  int value02;
  float value10;
  float value11;
  int one;
  int result;
  bool Judge;
  void space(int value);
public:
  void setJudge(bool judge);
  bool getJudge(void);
  int getInput(void);
  void setValue(int value1);
  int getFirst(void);
  int getResult(void);
  void show(void);
  ~int_pop(void);
};
int_pop::~int_pop(void)
{
  this->value01 = (int)NULL;
  this->value02 = (int)NULL;
  this->value10 = (float)NULL;
  this->value11 = (float)NULL;
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
void int_pop::setValue(int value1)
{
  this->value01 = 0;
  this->value02 = 0;
  this->value10 = 0.0;
  this->value11 = 0.0;
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
    this->value10 = (float)this->value01 / 10.0;
    this->value02 = (int)this->value10;
    this->value11 = this->value10 - (float)this->value02;
    this->one = (int)(this->value11 * 10.0);
    this->result = (this->value01 - this->one) / 10;
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
class int_pop_check
{
private:
  int value01;
  int value02;
  int value03;
  bool Judge;
  void space01(int value);
  void space02(void);
  int_pop object01[5];
public:
  int getFirst1(void);
  int getFirst2(void);
  void setValue(int value1);
  int getInput(void);
  void setJudge(bool judge1);
  bool getJudge(void);
  void judge(void);
  void show(void);
  ~int_pop_check(void);
};
int_pop_check::~int_pop_check(void)
{
  this->value01 = (int)NULL;
  this->value02 = (int)NULL;
  this->value03 = (int)NULL;
  this->Judge = (bool)NULL;
}
void int_pop_check::setJudge(bool judge1)
{
  this->Judge = judge1;
}
bool int_pop_check::getJudge(void)
{
  return this->Judge;
}
void int_pop_check::setValue(int value1)
{
  this->value01 = 0;
  this->value02 = 0;
  this->value03 = 0;
  this->value01 = value1;
  if (this->value01 > 9999999) {
    std::cout << "The Input value is scale out." << std::endl;
    this->setJudge(false);
  } else if (this->value01 < -9999999) {
    std::cout << "The Input value is scale out." << std::endl;
    this->setJudge(false);
  } else {
    this->value01 = abs(this->value01);
    this->object01[0].setValue(this->value01);
    this->object01[1].setValue(this->object01[0].getResult());
    this->value02 = this->object01[0].getFirst();
    this->value03 = this->object01[1].getFirst();
    this->setJudge(true);
  }
}
int int_pop_check::getFirst1(void)
{
  return this->value02;
}
int int_pop_check::getFirst2(void)
{
  return this->value03;
}
int int_pop_check::getInput(void)
{
  return this->value01;
}
void int_pop_check::judge(void)
{
  if (this->value02 != this->value03)
    this->setJudge(false);
  else this->setJudge(true);
  if (this->getJudge() != true)
    std::cout << "This input value is not corresponding.";
  else std::cout << "This input value is corresponding.";
}
void int_pop_check::space01(int value)
{
  if (value < 10) {
    std::cout << "                               *" << std::endl;
  } else if (value < 100) {
    std::cout << "                              *" << std::endl;
  } else if (value < 1000) {
    std::cout << "                             *" << std::endl;
  } else if (value < 10000) {
    std::cout << "                            *" << std::endl;
  } else if (value < 100000) {
    std::cout << "                           *" << std::endl;
  } else if (value < 1000000) {
    std::cout << "                          *" << std::endl;
  } else if (value < 10000000) {
    std::cout << "                         *" << std::endl;
  } else if (value < 100000000) {
    std::cout << "                        *" << std::endl;
  }
}
void int_pop_check::space02(void)
{
  if (this->getJudge() != false)
    std::cout << "       *" << std::endl;
  else std::cout << "   *" << std::endl;
}
void int_pop_check::show(void)
{
  if (this->getJudge() != false) {
    std::cout << "***********************************************" << std::endl;
    std::cout << "*    input  : " <<  this->getInput();
    this->space01(this->getInput());
    std::cout << "*   first1  : " << this->getFirst1();
    this->space01(this->getFirst1());
    std::cout << "*   first2  : " << this->getFirst2();
    this->space01(this->getFirst2());
    std::cout << "*    ";
    this->judge();
    this->space02();
    std::cout << "***********************************************" << std::endl;
  }
}
class consultant
{
private:
  bool Input;
  int_pop_check object02;
public:
  void msg01(void);
  void msg06(void);
  void msg07(void);
  void setValue(int value);
  void setInput(bool input);
  bool getInput(void);
  void show(void);
  ~consultant(void);
};
void consultant::msg01(void)
{
  std::cout << "This program calculate a corresponding pop firsts values of integer value." << std::endl;
  std::cout << "Please enter a integer value." << std::endl;
  std::cout << "value>";
}
void consultant::msg06(void)
{
  std::cout << "OK!" << std::endl;
}
void consultant::msg07(void)
{
  std::cout << "The Input value is Error!" << std::endl;
  this->setInput(false);
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
  this->object02.setValue(value);
  this->setInput(true);
}
void consultant::show(void)
{
  if (this->getInput() != false) {
    this->msg06();
    this->object02.show();
  } else this->msg07();
}
consultant::~consultant(void)
{
  this->Input = (bool)NULL;
}
int main(void)
{
  int value001;
  consultant lady;
  std::cout << "This program calculate a corresponding of integer value." << std::endl;
  std::cout << "Please enter value." << std::endl;
  std::cout << "value>";
  if (std::cin >> value001) {} else {lady.msg07();
    value001 = (int)NULL;
    return 1;}
  lady.setValue(value001);
  lady.show();
  value001 = (int)NULL;
  return 0;
}
