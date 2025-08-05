/*
 * Date Parsing Practice Problem
 * 
 * Your task is to parse date strings in the format "YYYY-MM-DD"
 * and extract the year, month, and day components.
 * 
 * Example: "2024-01-15" should extract:
 * - Year: 2024
 * - Month: 1
 * - Day: 15
 * 
 * Requirements:
 * 1. Parse the date string format "YYYY-MM-DD"
 * 2. Extract year, month, and day as integers
 * 3. Validate that the date is reasonable (year > 0, month 1-12, day 1-31)
 * 4. Handle invalid formats gracefully
 * 
 * Test cases:
 * - "2024-01-15" → Year: 2024, Month: 1, Day: 15
 * - "1995-12-25" → Year: 1995, Month: 12, Day: 25
 * - "2000-02-29" → Year: 2000, Month: 2, Day: 29
 * - "invalid" → Error: Invalid date format
 * - "2024-13-01" → Error: Invalid month
 * - "2024-01-32" → Error: Invalid day
 */

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector> // Added for test cases

using namespace std;

struct Date {
    int year;
    int month;
    int day;
    
    Date(int y, int m, int d) : year(y), month(m), day(d) {}
};

// TODO: Implement this function
Date parseDate(const string& dateStr) {
    // Your code here!
    // Parse the string "YYYY-MM-DD" and return a Date object
    // Throw runtime_error("Invalid date format") for invalid input
    
    throw runtime_error("Not implemented yet!");
}

// TODO: Implement this function for bonus validation
bool isValidDate(const Date& date) {
    // Your code here!
    // Check if the date is valid (consider leap years, month lengths, etc.)
    
    return false;
}

void testDateParser() {
    vector<string> testCases = {
        "2024-01-15",
        "1995-12-25", 
        "2000-02-29",
        "2023-06-30",
        "2024-13-01",  // Invalid month
        "2024-01-32",  // Invalid day
        "invalid",     // Invalid format
        "2024-1-15",   // Missing leading zeros
        "2024-01-15-extra" // Extra characters
    };
    
    cout << "=== Date Parsing Practice ===\n\n";
    
    for (const auto& testCase : testCases) {
        cout << "Testing: \"" << testCase << "\" → ";
        
        try {
            Date date = parseDate(testCase);
            cout << "Year: " << date.year 
                      << ", Month: " << date.month 
                      << ", Day: " << date.day;
            
            if (isValidDate(date)) {
                cout << " ✓ Valid date";
            } else {
                cout << " ✗ Invalid date";
            }
        } catch (const exception& e) {
            cout << "Error: " << e.what();
        }
        
        cout << endl;
    }
}

int main() {
    testDateParser();
    return 0;
} 