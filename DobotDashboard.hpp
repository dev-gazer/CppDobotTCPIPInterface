#include "Socket.h"

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