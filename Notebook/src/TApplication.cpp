#include "TApplication.h"
#include <cstdio>
#include <iostream>
TApplication::TApplication()
{

    printf("TApplication constructor\n");
    called++;
    //ctor
}

TApplication::TApplication(std::string str)
{

    std::cout<<str<<std::endl;
    //ctor
}


 TApplication::~TApplication()
{
    printf("TApplication destructor. Constructor called %i times\n",called);


    //dtor
}

void TApplication::Run(){
std::cout<<"Members of chield "<<chields.size()<<std::endl;
}

TWindow::TWindow(){
    printf("TWindow constructor\n");
    TApplication::chields.push_back(static_cast<TWindow*>(this));
}
TWindow::~TWindow(){
    printf("TWindow destructor\n");
}

