#pragma once
class NavWindow
{
	Element* activeElement = nullptr;
	vector<Element> elements;
public:
	void removeElement();
};

