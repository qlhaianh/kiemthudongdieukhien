#include <iostream>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

int main() {
    // Testcase 2: Tuổi hợp lệ (age >= 14)
    stringstream input1("18");
    stringstream output1;
    cin.rdbuf(input1.rdbuf()); // Redirect cin to read from input1
    streambuf* oldCout = cout.rdbuf(output1.rdbuf()); // Redirect cout to write to output1

    // Run the main function
    main();

    cin.rdbuf(oldCin); // Restore cin
    cout.rdbuf(oldCout); // Restore cout

    assert(output1.str() == "Ban da du tuoi lam can cuoc cong dan.\n");

    // Testcase 3: Tuổi không hợp lệ (age < 14)
    stringstream input2("10");
    stringstream output2;
    cin.rdbuf(input2.rdbuf()); // Redirect cin to read from input2
    streambuf* oldCout2 = cout.rdbuf(output2.rdbuf()); // Redirect cout to write to output2

    // Run the main function
    main();

    cin.rdbuf(oldCin); // Restore cin
    cout.rdbuf(oldCout2); // Restore cout

    assert(output2.str() == "Ban chua du tuoi lam can cuoc cong dan.\n");

    // Tương tự cho các testcase khác

    cout << "Tat ca testcase da chay thanh cong." << endl;

    return 0;
}
