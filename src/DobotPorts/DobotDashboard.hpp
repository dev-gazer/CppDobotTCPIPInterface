#pragma once
#include "Connection/Socket.h"

class DobotDashboard : public Connection{
    public:
        std::string ip;
        int port;
        DobotDashboard(const std::string &ip, const int &port) : Connection(ip, port){};
        std::string enableRobot();
        std::string disableRobot();
        std::string getPose();
        std::string getAngle();
        std::string clearError();
        std::string resetRobot();
        std::string digitalInput(const int &i);
        std::string digitalOutput(const int &i, const bool &state);
        std::string syncRobot();
};
