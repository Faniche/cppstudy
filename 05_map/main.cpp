#include <iostream>
#include "tools/tools.h"
#include "map/SimpleMap.h"

void testSimpleMap();

int main() {
    testSimpleMap();
    return 0;
}

void testSimpleMap() {
    splitLine(" Test SimpleMap");
    SimpleMap<int, std::string> stuffInfo;
    stuffInfo.put(100, "chare");
    stuffInfo.put(101, "faniche");
    stuffInfo.put(102, "chiry");

    std::cout << "find id 100: " << stuffInfo.get(100) << std::endl;
    std::cout << "find id 101: " << stuffInfo.get(101) << std::endl;
    std::cout << "find id 102: " << stuffInfo.get(102) << std::endl;
}