#include "../include/solution.hpp"

auto main() -> int {
    MyHashMap *myHashMap = new MyHashMap();
    myHashMap->put(1, 1);
    myHashMap->put(2, 2);
    myHashMap->get(1);
    myHashMap->get(3);
    myHashMap->put(2, 1);
    myHashMap->get(2);
    myHashMap->remove(2);
    myHashMap->get(2);

    return 0;
}
