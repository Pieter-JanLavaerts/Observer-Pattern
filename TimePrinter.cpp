#include "TimePrinter.h"
#include <iostream>
#include <chrono>

using namespace std;

TimePrinter::TimePrinter(Clock* c) : Observer(c)
{
  clock = c;
}

void TimePrinter::update()
{
  std::cout << clock->getTime() << endl;
}
