#include "Clock.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Clock::Clock()
{
  time = 0;
  notify();
}

void Clock::setTime()
{
  //time = chrono::system_clock::now();
  time++;
  notify();
}

string Clock::getTime()
{
  //std::time_t t = chrono::system_clock::to_time_t(time);
  //stringstream ss;
  //ss << t;
  //string timestring = ss.str();

  return to_string(time);
}
