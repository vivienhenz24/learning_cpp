/*
 * Phone Number Parsing Practice Problem
 * 
 * Your task is to parse phone numbers in the format "XXX-XXX-XXXX"
 * and extract the area code, prefix, and line number components.
 * 
 * Example: "123-456-7890" should extract:
 * - Area Code: 123
 * - Prefix: 456
 * - Line Number: 7890
 * 
 * Requirements:
 * 1. Parse the phone format "XXX-XXX-XXXX"
 * 2. Extract area code, prefix, and line number as integers
 * 3. Validate that all parts are 3-3-4 digits
 * 4. Handle invalid formats gracefully
 * 
 * Test cases:
 * - "123-456-7890" → Area Code: 123, Prefix: 456, Line: 7890
 * - "555-123-4567" → Area Code: 555, Prefix: 123, Line: 4567
 * - "800-555-1212" → Area Code: 800, Prefix: 555, Line: 1212
 * - "invalid" → Error: Invalid phone format
 * - "123-45-6789" → Error: Invalid format (wrong digit counts)
 * - "123-456-789" → Error: Invalid format (wrong digit counts)
 * - "1234567890" → Error: Missing hyphens
 */

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;

struct PhoneNumber {
    int areaCode;
    int prefix;
    int lineNumber;
    
    PhoneNumber(int area, int pref, int line) 
        : areaCode(area), prefix(pref), lineNumber(line) {}
};

// TODO: Implement this function
PhoneNumber parsePhoneNumber(const string& phoneStr) {
    // Your code here!
    // Parse the string "XXX-XXX-XXXX" and return a PhoneNumber object
    // Throw runtime_error("Invalid phone format") for invalid input
    
    throw runtime_error("Not implemented yet!");
}

void testPhoneParser() {
    vector<string> testCases = {
        "123-456-7890",
        "555-123-4567",
        "800-555-1212",
        "999-888-7777",
        "invalid",        // Invalid format
        "123-45-6789",    // Wrong digit counts
        "123-456-789",    // Wrong digit counts
        "1234567890",     // Missing hyphens
        "123-456-78901",  // Too many digits
        "12-345-6789",    // Wrong digit counts
        "123-456-789a",   // Non-numeric characters
        "123--456-7890",  // Multiple hyphens
        ""                // Empty string
    };
    
    cout << "=== Phone Number Parsing Practice ===\n\n";
    
    for (const auto& testCase : testCases) {
        cout << "Testing: \"" << testCase << "\" → ";
        
        try {
            PhoneNumber phone = parsePhoneNumber(testCase);
            cout << "Area Code: " << phone.areaCode 
                      << ", Prefix: " << phone.prefix 
                      << ", Line: " << phone.lineNumber;
        } catch (const exception& e) {
            cout << "Error: " << e.what();
        }
        
        cout << endl;
    }
}

int main() {
    testPhoneParser();
    return 0;
} 