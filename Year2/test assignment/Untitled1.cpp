#include<iostream>

using namespace std;

void displayUserOptions(bool displayInstructions) {
    if (displayInstructions) {
        cout << "Enter ==> 'Next' to go to the next step." << endl;
        cout << "Enter ==> 'Back' to go to the previous step." << endl;
        cout << "Enter ==> 'Cancel' to exit the installation process." << endl << endl;
    }
    cout << "==> Click 'Install' to install the app. <==" << endl << endl;
}

int main() {
	int input;
    int count = 0;
    bool displayInstructions = true;
    
    while (true) {
        if (count < 3) {
            displayUserOptions(displayInstructions);
        } else {
            displayUserOptions(false);
        }
        
        cout << "==> ";
        cin >> input;
        
        // Rest of the code...
        
        count++;
    }
    
    return 0;
}