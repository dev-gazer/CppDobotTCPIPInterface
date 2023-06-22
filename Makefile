testDobot: src/Main.cpp src/DobotPorts/*.cpp
	g++ src/Main.cpp src/DobotPorts/*.cpp -o testDobot -I.