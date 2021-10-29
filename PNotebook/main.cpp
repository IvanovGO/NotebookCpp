#include <iostream>

#include "main.hpp"

void MyApp::HandleEvent(Event ev){
PNotebook::HandleEvent(ev);
};

void NextApp::HandleEvent(Event ev){
PNotebook::HandleEvent(ev);
};

int main()
{

std::vector <PNotebook*> av;

// Application <MyApp> a;



MyApp * app=new MyApp();
NextApp * app2=new NextApp();

av.push_back(app);
av.push_back(app2);

for (int i=0;i<10;i++) av.push_back(new MyApp());

Event ev;

while (1) for (auto a:av) a->HandleEvent(ev);


delete app;
delete app2;
    return 0;
}
