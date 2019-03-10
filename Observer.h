#pragma once

#include <iostream>

using namespace std;

class Observable;

class Observer
{
public:
  Observer(Observable *o);
  virtual void update(){cout << "Superclass update" << endl;}

private:
  Observable *observable;
};
