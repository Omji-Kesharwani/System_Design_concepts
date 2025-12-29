#include <bits/stdc++.h>
using namespace std;

/* ================= Receiver ================= */

class Device {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual ~Device() {}
};

class TV : public Device {
public:
    void turnOn() override {
        cout << "TV is turned ON" << endl;
    }

    void turnOff() override {
        cout << "TV is turned OFF" << endl;
    }

    void changeChannel(int channel) {
        cout << "Changing TV channel to " << channel << endl;
    }
};

class Radio : public Device {
public:
    void turnOn() override {
        cout << "Radio is turned ON" << endl;
    }

    void turnOff() override {
        cout << "Radio is turned OFF" << endl;
    }

    void adjustVolume(int volume) {
        cout << "Adjusting volume to " << volume << endl;
    }
};

/* ================= Command ================= */

class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() {}
};

/* ================= Concrete Commands ================= */

class TurnOnCommand : public Command {
    Device* device;
public:
    TurnOnCommand(Device* dev) : device(dev) {}
    void execute() override {
        device->turnOn();
    }
};

class TurnOffCommand : public Command {
    Device* device;
public:
    TurnOffCommand(Device* dev) : device(dev) {}
    void execute() override {
        device->turnOff();
    }
};

class ChangeChannelCommand : public Command {
    TV* tv;
    int channel;
public:
    ChangeChannelCommand(TV* t, int ch) : tv(t), channel(ch) {}
    void execute() override {
        tv->changeChannel(channel);
    }
};

class AdjustVolumeCommand : public Command {
    Radio* radio;
    int volume;
public:
    AdjustVolumeCommand(Radio* r, int v) : radio(r), volume(v) {}
    void execute() override {
        radio->adjustVolume(volume);
    }
};

/* ================= Invoker ================= */

class Remote {
    Command* command = nullptr;
public:
    void setCommand(Command* cmd) {
        command = cmd;
    }

    void pressButton() {
        if (command)
            command->execute();
        else
            cout << "No command assigned!" << endl;
    }
};

/* ================= Client ================= */

int main() {
    TV tv;
    Radio radio;

    TurnOnCommand tvOn(&tv);
    TurnOffCommand tvOff(&tv);
    ChangeChannelCommand tvChannel(&tv, 5);

    TurnOnCommand radioOn(&radio);
    TurnOffCommand radioOff(&radio);
    AdjustVolumeCommand radioVolume(&radio, 10);

    Remote remote;

    // Control TV
    remote.setCommand(&tvOn);
    remote.pressButton();

    remote.setCommand(&tvChannel);
    remote.pressButton();

    remote.setCommand(&tvOff);
    remote.pressButton();

    // Control Radio
    remote.setCommand(&radioOn);
    remote.pressButton();

    remote.setCommand(&radioVolume);
    remote.pressButton();

    remote.setCommand(&radioOff);
    remote.pressButton();

    return 0;
}
