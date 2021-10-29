#include "TApplication.h"
#include <iostream>
#include <vector>
class MyApp:TApplication{
public:

MyApp(std::string str);

void Run(){
TApplication::Run();}

TWindow win;
TWindow win2;

};
