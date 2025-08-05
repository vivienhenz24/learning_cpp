/*
 * Coordinate Parsing Practice Problem
 * 
 * Your task is to parse coordinate strings in the format "x,y"
 * and extract the x and y values as doubles.
 * 
 * Example: "3.14,-2.71" should extract:
 * - X: 3.14
 * - Y: -2.71
 * 
 * Requirements:
 * 1. Parse the coordinate string format "x,y"
 * 2. Extract x and y as double values
 * 3. Handle positive and negative numbers
 * 4. Handle decimal numbers
 * 5. Handle invalid formats gracefully
 * 
 * Test cases:
 * - "3.14,-2.71" → X: 3.14, Y: -2.71
 * - "0,0" → X: 0, Y: 0
 * - "42.5,17.3" → X: 42.5, Y: 17.3
 * - "-10.5,20.0" → X: -10.5, Y: 20.0
 * - "invalid" → Error: Invalid coordinate format
 * - "3.14" → Error: Missing comma
 * - "3.14,2.71,1.41" → Error: Too many values
 */

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;

struct Coordinate {
    double x;
    double y;
    
    Coordinate(double xVal, double yVal) : x(xVal), y(yVal) {}
};

// TODO: Implement this function
Coordinate parseCoordinate(const string& coordStr) {
    // Your code here!
    // Parse the string "x,y" and return a Coordinate object
    // Throw runtime_error("Invalid coordinate format") for invalid input
    
    throw runtime_error("Not implemented yet!");
}

void testCoordinateParser() {
    vector<string> testCases = {
        "3.14,-2.71",
        "0,0",
        "42.5,17.3",
        "-10.5,20.0",
        "1.0,-1.0",
        "invalid",        // Invalid format
        "3.14",          // Missing comma
        "3.14,2.71,1.41", // Too many values
        ",2.71",         // Missing x value
        "3.14,",         // Missing y value
        "abc,def"        // Non-numeric values
    };
    
    cout << "=== Coordinate Parsing Practice ===\n\n";
    
    for (const auto& testCase : testCases) {
        cout << "Testing: \"" << testCase << "\" → ";
        
        try {
            Coordinate coord = parseCoordinate(testCase);
            cout << "X: " << coord.x << ", Y: " << coord.y;
        } catch (const exception& e) {
            cout << "Error: " << e.what();
        }
        
        cout << endl;
    }
}

int main() {
    testCoordinateParser();
    return 0;
} 