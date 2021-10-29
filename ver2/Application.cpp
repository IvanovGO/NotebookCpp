//Application.hpp

#include "Application.hpp"

TApplication::TApplication(){
printf("Hello!\n");
 initscr();
 //nodelay(stdscr,TRUE);
 noecho();
 cbreak();
 start_color(); }

TApplication::~TApplication(){for (TWindow* c:Components ) {delete c;}
endwin();printf("Good Bye!\n");}

void TApplication::Reg(TWindow * app){this->Components.push_back(app);}

void TApplication::Run(){
Event event;
this->NotifyEvent(event);
char ch=' ';
while(ch!='q'){
ch=getch();
switch (ch){
case 'a':this->NotifyEvent(event);break;
}
}}

void TApplication::NotifyEvent(Event event){for (TWindow * c:Components ) {c->HandleEvent(event);}}

TWindow::TWindow(Window win){
this->win=win;
this->win.pwin=newwin(this->win.SY,
						   this->win.SX,
						   this->win.Y,
						   this->win.X); }

TWindow::~TWindow(){delwin(this->win.pwin);}

void TWindow::HandleEvent(Event event){
this->Draw();
runned++;
mvwprintw(this->win.pwin,1,1,"Runned %i times",runned);
wrefresh(this->win.pwin);
}

void TWindow::ClrScr(){
for (int x=0;x<this->win.SX;x++) {
	for (int y=0;y<this->win.SY;y++) {
	wmove(this->win.pwin,y,x);
	waddch(this->win.pwin,' ');	
	}}
	wmove(this->win.pwin,1,1);
	wrefresh(this->win.pwin);
//	wclear(this->win.pwin);
}

void TWindow::Draw(){
init_pair(1,this->win.FontColor,this->win.BgColor);
wattron(this->win.pwin,COLOR_PAIR(1));
ClrScr();
wborder(this->win.pwin, 0, 0, 0, 0, 0, 0, 0, 0);
whline(this->win.pwin,this->win.Border, 0);

}
