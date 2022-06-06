class BuildingBlueprint{
    private:
        int stories;
        int aptNum;
        float occupancyRate;
        bool fullyOccupied;

    public:
        BuildingBlueprint();
        BuildingBlueprint(int s, int a, float o);
        float getOccupancy();
        void setOccupancy(float o);
        int getStories();
        int getAptNum();
        bool getFull();
};