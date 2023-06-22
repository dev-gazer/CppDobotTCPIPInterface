#include "Socket.h"
#include <iostream>
#include <unistd.h>

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

std::string DobotMove::movJ(float x, float y, float z, float rz){
    DobotMove::sendMsg("MovJ(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "," + std::to_string(rz) + ")");
    return DobotMove::waitReply();
}

std::string DobotMove::movL(float x, float y, float z, float rz){
    DobotMove::sendMsg("MovL(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "," + std::to_string(rz) + ")");
    return DobotMove::waitReply();
}

std::string DobotMove::relMovL(float ox, float oy, float oz){
    DobotMove::sendMsg("RelMovL(" + std::to_string(ox) + "," + std::to_string(oy) + "," + std::to_string(oz) + ")");
    return DobotMove::waitReply();
}

std::string DobotMove::movJog(std::string axisId){
    DobotMove::sendMsg("MovJog(" + axisId + ")");
    return DobotMove::waitReply();
}

std::string DobotMove::clearError(){
    DobotMove::sendMsg("ClearError()");
    return DobotMove::waitReply();
}

std::string DobotMove::resetRobot(){
    DobotMove::sendMsg("ResetRobot()");
    return DobotMove::waitReply();
}

std::string DobotMove::syncRobot(){
    DobotMove::sendMsg("Sync()");
    return DobotMove::waitReply();
}