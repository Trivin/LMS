#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::endl;
using std::string;

class PersModel
{
    int height;
    int width;
    string texture;

public:
    PersModel(int h, int w, string t)
    {
        height = h;
        width = w;
        texture = t;
    }
};

class Person
{
private:
    int id;
    int hitpoints;
    int weapon;
    string name;
    PersModel model = PersModel(1,1,"");

protected:
    void setModel(PersModel m)
    {
        model = m;
    }

public:
    int getHitpoints()
    {
        return hitpoints;
    }

    string getName()
    {
        return name;
    }

    int getWeapon()
    {
        return weapon;
    }

    void damaged(int damage, string dName)
    {
        hitpoints = hitpoints - damage;     
        if (hitpoints <= 0)
            cout << name << " was killed by " << dName << std::endl;
        else
            cout << name << " HP: " << hitpoints << std::endl;
    }

    void move()
    {
        cout << name << " move";
    }

    Person(int i, int h, int w, string n)
    {
        id = i;
        hitpoints = h;
        weapon = w;
        name = n;
    }
};

class Player : public Person
{
private:
    int armor;
public:
    Player(int i, int h, int w, string n, int a) : Person(i,h,w,n)
    {
        setModel(PersModel(100, 100, "player_texture"));
        armor = a;
    }

    int getArmor()
    {
        return armor;
    }

    void chop(Person &enemy)
    {
        cout << getName() << " chop " << enemy.getName() << std::endl;
        enemy.damaged(getWeapon(), getName());
    }

};

class Creeper : public Person
{
public:
    Creeper(int i, int h, int w, string n) : Person(i,h,w,n)
    {
        setModel(PersModel(150, 50, "creeper_texture"));
    }

    void bite(Player &player)
    {
        cout << getName() << " bite " << player.getName() << std::endl;
        player.damaged(getWeapon()-player.getArmor(), getName());
    }
};

void fight(Player &player, Creeper &enemy)
{
    while (player.getHitpoints() > 0 && enemy.getHitpoints() > 0)
    {
        player.chop(enemy);
        if (enemy.getHitpoints() <= 0)
            break;
        enemy.bite(player);
        cout << std::endl;
    }
    cout << std::endl;
};

int main()
{
    Player newPlayer = Player(1, 100, 50, "John", 10);
    Creeper creeper1 = Creeper(2, 150, 30, "Creeper1");
    Creeper creeper2 = Creeper(2, 150, 40, "Creeper2");

    fight(newPlayer, creeper1);
    fight(newPlayer, creeper2);
}

//https://github.com/Trivin/LMS.git