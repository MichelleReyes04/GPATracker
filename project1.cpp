//normal college units= 120
//gpa rn:  3.71
//credits completed: 120
//average unit per class which is 3 
//what is the average grade in your classes if you want to achieve a certain gpa 

#include <iostream>
using namespace std;

//calculate average grade (in terms unit)
float calculate(int x, float y, int z, float a){ 
    float answer =  ((a * x) - (y * z)) / (x-z);  
    return answer;
}

//the lettergrade for each respective unit
string letterGrade(float number){ 
    if (number >= 4.0) {
        return "A";
    }
    else if (number >= 3.7) {
        return "A-";
    }
    else if (number >= 3.3) {
        return "B+";
    }
    else if (number >= 3.0) {
        return "B";
    }
    else if (number >= 2.7) {
        return "B-";
    }
    else if (number >= 2.3) {
        return "C+";
    }
    else if (number >= 2.0) {
        return "C";
    }
    else if (number >= 1.7) {
        return "C-";
    }
    else if (number >= 1.0) {
        return "D";
    }
    else {
        return "F";
    }
}

//main 
int main(){
    cout << "Based on the average unit class which is 3" << endl;
    int units;
    cout << "Type your totals units: ";
    cin >> units;
    cout << "Your number is: " << units <<endl;//'endl' is newline
    float currentgpa;
    cout << "Type your current gpa: ";
    cin >> currentgpa;
    cout << "Your current gpa is " << currentgpa << endl;
    int credits;
    cout << "Type your completed credits: ";
    cin >> credits;
    cout << "Your credits: " << credits << endl;
    float desiredgpa;
    cout << "Type your desired gpa: ";
    cin >> desiredgpa;
    cout << "Your desired gpa is " << desiredgpa << endl;
    float answer = calculate(units, currentgpa, credits, desiredgpa);
    
    cout << "Answer is: " << answer << endl;
    string lettergrade = letterGrade(answer);
    cout << "Letter Grade is: " << lettergrade << endl;
    return 0;
}
