#include "DobotDashboard.hpp"

std::string DobotDashboard::enableRobot(){
    DobotDashboard::sendMsg("EnableRobot()");
    return DobotDashboard::waitReply();
}

std::string DobotDashboard::disableRobot(){
    DobotDashboard::sendMsg("DisableRobot()");
    return DobotDashboard::waitReply();
}

std::string DobotDashboard::getPose(){
    DobotDashboard::sendMsg("GetPose()");
    return DobotDashboard::waitReply();
}

std::string DobotDashboard::getAngle(){
    DobotDashboard::sendMsg("GetAngle()");
    return DobotDashboard::waitReply();
}

std::string DobotDashboard::clearError(){
    DobotDashboard::sendMsg("ClearError()");
    return DobotDashboard::waitReply();
}

std::string DobotDashboard::resetRobot(){
    DobotDashboard::sendMsg("ResetRobot()");
    return DobotDashboard::waitReply();
}

std::string DobotDashboard::digitalInput(int i){
    DobotDashboard::sendMsg("DI(" + std::to_string(i) + ")");
    return DobotDashboard::waitReply();
}

std::string DobotDashboard::digitalOutput(int i, bool state){
    if (state == true){
        DobotDashboard::sendMsg("DO(" + std::to_string(i) + ",1)");
    } else {
        DobotDashboard::sendMsg("DO(" + std::to_string(i) + ",0)");
    }
    return DobotDashboard::waitReply();
}

std::string DobotDashboard::syncRobot(){
    DobotDashboard::sendMsg("Sync()");
    return DobotDashboard::waitReply();
}