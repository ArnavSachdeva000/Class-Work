#include <iostream>
using namespace std;

class SmartLight {
public:
    string brand;
    int brightness;
    bool isOn;

    SmartLight() {
        brand = "Unknown";
        brightness = 50;
        isOn = false; 
    }

    SmartLight(string b, int br, bool s) {
        brand = b;
        brightness = br;
        isOn = s;
    }

    void turnOn() {
        isOn = true;
    }

    void turnOff() {
        isOn = false;
    }

    void increaseBrightness() {
        brightness = brightness + 10;
        if (brightness > 100) {
            brightness = 100;
        }
    }

    void decreaseBrightness() {
        brightness = brightness - 10;
        if (brightness < 0) {
            brightness = 0;
        }
    }

    void displayStatus() {
        cout << "Brand: " << brand << endl;
        if (isOn == true)
            cout << "Status: ON" << endl;
        else
            cout << "Status: OFF" << endl;

        cout << "Brightness: " << brightness << endl;
        cout << endl;
    }
};

int main() {
    SmartLight light1;
    SmartLight light2("Philips", 80, true);

    light1.turnOn();
    light1.increaseBrightness();
    light1.displayStatus();

    light2.decreaseBrightness();
    light2.turnOff();
    light2.displayStatus();

    return 0;
}