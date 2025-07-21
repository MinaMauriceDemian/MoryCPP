
/*
| Action                         | `normalBox` | `constBox` |
| ------------------------------ | ----------- | ---------- |
| `setLength()`                  | ✅ Yes       | ❌ No       |
| `getLength()`                  | ✅ Yes       | ✅ Yes      |
| `printAccessCount()`           | ✅ Yes       | ✅ Yes      |
| Modify `accessCount` (mutable) | ✅ Yes       | ✅ Yes      |
| Modify `length`                | ✅ Yes       | ❌ No       |

🔑 Key Concepts
A const object can only call const member functions
A normal object can call both const and non-const functions
mutable allows modification inside const functions

*/
#include <iostream>
using namespace std;

class Box {
private:
    int length;
    mutable int accessCount;  // Can be changed even in const functions

public:
    Box(int l) : length(l), accessCount(0) {}

    // Const member function
    int getLength() const {
        accessCount++;  // ✅ allowed because accessCount is mutable
        return length;
    }

    // Non-const function
    void setLength(int l) {
        length = l;
    }

    // Const function to print access count
    void printAccessCount() const {
        cout << "getLength() called " << accessCount << " times." << endl;
    }
};

int main() {
    // 🔵 Normal object
    Box normalBox(10);

    normalBox.setLength(20);                  // ✅ Allowed
    cout << "Normal Box Length: " << normalBox.getLength() << endl;  // ✅ Allowed
    normalBox.printAccessCount();             // ✅ Allowed

    // 🔴 Constant object
    const Box constBox(30);

    // constBox.setLength(40);               // ❌ Not allowed: setLength is not const
    cout << "Const Box Length: " << constBox.getLength() << endl;    // ✅ Allowed
    constBox.printAccessCount();             // ✅ Allowed

    return 0;
}
