#include "Utils.hpp"

std::vector<std::string> Utils::splitDobotResponse(const std::string &s, char delim) {
    std::vector<std::string> result;
    std::stringstream ss (s);
    std::string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}

std::vector<float> Utils::parseToPose(const std::string &s) {
    std::vector<std::string> v = splitDobotResponse(s, '{');
    std::vector<std::string> posString = splitDobotResponse(v[1], '}');
    std::vector<float> result;
    std::stringstream ss (posString[0]);
    std::string item;

    while (getline (ss, item, ',')) {
        result.push_back(::atof(item.c_str()));
    }

    return result;
}