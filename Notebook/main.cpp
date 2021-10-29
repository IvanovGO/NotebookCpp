#include "main.hpp"

MyApp::MyApp(std::string str){
}


int main()
{

std::vector<TApplication*> vec;

TApplication * app = new TApplication("1");
MyApp * ma = new MyApp("s");

vec.push_back(app);



while (1) for (auto a:vec) {a->Run();}



return 0;
}

