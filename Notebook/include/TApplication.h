#ifndef TAPPLICATION_H
#define TAPPLICATION_H
#include <string>
#include <list>

class TApplication
{
    public:
        std::list <TApplication*> chields;
        TApplication();
        TApplication(std::string str);
        void Run();
        ~TApplication();

    protected:

    private:
        int called=0;
};
#endif // TAPPLICATION_H


class TWindow:TApplication{
    public:
        TWindow();
        virtual ~TWindow();
};
