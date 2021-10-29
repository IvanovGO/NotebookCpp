#include "Application.hpp"
#include <cstdio>


Component::Component(int num){
No=num;
printf("Component Constructor No %i\n",No);
}

Component::~Component(){
printf("Component Destructor No%i\n",No);
}

void Component::Run(){
printf("virtual Component Run\n");
}

void Component::Handler(){

}

Application::Application(){
printf("Application Constructor\n");
}

Application::~Application(){
iter=Components.begin();

while (iter!=Components.end())
   {
   Component* pcomponent = *iter;
 delete pcomponent;
 iter++;
   }

printf("Application Destructor\n");

}


int Application::Register(Component * reg){
Components.push_back(reg);
printf("Application Register %i\n",Components.size());
return 0;
}


void Application::Run(){
std::vector<Component*>::iterator iter=Components.begin();

while (iter!=Components.end())
   {
   Component* pcomponent = *iter;
 pcomponent->Run();
 iter++;
   }
}

void Application::R(int i){
iter=Components.begin();
 iter+=i-1;  
Component* pcomponent = *iter;
 pcomponent->Run();
}

void Application::Ri(std::vector<Component*>::iterator iter){
 Component* pcomponent = *iter;
 pcomponent->Run();
}
