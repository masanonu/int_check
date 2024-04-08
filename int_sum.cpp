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
class int_sum
{
private:
  bool Judge;
  int value01;
  int first[8];
  int sum;
  void space(int value);
public:
  int_pop object01[8];
  void setJudge(bool judge);
  bool getJudge(void);
  void setValue(int value);
  int getInput(void);
  int getSum(void);
  void show(void);
  ~int_sum(void);
};
int_sum::~int_sum(void)
{
  this->Judge = (bool)NULL;
  this->value01 = (int)NULL;
  for (int i = 0; i < 8; i++) {
    this->first[i] = (int)NULL;
  }
  this->sum = (int)NULL;
}
void int_sum::setJudge(bool judge)
{
  this->Judge = judge;
}
bool int_sum::getJudge(void)
{
  return this->Judge;
}
void int_sum::setValue(int value)
{
  this->value01 = 0;
  for (int i = 0; i < 8; i++) {
    this->first[i] = 0;
  }
  this->value01 = value;
  this->value01 = abs(this->value01);
  if (this->value01 > 9999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setJudge(false);
  } else if (this->value01 < -9999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setJudge(false);
  } else {
    this->object01[0].setValue(this->value01);
    this->first[0] = this->object01[0].getFirst();
    this->object01[1].setValue(this->object01[0].getResult());
    this->first[1] = this->object01[1].getFirst();
    this->object01[2].setValue(this->object01[1].getResult());
    this->first[2] = this->object01[2].getFirst();
    this->object01[3].setValue(this->object01[2].getResult());
    this->first[3] = this->object01[3].getFirst();
    this->object01[4].setValue(this->object01[3].getResult());
    this->first[4] = this->object01[4].getFirst();
    this->object01[5].setValue(this->object01[4].getResult());
    this->first[5] = this->object01[5].getFirst();
    this->object01[6].setValue(this->object01[5].getResult());
    this->first[6] = this->object01[6].getFirst();
    this->object01[7].setValue(this->object01[6].getResult());
    this->first[7] = this->object01[7].getFirst();
    this->sum = 0;
    for (int i = 0; i < 8; i++) {
      this->sum += this->first[i];
    }
    this->setJudge(true);
  }
}
int int_sum::getSum(void)
{
  return this->sum;
}
int int_sum::getInput(void)
{
  return this->value01;
}
void int_sum::space(int value)
{
  if (value < 10) {
    std::cout << "               *" << std::endl;
  } else if (value < 100) {
    std::cout << "              *" << std::endl;
  } else if (value < 1000) {
    std::cout << "             *" << std::endl;
  } else if (value < 10000) {
    std::cout << "            *" << std::endl;
  } else if (value < 100000) {
    std::cout << "           *" << std::endl;
  } else if (value < 1000000) {
    std::cout << "          *" << std::endl;
  } else if (value < 10000000) {
    std::cout << "         *" << std::endl;
  } else if (value < 100000000) {
    std::cout << "        *" << std::endl;
  }
}
void int_sum::show(void)
{
  if (this->getJudge() != false) {
    std::cout << "****************************" << std::endl;
    std::cout << "*  input : " <<  this->getInput();
    this->space(this->getInput());
    std::cout << "*   sum  : " << this->getSum();
    this->space(this->getSum());
    std::cout << "****************************" << std::endl;
  }
}
class consultant
{
private:
  bool Input;
  int_sum object01;
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
  std::cout << "This program calculate a sum value of integer value." << std::endl;
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
  this->object01.setValue(value);
  this->setInput(true);
}
void consultant::show(void)
{
  if (this->getInput() != false)
    this->object01.show();
  else this->msg07();
}
consultant::~consultant(void)
{
  this->Input = (bool)NULL;
}
int main(void)
{
  int value001;
  consultant lady;
  lady.msg01();
  if (std::cin >> value001) {} else {lady.msg07();
    value001 = (int)NULL;
    return 1;}
  lady.setValue(value001);
  lady.show();
  value001 = (int)NULL;
  return 0;
}
    
    
