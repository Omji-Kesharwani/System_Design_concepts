#include <iostream>
#include <string>

using namespace std;

/* Subject */
class Image {
public:
    virtual void display() = 0;
    virtual ~Image() {}
};

/* RealSubject */
class RealImage : public Image {
private:
    string filename;

    void loadImageFromDisk() {
        cout << "Loading image: " << filename << endl;
    }

public:
    RealImage(const string& file) : filename(file) {
        loadImageFromDisk();
    }

    void display() override {
        cout << "Displaying image: " << filename << endl;
    }
};

/* Proxy */
class ProxyImage : public Image {
private:
    RealImage* realImage;
    string filename;

public:
    ProxyImage(const string& file) : filename(file), realImage(nullptr) {}

    void display() override {
        if (realImage == nullptr) {
            realImage = new RealImage(filename);  // Lazy initialization
        }
        realImage->display();
    }

    ~ProxyImage() {
        delete realImage;  // Clean up memory
    }
};

/* Client */
int main() {
    Image* image = new ProxyImage("example.jpg");

    // Image will be loaded from disk only when display() is called
    image->display();

    cout << endl;

    // Image will NOT be loaded again (cached in proxy)
    image->display();

    delete image;
    return 0;
}
