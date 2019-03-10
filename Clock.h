#pragma once

#include "Observable.h"
#include <chrono>
#include <string>

using namespace std;

class Clock : public Observable
{
public:
  Clock();
  void setTime();
  string getTime();

private:
  //chrono::time_point<chrono::system_clock> time;
  int time;
};
