#include "Socket.h"
#include <iostream>
#include <unistd.h>

class DobotDashboard : public Connection{
    public:
        std::string ip;
        int port;
        DobotDashboard(std::string ip, int port) : Connection(ip, port){};
        std::string enableRobot();
        std::string disableRobot();
        std::string getPose();
        std::string getAngle();
        std::string clearError();
        std::string resetRobot();
        std::string digitalInput(int i);
        std::string digitalOutput(int i, bool state);
        std::string syncRobot();
};

std::string DobotDashboard::enableRobot(){
    DobotDashboard::tx("EnableRobot()");
    return DobotDashboard::rx();
}

std::string DobotDashboard::disableRobot(){
    DobotDashboard::tx("DisableRobot()");
    return DobotDashboard::rx();
}

std::string DobotDashboard::getPose(){
    DobotDashboard::tx("GetPose()");
    return DobotDashboard::rx();
}

std::string DobotDashboard::getAngle(){
    DobotDashboard::tx("GetAngle()");
    return DobotDashboard::rx();
}

std::string DobotDashboard::clearError(){
    DobotDashboard::tx("ClearError()");
    return DobotDashboard::rx();
}

std::string DobotDashboard::resetRobot(){
    DobotDashboard::tx("ResetRobot()");
    return DobotDashboard::rx();
}

std::string DobotDashboard::digitalInput(int i){
    DobotDashboard::tx("DI(" + std::to_string(i) + ")");
    return DobotDashboard::rx();
}

std::string DobotDashboard::digitalOutput(int i, bool state){
    if (state == true){
        DobotDashboard::tx("DO(" + std::to_string(i) + ",1)");
    } else {
        DobotDashboard::tx("DO(" + std::to_string(i) + ",0)");
    }
    return DobotDashboard::rx();
}

std::string DobotDashboard::syncRobot(){
    DobotDashboard::tx("Sync()");
    return DobotDashboard::rx();
}

int main(int argc, char const *argv[]) {
        DobotDashboard doby("192.168.15.110", 29999);
        std::cout << doby.enableRobot() << std::endl;
        std::cout << doby.getPose() << std::endl;
        std::cout << doby.getAngle() << std::endl;
        std::cout << doby.clearError() << std::endl;
        std::cout << doby.resetRobot() << std::endl;
        std::cout << doby.digitalInput(1) << std::endl;
        std::cout << doby.digitalOutput(7, true) << std::endl;
        std::cout << doby.digitalOutput(7, false) << std::endl;
        sleep(1);
        std::cout << doby.digitalOutput(8, true) << std::endl;
        std::cout << doby.digitalOutput(8, false) << std::endl;
        std::cout << doby.syncRobot() << std::endl;
        std::cout << doby.disableRobot() << std::endl;
        return 0;
}