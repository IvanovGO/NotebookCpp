#ifndef MAIN_HPP_INCLUDED
#define MAIN_HPP_INCLUDED
#include "PNotebook.h"
#include <vector>


class MyApp:public PNotebook{
void HandleEvent(Event ev) override;
};

class NextApp:public PNotebook{
void HandleEvent(Event ev) override;
};

#endif // MAIN_HPP_INCLUDED
