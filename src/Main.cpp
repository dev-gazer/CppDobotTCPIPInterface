#include "DobotPorts/DobotDashboard.hpp"
#include "DobotPorts/DobotMove.hpp"
#include "Utils/Utils.hpp"
#include <iostream>

int main(int argc, char* argv[]) { 
    DobotDashboard dobotDash("192.168.2.66", 29999);
    DobotMove dobotMove("192.168.2.66", 30003);
    Utils utils;
    std::cout << dobotDash.enableRobot() << '\n';
    std::cout << dobotMove.clearError() << '\n';
    std::cout << dobotDash.getPose() << '\n';
    std::cout << dobotDash.disableRobot() << '\n';
    std::vector<float> res = utils.parseToPose(dobotDash.getPose());
    for (int i = 0; i<res.size(); ++i){
        std::cout << res[i] << '\n';
    }
    return 0;
}
