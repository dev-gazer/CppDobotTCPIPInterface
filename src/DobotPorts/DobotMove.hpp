#pragma once
#include "Connection/Socket.h"

class DobotMove : public Connection{
    public:
        std::string ip;
        int port;
        DobotMove(const std::string &ip, const int &port) : Connection(ip, port){};
        std::string movJ(const float &x, const float &y, const float &z, const float &rz);
        std::string movL(const float &x, const float &y, const float &z, const float &rz);
        std::string relMovL(const float &ox, const float &oy, const float &oz);
        std::string movJog(const std::string &axisId);
        std::string clearError();
        std::string resetRobot();
        std::string syncRobot();
};
