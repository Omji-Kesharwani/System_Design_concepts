#include<bits/stdc++.h>
using namespace std;

// Memento Pattern
class DocumentMemento{
  private:
    string content;
  public:
    DocumentMemento(const string& c) : content(c) {}

    string getSavedContent() const {
        return content;
    }
};
// Originator
class Document{
 private:
  string content ;

  public:
  Document(const string& c) : content(c) {}
  void write(string c){
    content += c;
  }
  string read(){
    return content;
  }
  DocumentMemento* save(){
    return new DocumentMemento(content);
  }

  void restore(DocumentMemento* memento){
    if(memento == nullptr) return;
    content = memento->getSavedContent();
  }

};
//Caretaker
class History{
  private:
    vector<DocumentMemento*> mementos;
  public:
   History() {
    mementos = vector<DocumentMemento*>();
   }

   void addMemento(DocumentMemento* memento) {
        mementos.push_back(memento);
    }

    DocumentMemento* getMemento(int index) {
        if (index < 0 || index >= mementos.size()) {
            return nullptr;
        }
        return mementos[index];
    }
};

int main()
{
    Document doc("Hello");
    History history;

    cout << "Initial Content: " << doc.read() << endl;

    // Save state
    history.addMemento(doc.save());

    // Make changes
    doc.write(", World!");
    cout << "After Writing: " << doc.read() << endl;

    // Save state
    history.addMemento(doc.save());

    // More changes
    doc.write(" Welcome to Memento Pattern.");
    cout << "After More Writing: " << doc.read() << endl;

    // Restore to previous state
    doc.restore(history.getMemento(1));
    cout << "After Restoring to 2nd State: " << doc.read() << endl;

    // Restore to initial state
    doc.restore(history.getMemento(0));
    cout << "After Restoring to Initial State: " << doc.read() << endl;

    return 0;
}