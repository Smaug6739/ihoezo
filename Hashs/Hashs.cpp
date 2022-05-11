#include <iostream>
#include <thread>
#include <fstream>
#include "algorithms.h"

bool end{ false };
long int attemps{ 0 };
/*
std::string reference{"96719db60d8e3f498c98d94155e1296aac105c4923290c89eeeb3ba26d3eef92"};
void thread1() {
    while (end != true) {
        std::cout << "Passwords attemps : " << attemps << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

}
void thread2() {
    std::ifstream file{ "D:\\Development\\10-million-password-list-top-1000000.txt" };
    std::string pass;
    while ((std::getline(file, pass)) && !end) {
        std::string hash{ sha_256(pass) };
        if (hash == reference) {
            end = true;
            std::cout << "The password is: " << pass << ".\n" << "The hash is:" << hash << "\n" << "Password found after " << attemps << " attemps." << std::endl;
        }
        attemps++;
    }
    end = true;
    std::cout << "Unknown hash.\nAttemps: " << attemps << "." << std::endl;
}
*/
int main(int arc, char* argv[])
{
    //std::thread t1(thread1);
    //std::thread t2(thread2);
    //t1.join();
    //t2.join();
    std::string hash{ sha_256("Test") };
    return 0;
}
