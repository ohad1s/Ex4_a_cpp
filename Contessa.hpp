//
// Created by shira on 25/04/2022.
//

#ifndef CPP_EX4_A_CONTESSA_H
#define CPP_EX4_A_CONTESSA_H

#endif //CPP_EX4_A_CONTESSA_H
namespace coup {
    class Contessa : public Player {
    private:
        int players;
    public:
        Contessa(Game g, std::string name);

        ~Contessa();

        void income();

        void foreign_aid();

        void coup(Player p);

        string role();

        int coins();
        void block(Player p);

    };
}