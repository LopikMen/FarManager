#pragma once


class ManagerApp
{
private:
	UI buttons;
	NavWindow navLeft;
	NavWindow navRight;
public:
	ManagerApp();
	void run();
private:
	void processEvent();
	void update();
	void render();
	void moveElemet();
	void copyElement();
};

