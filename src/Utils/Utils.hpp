#include <iostream>
#include <sstream>
#include <vector>

class Utils {
    public:
        std::vector<std::string> splitDobotResponse(const std::string &s, char delim);
        std::vector<float> parseToPose(const std::string &s);
};