// Application.cpp

#include "Application.hpp"
#include <cstdio>
//#include <iostream>

Text::Text(Window win){
this->id=id;
this->win=win;
this->win.pwin=derwin(this->win.SY,
						   this->win.SX,
						   this->win.Y,
						   this->win.X);

}//Constructor


Component::Component(Window win,int id){
this->id=id;
this->win=win;
this->win.pwin=newwin(this->win.SY,
						   this->win.SX,
						   this->win.Y,
						   this->win.X);

}//Constructor

Component::~Component(){delwin(this->win.pwin);}//Destructor

void Component::Draw(){
init_pair(1,this->win.FontColor,this->win.BgColor);
wattron(this->win.pwin,COLOR_PAIR(1));
ClrScr();
wborder(this->win.pwin, 0, 0, 0, 0, 0, 0, 0, 0);
whline(this->win.pwin,this->win.Border, 0);
wrefresh(this->win.pwin);
}


void Component::HandleEvent(Event event){
if (event.id==this->id){
this->Draw();
waddstr(this->win.pwin,event.msg.c_str());
wrefresh(this->win.pwin);
}}

void Component::ClrScr(){

int mx,my;
//getmaxyx(this->win.pwin,my,mx);

for (int x=0;x<this->win.SX;x++) 
	for (int y=0;y<this->win.SY;y++) {wmove(this->win.pwin,y,x);
	waddch(this->win.pwin,' ');	
	}
	wmove(this->win.pwin,1,1);
//	wclear(this->win.pwin);
}

Application::Application(){
 initscr();
 nodelay(stdscr,TRUE);
 noecho();
 cbreak();}
 start_color();

Application::~Application(){//Application Destructor
iter=Components.begin();
while (iter!=Components.end())
   {   Component* pcomponent = *iter;
        delete pcomponent;
        iter++;   }
endwin();
printf("Good Bye!\n");}

int Application::Register(Component * reg){//Register components
Components.push_back(reg);
return 0;}

void Application::Run(){
int ch;
int finita=1;
Event ev;
NotifyEvent(ev);
while (finita) {
ch=getch();
        switch (ch){
 	case 'z':	ev.id=1;
 				ev.msg="z"; 
       				goto         call_event;
 	case 'x':	ev.id=2;
 				ev.msg="x"; 
       				goto         call_event;
 	case 'a':	ev.id=1;
 				ev.msg="id1"; 
       				goto         call_event;
 	case 's':	ev.id=2;
 				ev.msg="id2"; 
 				goto         call_event;
        case 'y':	ev.msg="lol";
        call_event:  NotifyEvent(ev);
                                break;
        case 'Q': finita=0; break;
        }
  }}

void Application::NotifyEvent(Event event){
 iter=Components.begin();
while (iter!=Components.end())
   {   Component* pcomponent = *iter;
	 pcomponent->HandleEvent(event);
	 iter++;
   }}



