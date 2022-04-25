//
// Created by shira on 25/04/2022.
//

#ifndef CPP_EX4_A_AMBASSADOR_H
#define CPP_EX4_A_AMBASSADOR_H

#endif //CPP_EX4_A_AMBASSADOR_H
namespace coup{
    class Ambassador : public Player{
    private:
        int players;
    public:
        Ambassador(Game g,std::string name);
        ~Ambassador();
        void income();
        void foreign_aid();
        void coup(Player p);
        string role();
        int coins();
        void transfer(Player p1,Player p2);
    };
}