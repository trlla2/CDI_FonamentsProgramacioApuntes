#include <iostream>

enum class EnemyType {
    WARRIOR,
    SORCERER,
    NINJA,
    COUNT
};

struct Enemy {
    int m_health;
    int m_attack;
    EnemyType m_type;
};

bool operator==(Enemy& a , Enemy& b) {
    if (a.m_health == b.m_health && a.m_attack == b.m_attack && a.m_type == b.m_type) {
        return true;
    }
    return false;
}

bool operator==(Enemy& a, int& i) {
    if (a.m_health == b.m_health && a.m_attack == b.m_attack && a.m_type == b.m_type) {
        return true;
    }
    return false;
}

Enemy& operator++(Enemy& e) {
    e.m_health += 10; // etc
}

int main()
{
    Enemy e1;
    Enemy e2;
    int i;
    bool isEqual = e1 == e2; // No peta porque sobreescribimos el operador

    bool isEqual = e1 == i; // No peta porque sobreescribimos el operador
    std::cout << "Hello World!\n";
}
