//main.cpp
#include "main.hpp"

MyApp::MyApp(){
printf("MyApp constructor\n");
}

void MyApp::Run(int i){
printf("MyApp Run\n");
TApplication::Run();
}

int main(){
MyApp  App();


}
