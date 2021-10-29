#include "PNotebook.h"
#include <cstdio>

PNotebook::PNotebook()
{
printf("PNotebook constructor\n");
    //ctor
}

PNotebook::~PNotebook()
{
    printf("PNotebook destructor\n");
    //dtor
}

void PNotebook::HandleEvent(Event ev){
printf("PNotebook Handle Event\n");
};
