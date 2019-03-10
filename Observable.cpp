#include "Observable.h"

#include <algorithm>
#include <iostream>

using namespace std;

void Observable::add(Observer *o)
{
  observers.push_back(o);
}

void Observable::remove(Observer *o)
{
  std::remove(observers.begin(), observers.end(), o);
}

void Observable::notify()
{
  for (Observer *o : observers) {
    o->update();
  }
}
