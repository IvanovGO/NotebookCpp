//Application.hpp
#include <vector>


class Component
{
public:
int No;
Component(int num);
~Component();
virtual void Run();
virtual void Handler();

};


class Application
{ 
public:
std::vector <Component*>  Components; 
std::vector<Component*>::iterator iter;

Application();
~Application();

void Run();

void R(int i);
void Ri(std::vector<Component*>::iterator iter);


int Register(Component * reg);

};
