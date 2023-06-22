#include "DobotPorts/DobotDashboard.hpp"
#include "DobotPorts/DobotMove.hpp"
#include "Utils/Utils.hpp"
#include <iostream>

int main(int argc, char* argv[]) { 
    DobotDashboard dobotDash("192.168.1.6", 29999);
    DobotMove dobotMove("192.168.1.6", 30003);
    Utils utils;
    std::cout << dobotDash.enableRobot() << std::endl;
    std::cout << dobotMove.clearError() << std::endl;
    std::cout << dobotDash.getPose() << std::endl;
    std::cout << dobotDash.disableRobot() << std::endl;
    utils.parseToPose(dobotDash.getPose());
    return 0;
}