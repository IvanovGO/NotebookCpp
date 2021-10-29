//Application.hpp
#include <list>
#include <panel.h>

struct Window{
int X,Y,SX,SY;
short FontColor,BgColor;
chtype Border;
WINDOW *pwin;};

struct Event{};




class  TWindow{
public:
TWindow(Window win);
~TWindow();
virtual void HandleEvent(Event event);
virtual void Draw();
Window win;
virtual void ClrScr();
int runned=0;
};


class TMemo:public TWindow{
public:
TMemo(Window win);
};


class TCaption:public TWindow{};


class TEdit:public TWindow{};

class TApplication{
public:
TApplication();
~TApplication();

virtual void Reg(TWindow * app);
void NotifyEvent(Event event);
void Run();
private:
std::list<TWindow*> Components;
};

