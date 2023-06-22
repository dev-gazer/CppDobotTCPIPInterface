testDobot: src/Main.cpp src/DobotPorts/*.cpp src/Utils/*.cpp
	g++ src/Main.cpp src/DobotPorts/*.cpp src/Utils/*.cpp -o testDobot -I.