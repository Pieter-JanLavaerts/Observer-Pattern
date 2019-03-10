#include "TimeWindow.h"
#include "Clock.h"
#include <iostream>

TimeWindow::TimeWindow(Clock *c) : Observer(c)
{
  clock = c;
  m_label.set_text("Hello world");

  // Sets the border width of the window.
  set_border_width(10);

  // This packs the button into the Window (a container).
  add(m_label);

  // The final step is to display this newly created widget...
  m_label.show();
}

TimeWindow::~TimeWindow()
{
}

void TimeWindow::update()
{
  m_label.set_text(clock->getTime());
}
