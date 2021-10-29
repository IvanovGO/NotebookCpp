//main.hpp
#include "Application.hpp"
#include <cstdio>


class MyApp:public TApplication{
public:
MyApp();
void Run(int i);
TWindow  MainWindow;
TTimer  Timer;
TText Text;
};
