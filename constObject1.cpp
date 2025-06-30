#include <iostream>
using namespace std;

class BidAmount {
private:
    int amount;

public:
    // ✅ Constructor to initialize const object (no default constructor here)
    BidAmount(int a) {
        amount = a;
    }

    // 🔸 Non-const member function — allowed for non-const objects
    void reset() {
        amount = 0;
    }

    // 🔹 Const member function — safe for const objects
    int getValue() const {
        return amount;
    }

    // ❌ This would cause a compile error if marked const
    // void updateBid() const {
    //     amount = 100; // ❌ ERROR : const Member Function Cannot Modify Any Data Member
    // }
};

int main() {
    BidAmount b1(500);
    cout << "Bid amount (b1): " << b1.getValue() << endl;
    b1.reset();
    cout << "After reset (b1): " << b1.getValue() << endl;

    // 🔒 Const object — must be initialized at creation
    const BidAmount b2(1000);  // ✅ Must initialize const object

    cout << "Bid amount (b2 - const): " << b2.getValue() << endl;
    //✅ Indicates Const Member Functions Can Be Called by Both Const and Non-Const Objects

    // ❌ Cannot modify using non-const functions
    // b2.reset();              // ❌ Compile-time error: const Objects Can Only Call const Member Functions
    // b2.amount = 500;         // ❌ Compile-time error: private and const

    return 0;
}