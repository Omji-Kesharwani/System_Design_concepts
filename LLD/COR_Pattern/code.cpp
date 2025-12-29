#include <bits/stdc++.h>
using namespace std;

/* ---------- Priority Enum ---------- */
enum class Priority {
    BASIC,
    INTERMEDIATE,
    CRITICAL
};

/* ---------- Request Class ---------- */
class Request {
    Priority priority;

public:
    Request(Priority p) : priority(p) {}

    Priority getPriority() const {
        return priority;
    }
};

/* ---------- Handler Interface ---------- */
class SupportHandler {
protected:
    SupportHandler* nextHandler = nullptr;

public:
    virtual ~SupportHandler() = default;

    void setNextHandler(SupportHandler* handler) {
        nextHandler = handler;
    }

    virtual void handleRequest(const Request& request) = 0;
};

/* ---------- Concrete Handlers ---------- */

// Level 1 Support
class Level1SupportHandler : public SupportHandler {
public:
    void handleRequest(const Request& request) override {
        if (request.getPriority() == Priority::BASIC) {
            cout << "Level 1 Support handled the request." << endl;
        } else if (nextHandler) {
            nextHandler->handleRequest(request);
        }
    }
};

// Level 2 Support
class Level2SupportHandler : public SupportHandler {
public:
    void handleRequest(const Request& request) override {
        if (request.getPriority() == Priority::INTERMEDIATE) {
            cout << "Level 2 Support handled the request." << endl;
        } else if (nextHandler) {
            nextHandler->handleRequest(request);
        }
    }
};

// Level 3 Support
class Level3SupportHandler : public SupportHandler {
public:
    void handleRequest(const Request& request) override {
        if (request.getPriority() == Priority::CRITICAL) {
            cout << "Level 3 Support handled the request." << endl;
        } else {
            cout << "Request cannot be handled." << endl;
        }
    }
};

/* ---------- Client ---------- */
int main() {
    // Create handlers
    SupportHandler* level1 = new Level1SupportHandler();
    SupportHandler* level2 = new Level2SupportHandler();
    SupportHandler* level3 = new Level3SupportHandler();

    // Set up the chain
    level1->setNextHandler(level2);
    level2->setNextHandler(level3);

    // Create requests
    Request request1(Priority::BASIC);
    Request request2(Priority::INTERMEDIATE);
    Request request3(Priority::CRITICAL);

    // Send requests
    level1->handleRequest(request1);
    level1->handleRequest(request2);
    level1->handleRequest(request3);

    // Cleanup
    delete level1;
    delete level2;
    delete level3;

    return 0;
}
