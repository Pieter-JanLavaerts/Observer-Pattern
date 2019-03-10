#include "helloworld.h"
#include <iostream>

HelloWorld::HelloWorld()
{
  // Sets the text of label widget
  m_label.set_text("Hello world");

  // Sets the border width of the window.
  set_border_width(10);

  // This packs the label into the Window (a container).
  add(m_label);

  // The final step is to display this newly created widget...
  m_label.show();
}

HelloWorld::~HelloWorld()
{
}
