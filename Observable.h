#pragma once

#include "Observer.h"
#include <vector>

using namespace std;

class Observable
{
 public:
  void add(Observer *o);
  void remove(Observer *o);
  void notify();

 private:
  vector<Observer *> observers;
};
