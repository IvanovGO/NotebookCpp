//Application.hpp
#include <vector>
#include <string>
#include <panel.h>

#define EV_KB 0
#define EV_MSG 1
#define EV_ERR 2

struct Event {
int id;
int type;
char ch;
std::string msg;
};


struct Window{
int X,Y,SX,SY;
short FontColor,BgColor;
chtype Border;
WINDOW *pwin;
};




class Component{
public:
int id;
Window win;
Component(Window win,int id);
~Component();
virtual  void Draw();
virtual  void HandleEvent(Event event);
private:
void ClrScr();
};

class Text:public Component{
public:
Text(Window win);};

class Application
{ 
public:
std::vector <Component*>  Components; 
std::vector<Component*>::iterator iter;
MEVENT event;

Application();
~Application();

void Run();
int Register(Component * reg);

//private:
void NotifyEvent(Event event);

};
