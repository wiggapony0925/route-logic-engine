#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int option;
    int routeNumber;
    int travelTime;
 //do while loop to display the menu until extited by the user 
 do{ 
    // Display menu 
    cout << "======= Bus Management System =======" << endl;
    cout << "    1. Display Routes" << endl;
    cout << "    2. Search Route by Number" << endl;
    cout << "    3. Search Route by Travel time" << endl;
    cout << "    4. Find the Longest and shortest route" << endl;
    cout << "    5. Write summary report" << endl;
    cout << "    6. Exit" << endl;
//get user input for option and displays the information depeding on their response 
    cout << "Enter your option: ";
    cin >> option;
    if(option == 1){
        ifstream file("routes.txt"); // opens file with routes
        if(file.is_open()){ //checks if file is open 
            string line;
            while(getline(file, line)){
                cout << line << endl;
            }
            file.close();
        } else { // if file cant open display error message
            cout << "Unable to open file." << endl;
        }
    } else if(option == 2){
        cout << "Enter route number: "; // gets user input for route number to search for
        cin >> routeNumber;
        ifstream file("routes.txt"); // opens file with routes
        if(file.is_open()){
            string line;
            bool found = false; // flag to check if route is found
            while(getline(file, line)){
                if(line.find(to_string(routeNumber)) != string::npos){
                    cout << line << endl;
                    found = true;
                }
            }
            if(!found){
                cout << "Route not found." << endl;
            }
            file.close();
        } else {
            cout << "Unable to open file." << endl;
        }
    } else if(option == 3){
        cout << "Enter travel time: ";
        cin >> travelTime;
        ifstream file("routes_time.txt");
        if(file.is_open()){
            string line;
            bool found = false;
            while(getline(file, line)){
                size_t pos = line.find_last_of(' ');
                if(pos != string::npos){
                    int time = stoi(line.substr(pos + 1));
                    if(time <= travelTime){
                        cout << line << endl;
                        found = true;
                    }
                }
            }
            if(!found){
                cout << "No routes found with travel time less than or equal to " << travelTime << "." << endl;
            }
            file.close();
        } else {
            cout << "Unable to open file." << endl;
        }
    } else if(option == 4){
        // Code for finding longest and shortest route
    } else if(option == 5){
        // Code for writing summary report
    } else if(option == 6){
        cout << "Exiting..." << endl;
    } else {
        cout << "Invalid option. Please try again." << endl;
    }
 } while(option != 6);
}

