// Function Overloading Example
#include<iostream>
using namespace std;

class Signin {
public:
    void login(string username, string password) {
        cout << "Username Login: " << username << " , " << password << endl;
    }

    void login(long long mobilenumber, int otp) {
        cout << "Mobile OTP Login: " << mobilenumber << " , " << otp << endl;
    }

    void login(string email) {
        cout << "Email Login: " << email << endl;
    }
};

int main() {
    Signin abc;

    abc.login("Aryan", "Aryan@123");
    abc.login(7007010783, 1234);
    abc.login("aryangupta123@gmail.com");

    return 0;
}
