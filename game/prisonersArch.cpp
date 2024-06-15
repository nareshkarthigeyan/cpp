#include <iostream>
#include <string>

#define MAX_ROUNDS 25
#define NAME_CHARS 20

class Player {
    public:
        std::string name;
        int score;
        int attack[MAX_ROUNDS];

    Player(const char nameInp[], int scoreInp, int attackArr[])
    {
        name = nameInp;
        score = scoreInp;
        for (int i = 0; i < MAX_ROUNDS; i++){
            attack[i] = attackArr[i];
        }
    }

    void printInfo(void)
    {
        std::cout << name << " " << score <<  std::endl;
        for (int i = 0; i <= MAX_ROUNDS; i++)
        {
            std::cout << attack[i] << std::endl;
        }
    }
};

class Bot {
    public:
        char name[NAME_CHARS];
        int score;
        bool attack[MAX_ROUNDS];
};

int main(void){
    int arr[] = {0, 1, 5, 9, 11, 15, 19, 21, 45, 1212, 4343, 1213, 3, 6969};
    const char name[] = "Naresh!!!";
    int score = 55;
    Player naresh(name, 45, arr);

    naresh.printInfo();
}