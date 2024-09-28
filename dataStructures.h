#ifndef data_structures
#define data_structures

#include <iostream>
#include <string>
#include <vector>

using namespace std;
// the main headers of the .yaml file
class subFunctionsLLNode {
    private:
        string name;
        string description;
        string codeBlock;
        string output;
        string returnCode;
    
    public:

        string getName() { return name; }
        string getDescription() { return description; }
        string getCodeBlock() { return codeBlock; }
        string getOutput() { return output; }
        string getReturnCode() { return returnCode; }

        void setName(string name) { this->name = name; }
        void setDescription(string description) { this->description = description; }
        void setCodeBlock(string codeBlock) { this->codeBlock = codeBlock; }
        void setOutput(string output) { this->output = output; }
        void setReturnCode(string returnCode) { this->returnCode = returnCode; }
};

class topicHeadersLL {
    private:
        string name;
        string description;
        vector<subFunctionsLLNode> functions;
    
    public:
        topicHeadersLL *next;

        string getName() { return name; }
        string getDescription() { return description; }
};

class LinkedList {
    private:
        topicHeadersLL *head;
        topicHeadersLL *tail;

    public:

        LinkedList() {
            head = new topicHeadersLL();
            tail = head;
        }

        ~LinkedList() {
            while(head != nullptr) {
                topicHeadersLL *nextHeader = head->next;
                delete head;

                head = nextHeader;
            }
        }

        void insertTail() {

        }
};






#endif