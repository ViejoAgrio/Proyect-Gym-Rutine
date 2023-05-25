#include <iostream>
#include<string>
using namespace std;

class Exercise{
private: 
	string name;
	float weight;
	int reps;
	int sets;
public:
	Exercise();
	Exercise(string,float,int,int);
	void setName(string);
	void setWeight(float);
	void setReps(int);
	void setSets(int);
	string getName();
	float getWeight();
	int getReps();
	int getSets();
	virtual void provingOverride();
};


Exercise::Exercise(){
	name="name";
	weight=0;
	reps=0;
	sets=0;
}

Exercise::Exercise(string name1, float weight1, int reps1, int sets1){
	name=name1;
	weight=weight1;
	reps=reps1;
	sets=sets1;
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

void Exercise::setSets(int sets1){
	sets=sets1;
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

int Exercise::getSets(){
	return sets;
}

void Exercise::provingOverride(){
	cout<<"Father";
}