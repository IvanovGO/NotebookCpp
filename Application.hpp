//application.hpp
#include <vector>
#include <functional>
#include <string>


class TApplication {
public:
std::vector<std::reference_wrapper<TApplication>> Family;
 TApplication();
 TApplication(char  str[5]);
 
~TApplication();
virtual void Run();
private:
};

class TTimer{
public:
TTimer();
};


class TWindow{
public:
TWindow();
};

class TFrame:public TWindow{
public:
TFrame();
};

class TText:public TWindow{
public:
TText();
};


