
//A class inherits from multiple base classes (use cautiously to avoid complexity).
class Electric {  
public:  
    void charge() { cout << "Charging..." << endl; }  
};  

class Autonomous {  
public:  
    void selfDrive() { cout << "Self-driving mode ON." << endl; }  
};  

class Tesla : public Electric, public Autonomous {};  

int main() {  
    Tesla modelX;  
    modelX.charge();    // From Electric  
    modelX.selfDrive(); // From Autonomous  
}  