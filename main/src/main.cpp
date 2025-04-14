#include <cstdint>
#include <iostream>
#include <thread>

void func() {
    
}

int main(int argc, const char * argv[]) {
    std::thread t(func);
}