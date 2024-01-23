#include <iostream>
#include <conio.h>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

struct InstallationStep 
{
    string instruction;
    InstallationStep* next;
    InstallationStep* prev;
};

class DoublyLinkedList 
{
	private:
    InstallationStep* head;
    InstallationStep* tail;
    int numSteps;
    
	public:
    DoublyLinkedList() 
	{
        head = nullptr;
        tail = nullptr;
        numSteps = 0;
    }
    
    InstallationStep* getHead() 
	{
        return head;
    }
    
    void addStep(string instruction) 
	{
        // Create a new InstallationStep struct
        InstallationStep* newStep = new InstallationStep;
        newStep->instruction = instruction;
        newStep->prev = nullptr;
        newStep->next = nullptr;
        
        // If the list is empty, set the new step as the head and tail
        if (head == nullptr) 
		{
            head = newStep;
            tail = newStep;
        }
        // Otherwise, add the new step to the end of the list
        else 
		{
            tail->next = newStep;
            newStep->prev = tail;
            tail = newStep;
        }
        numSteps++;
    }
    
    void displayStep(InstallationStep* step) 
	{
        cout << step->instruction << endl;
    }
    
    int getNumSteps() 
	{
        return numSteps;
    }

};
	
int main() {
    DoublyLinkedList installationSteps;

    // Add installation steps to the list
    installationSteps.addStep
	("===========================================\n" 
    "==> Welcome to the installation wizard! <==\n" 
    "===========================================\n");
    
    installationSteps.addStep
	("=====================================================\n"
	"==> Please read and accept the license agreement. <==\n"
	"=====================================================\n");
	
    installationSteps.addStep
	("=========================================\n"
	"==> Select the installation location. <==\n" 
	"=========================================\n");
	
    installationSteps.addStep
	("=========================================\n"
	"==> Choose the components to install. <==\n" 
	"=========================================\n");
	
    installationSteps.addStep
	("=================================================\n"
	"==> Ready to install. Click Install to begin. <==\n" 
	"=================================================\n"
	" ==> Click 'Install' to install the app. <==\n");

    // Set the current step to the first step in the installation process
    InstallationStep* currentStep = installationSteps.getHead();
    
    // Display the instruction for the current step and installation progress percentage
    cout << "Progress: " << 0 << "%" << endl;
    installationSteps.displayStep(currentStep);

    // Wait for user input to move to the next or previous step
    int completedSteps = 0;
	        
    while (true) 
	{
        string input;
        
        cout << "Enter ==> 'Next' to the next step <==" << endl;
        cout << "Enter ==> 'Back' to the previous step <==" << endl;
		cout << "Enter ==> 'Cancel' to exit the installation process. <==" << endl << endl;
		
		cout << "==> ";
        cin >> input;

    if ((input == "Next" || input == "n" || input == "N" || input == "NEXT") && currentStep->next != nullptr)
	{
		currentStep = currentStep->next;
		system("cls");
		installationSteps.displayStep(currentStep);
		completedSteps++;
	}

    else if ((input == "Back" || input == "b" || input == "B" || input == "BACK") && currentStep->prev != nullptr) 
	{
        currentStep = currentStep->prev;
        system("cls");
        installationSteps.displayStep(currentStep);
        completedSteps--;
    }
    
    else if (input == "Cancel" || input == "C" || input == "c" || input == "CANCEL")
	{
        break;
    }
    
    else if ((input == "Install" || input == "i" || input == "I" || input == "INSTALL") && currentStep->next == nullptr) 
	{
		system("cls");
        // Simulate the loading process
        for (int i = 0; i < 10; i++) 
		{
		  	cout << "==> Installing";
            for (int j = 0; j < i; j++) 
			{
                cout << ".";
            }
            // Wait for a short period of time to simulate loading
            this_thread::sleep_for(chrono::milliseconds(500));
			system("cls");
        }
        
        cout << "==> Installation complete! <==" << endl;
        break;
    }
    
    else 
	{
		system("cls");
        cout << "==> Invalid input. Please try again. <==" << endl;
    }
    
    // Calculate and display the installation progress percentage
    float progress = (float)completedSteps / (float)installationSteps.getNumSteps() * 100;
    
    // Display the progress bar
	int barWidth = 20;
	int completedWidth = (int)(progress / 100 * barWidth);
	int remainingWidth = barWidth - completedWidth;
	
	cout << "Progress: [";
	for (int i = 0; i < completedWidth; i++) 
	{
	    cout << "=";
	}
	
	for (int i = 0; i < remainingWidth; i++) 
	{
	    cout << " ";
	}
	
	cout << "] " << progress << "%\n\n" << endl;
    }

    // Free the memory used by the InstallationStep structs
    InstallationStep* current = installationSteps.getHead();
    while (current != nullptr) 
	{
        InstallationStep* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}

