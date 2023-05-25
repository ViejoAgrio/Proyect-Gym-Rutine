class Twin : public Exercise{
    public:
    Twin();
    Twin(string, float, int, int);
};

Twin::Twin(){
    setName(" ");
    setWeight(0);
    setReps(0);
    setSets(0);
}

Twin::Twin(string name1, float weight1, int reps1, int sets1){
    setName(name1);
    setWeight(weight1);
    setReps(reps1);
    setSets(sets1);
}