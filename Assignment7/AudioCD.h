#include <iostream>
#include <string>
#include <vector>


class AudioCD{
    private:
        std::string cdTitle;
        std::string artists[4];
        int releaseYear;
        std::string genre;
        float condition;

    public:
    AudioCD();
    AudioCD(int i);
    void toString();
    std::string getTitle();
    std::string getArtist(int i);
};