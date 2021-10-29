#include "Application.hpp"
#include<unistd.h>
#include <cstdio>


class Test:public Component{
public:
Test(int i):Component(i){};
void Run(){printf("test run\n");
Handler();};
private:
void Handler(){printf("test handler\n");};
};


class MyComp:public Component{
public:
MyComp(int i):Component(i){
printf("Constructor MyComp\n");}

void Run(){
printf("MyComp Run!!!!\n");
Component::Run();
}



~MyComp(){
printf("MyComp Done\n");
}

};
