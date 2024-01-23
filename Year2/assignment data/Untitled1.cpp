#include <iostream>
#include <string>

using namespace std;

struct InstallationStep {
    string instruction;
    InstallationStep* prev;
    InstallationStep* next;
};

class DoublyLinkedList {
private:
    InstallationStep* head;
    InstallationStep* tail;
    int numSteps;
public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
        numSteps = 0;
    }
    void addStep(string instruction) {
        // Create a new InstallationStep struct
        InstallationStep* newStep = new InstallationStep;
        newStep->instruction = instruction;
        newStep->prev = nullptr;
        newStep->next = nullptr;

        // If the list is empty, set the new step as the head and tail
        if (head == nullptr) {
            head = newStep;
            tail = newStep;
        }
        // Otherwise, add the new step to the end of the list
        else {
            tail->next = newStep;
            newStep->prev = tail;
            tail = newStep;
        }
        numSteps++;
    }
    void displayStep(InstallationStep* step) {
        cout << step->instruction << endl;
    }
    InstallationStep* getFirstStep() {
        return head;
    }
    InstallationStep* getLastStep() {
        return tail;
    }
    int getNumSteps() {
        return numSteps;
    }
    ~DoublyLinkedList() {
        InstallationStep* current = head;
        while (current != nullptr) {
            InstallationStep* next = current->next;
            delete current;
            current = next;
        }
    }
};

class InstallationWizard {
private:
    DoublyLinkedList installationSteps;
    InstallationStep* currentStep;
    int completedSteps;
public:
    InstallationWizard(DoublyLinkedList steps) {
        installationSteps = steps;
        currentStep = nullptr;
        completedSteps = 0;
    }
    void displayProgress() {
        float progress = (float)(completedSteps) / (float)(installationSteps.getNumSteps() - 1) * 100;
        cout << "Progress: " << progress << "% [";
        for (int i = 0; i < 20; i++) {
            if (i < progress / 5) {
                cout << "=";
            }
            else {
                cout << " ";
            }
        }
        cout << "]" << endl;
    }
    void displayCurrentStep() {
        cout << "Step " << completedSteps << " of " << installationSteps.getNumSteps() - 1 << ":" << endl;
        installationSteps.displayStep(currentStep);
    }
    void moveToNextStep() {
        if (currentStep->next != nullptr) {
            currentStep = currentStep->next;
            completedSteps++;
            displayCurrentStep();
            displayProgress();
        }
    }
    void moveToPreviousStep() {
        if (currentStep->prev != nullptr) {
            currentStep = currentStep->prev;
            completedSteps--;
            displayCurrentStep();
            displayProgress();
        }
    }
    void startInstallation() {
        currentStep = installationSteps.getFirstStep();
        displayCurrentStep();
        displayProgress();
    }
    void endInstallation() {
        delete &installationSteps;
    }
};

int main() {
    DoublyLinkedList installationSteps;

    // Add installation steps
    installationSteps.addStep("Welcome to the installation wizard.");
    installationSteps.addStep("Please read the license agreement.");
    installationSteps.addStep("Select the installation directory.");
    installationSteps.addStep("Choose the components to install.");
    installationSteps.addStep("Ready to install.");
    installationSteps.addStep("Installation complete. Click Finish to exit.");

    InstallationWizard wizard(installationSteps);
    wizard.startInstallation();

    string input;
    while (1) {
        cout << "Enter 'Next' to move to the next step, 'Back' to move to the previous step, or 'Cancel' to exit the installation process." << endl;
        cin >> input;
        if (input == "Next") {
            wizard.moveToNextStep();
        }
        else if (input == "Back") {
            wizard.moveToPreviousStep();
        }
        else if (input == "Cancel") {
            wizard.endInstallation();
            break;
        }
        else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    return 0;
}