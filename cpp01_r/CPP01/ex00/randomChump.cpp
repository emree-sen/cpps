#include "Zombie.hpp"

// Stack üzerinde bir Zombie oluşturur ve kendini tanıtır
void randomChump(std::string name) {
    Zombie stackZombie(name);
    stackZombie.announce();
}
