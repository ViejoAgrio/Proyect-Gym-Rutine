#include <iostream>
#include "Exercise.cpp"
using namespace std;

int main(){
    Exercise ex("curl",20,8);
    cout<<ex.getName();
    cout<<ex.getWeight();
}