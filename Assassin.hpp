//
// Created by shira on 25/04/2022.
//

#ifndef CPP_EX4_A_ASSASSIN_H
#define CPP_EX4_A_ASSASSIN_H

#endif //CPP_EX4_A_ASSASSIN_H
namespace coup{
    class Assassin : public Player {
    private:
        int players;
    public:
        Assassin(Game g,std::string name);
        ~Assassin();
        void income();
        void foreign_aid();
        void coup(Player p);
        string role();
        int coins();
    };
}