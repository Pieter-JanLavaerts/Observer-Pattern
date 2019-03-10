#pragma once

#include <gtkmm/window.h>
#include <gtkmm/label.h>
#include "Observer.h"
#include "Clock.h"

class TimeWindow : public Gtk::Window, public Observer
{
public:
  TimeWindow(Clock *c);
  virtual ~TimeWindow();
  virtual void update() override;

protected:
  //Member widgets:
  Gtk::Label m_label;

private:
  Clock *clock;
};
