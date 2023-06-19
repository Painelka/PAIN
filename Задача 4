#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
class Device{
public:
	virtual void poll() {
		cout << "Device name" << endl;
	}
};
class Chet : public Device {
public:
	void poll() override {
		cout << "Device Chet" << endl;
	}
};
class Water : public Device {
public:
	void poll() override {
		cout << "Device Water" << endl;
	}
};
class Warm : public Device {
public:
	void poll() override {
		cout << "Device Warm" << endl;
	}
};

int main() {
	string line;
	vector<Device*> Device;
	ifstream fail("text.txt");
	if (fail.is_open()) {
		while (getline(fail, line)) {
			if ((line == "Mercury 230") || (line == "Neva MT314") || (line == "Energomera CE308")) {
				Chet* a = new Chet();
				Device.push_back(a);
			}
			if ((line == "Reallab NL-16HV") || (line == "Priboralectro PRE-16") || (line == "Energoservice ANMB-1-24")) {
				Water* b = new Water();
				Device.push_back(b);
			}
			if ((line == "Ouman S203") || (line == "Owen ТРМ232")) {
				Warm* c = new Warm();
				Device.push_back(c);
			}
		}
	}
	fail.close();
	for (int i = 0; i < Device.size(); i++) {
		Device[i]->poll();
	}
	system("pause");
}
