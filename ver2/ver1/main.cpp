//main.cpp

#include "main.hpp"

#define C_MEM 5

int main(){
Application app;

Window w={0,0,COLS,LINES,COLOR_YELLOW,COLOR_BLUE,ACS_HLINE};

Component * comp= new Component(w,1);
app.Register(comp);


Window w2={10,10,20,20,COLOR_YELLOW,COLOR_GREEN,ACS_HLINE};

Component * t= new Component(w2,2);
app.Register(t);

app.Run();
//sleep(3);

}
