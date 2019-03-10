#pragma once

#include <gtkmm/window.h>
#include <gtkmm/label.h>

class HelloWorld : public Gtk::Window
{

public:
  HelloWorld();
  virtual ~HelloWorld();

protected:
  //Member widgets:
  Gtk::Label m_label;
};
