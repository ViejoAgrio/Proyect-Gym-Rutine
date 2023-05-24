#include <iostream>
#include<string>
using namespace std;

class Exercise{
private: 
	string name;
	float weight;
	int reps;
public:
	Exercise();
	Exercise(string,float,int);
	void setName(string);
	void setWeight(float);
	void setReps(int);
	string getName();
	float getWeight();
	int getReps();
};


Exercise::Exercise(){
	name="name";
	weight=0;
	reps=0;
}

Exercise::Exercise(string name1, float weight1, int reps1){
	name=name1;
	weight=weight1;
	reps=reps1;
}

void Exercise::setName(string name1){
	name=name1;
}

void Exercise::setWeight(float weight1){
	weight=weight1;
}

void Exercise::setReps(int reps1){
	reps=reps1;
}

string Exercise::getName(){
	return name;
}

float Exercise::getWeight(){
	return weight;
}

int Exercise::getReps(){
	return reps;
}
