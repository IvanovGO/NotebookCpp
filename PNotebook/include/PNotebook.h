#ifndef PNOTEBOOK_H
#define PNOTEBOOK_H

struct Event{};


class PNotebook
{
    public:
        PNotebook();
        virtual ~PNotebook();
        virtual void HandleEvent(Event ev);
    protected:

    private:
};

template <class T>
    class Application {
    private:
    public:
        Application& operator << (const Application &C) {
        return *this;
        };

    };

#endif // PNOTEBOOK_H
