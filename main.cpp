#include "Clock.h"
#include "TimePrinter.h"
#include "timewindow.h"
#include <thread>

using namespace std;

void settime(Clock *c)
{
  while(true) {
    c->setTime();
    this_thread::sleep_for(1s);
  }
}


int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  //observable
  Clock c;

  //observers
  TimePrinter printer = TimePrinter(&c);
  TimeWindow timewindow(&c);

  //incrementing clock every second
  thread clockthread(settime, &c);

  app->run(timewindow);
  clockthread.detach();
}
