//main.cpp

#include "main.hpp"

#define C_MEM 5

int main(){

sleep(5);

Application app;

//MyComp mc(11);

for (int i=0;i<C_MEM;i++){
MyComp* pm=new MyComp(i);
app.Register(pm);
}

for (int j=0;j<C_MEM;j++){
Test* pm=new Test(j+C_MEM);
app.Register(pm);
}

app.iter=app.Components.begin();
while (app.iter!=app.Components.end()) {app.Ri(app.iter);app.iter++;}

sleep(10);

}
