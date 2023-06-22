#pragma once
#include "Connection/Socket.h"

class DobotMove : public Connection{
    public:
        std::string ip;
        int port;
        DobotMove(std::string ip, int port) : Connection(ip, port){};
        std::string movJ(float x, float y, float z, float rz);
        std::string movL(float x, float y, float z, float rz);
        std::string relMovL(float ox, float oy, float oz);
        std::string movJog(std::string axisId);
        std::string clearError();
        std::string resetRobot();
        std::string syncRobot();
};
