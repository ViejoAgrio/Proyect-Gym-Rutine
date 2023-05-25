class Chest : public Exercise{
    public:
    Chest();
    Chest(string, float, int, int);
};

Chest::Chest(){
    setName(" ");
    setWeight(0);
    setReps(0);
    setSets(0);
}

Chest::Chest(string name1, float weight1, int reps1, int sets1){
    setName(name1);
    setWeight(weight1);
    setReps(reps1);
    setSets(sets1);
}