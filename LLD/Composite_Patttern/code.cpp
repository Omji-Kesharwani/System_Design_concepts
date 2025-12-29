#include <bits/stdc++.h>
using namespace std;

/* ================= Component ================= */

class FileSystemComponent {
public:
    virtual void showDetails(int indent = 0) = 0;
    virtual ~FileSystemComponent() {}
};

/* ================= Leaf ================= */

class File : public FileSystemComponent {
    string name;

public:
    File(string name) : name(name) {}

    void showDetails(int indent = 0) override {
        cout << string(indent, ' ') << "- File: " << name << endl;
    }
};

/* ================= Composite ================= */

class Directory : public FileSystemComponent {
    string name;
    vector<FileSystemComponent*> children;

public:
    Directory(string name) : name(name) {}

    void add(FileSystemComponent* component) {
        children.push_back(component);
    }

    void showDetails(int indent = 0) override {
        cout << string(indent, ' ') << "+ Directory: " << name << endl;
        for (auto child : children) {
            child->showDetails(indent + 4);
        }
    }

    ~Directory() {
        for (auto child : children)
            delete child;
    }
};

/* ================= Client ================= */

int main() {
    Directory* root = new Directory("Root");

    root->add(new File("README.md"));
    root->add(new File("main.cpp"));

    Directory* src = new Directory("src");
    src->add(new File("app.cpp"));
    src->add(new File("utils.cpp"));

    Directory* assets = new Directory("assets");
    assets->add(new File("logo.png"));

    root->add(src);
    root->add(assets);

    root->showDetails();

    delete root;
    return 0;
}
