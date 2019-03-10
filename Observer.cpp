#include "Observer.h"
#include "Observable.h"

Observer::Observer(Observable *o)
{
  observable = o;
  observable->add(this);
}
