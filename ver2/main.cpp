//main.cpp

#include "main.hpp"

int main(int argc, char * argv[]){

TApplication app;

Window w={0,0,COLS,LINES,COLOR_YELLOW,COLOR_BLUE,ACS_HLINE};
TWindow * pwin = new TWindow(w);
app.Reg(pwin);

Window w2={10,10,29,20,COLOR_YELLOW,COLOR_BLUE,ACS_HLINE};

TWindow * pwin2 = new TWindow(w2);
app.Reg(pwin2);


app.Run();

}
