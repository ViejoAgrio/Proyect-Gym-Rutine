class Push{
    private:
    Chest chest[2];
    Deltoid deltoid[3];
    public:
    Push(Chest, Chest, Deltoid, Deltoid, Deltoid);
};

Push::Push(Chest chest1, Chest chest2, Deltoid deltoid1, Deltoid deltoid2, Deltoid deltoid3){
    chest[1]=chest1;
    chest[2]=chest2;
    deltoid[1]=deltoid1;
    deltoid[2]=deltoid2;
    deltoid[3]=deltoid3;
}
