//Application.cpp
#include "Application.hpp"
#include "panel.h"


TApplication::TApplication(){

printf("Application parent constructor. Family size is %i\n",Family.size());



}

void TApplication::Run(){
printf("TApplication Run\n");

for (TApplication child : Family){
child.Run();
}}

TTimer::TTimer(){
printf("TTimer constructor\n");

}

TApplication::~TApplication(){
printf("Application parent destructor\n");
}

TText::TText(){
printf("TText constructor\n");

}

TWindow::TWindow(){
printf("TWindow parent constructor\n");

}

TFrame::TFrame(){
printf("TFrame constructor\n");

}

