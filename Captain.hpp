//
// Created by shira on 25/04/2022.
//

#ifndef CPP_EX4_A_CAPTAIN_H
#define CPP_EX4_A_CAPTAIN_H

#endif //CPP_EX4_A_CAPTAIN_H
namespace coup{
    class Captain : public Player {
    private:
        int players;
    public:
        Captain(Game g,std::string name);
        ~Captain();
        void income();
        void foreign_aid();
        void coup(Player p);
        string role();
        int coins();
        void block(Player p);
        void steal(Player p1);
    };
}