#include "Zombie.hpp"

int main() {
    Zombie* heapZombie = newZombie("Emre");
    heapZombie->announce();

    delete heapZombie;

    Zombie stackZombie("StackZombie");

    randomChump("StackZombie");

    return 0;
}
