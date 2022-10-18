#include <iostream>
#include <vector>
#include <string>

int main(){
    std::string s = "Hola mundo";
    std::vector<std::string> vString = {"xd","vaya"};
    std::cout << s << std::endl;
    for(std::string r : vString){
        std::cout << r << std::endl;
    }
    return 0;
}