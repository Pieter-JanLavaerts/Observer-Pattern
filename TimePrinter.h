#pragma once

#include "Observer.h"
#include "Clock.h"

class TimePrinter : public Observer
{
public:
  TimePrinter(Clock *c);
  virtual void update() override;

private:
  Clock *clock;
};
