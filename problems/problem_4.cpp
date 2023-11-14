#include <string>
#include <sstream>


std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::stringstream ss(macAddress);
    int firstOctet;
    char delimiter;
    std::string result;
    ss>>std::hex>>firstOctet>>delimiter;
    if (firstOctet % 2 == 0){
        result = "Unicast";
    } else if(firstOctet== 0xFF){
        result = "Broadcast";
    } else{
        result = "Multicast";
    }

    // make use of control flow statements
     return result;
}
