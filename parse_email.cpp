/*
 * Email Parsing Practice Problem
 * 
 * Your task is to parse email addresses in the format "username@domain.com"
 * and extract the username and domain components.
 * 
 * Example: "user@domain.com" should extract:
 * - Username: user
 * - Domain: domain.com
 * 
 * Requirements:
 * 1. Parse the email format "username@domain"
 * 2. Extract username and domain as strings
 * 3. Handle basic validation (must have exactly one @ symbol)
 * 4. Handle invalid formats gracefully
 * 
 * Test cases:
 * - "user@domain.com" → Username: user, Domain: domain.com
 * - "john.doe@company.org" → Username: john.doe, Domain: company.org
 * - "test123@subdomain.example.co.uk" → Username: test123, Domain: subdomain.example.co.uk
 * - "invalid" → Error: Invalid email format
 * - "@domain.com" → Error: Missing username
 * - "user@" → Error: Missing domain
 * - "user@@domain.com" → Error: Multiple @ symbols
 */

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;

struct Email {
    string username;
    string domain;
    
    Email(const string& user, const string& dom) 
        : username(user), domain(dom) {}
};

// TODO: Implement this function
Email parseEmail(const string& emailStr) {
    // Your code here!
    // Parse the string "username@domain" and return an Email object
    // Throw runtime_error("Invalid email format") for invalid input
    
    throw runtime_error("Not implemented yet!");
}

void testEmailParser() {
    vector<string> testCases = {
        "user@domain.com",
        "john.doe@company.org",
        "test123@subdomain.example.co.uk",
        "simple@test",
        "user.name@domain.com",
        "invalid",           // Invalid format
        "@domain.com",       // Missing username
        "user@",             // Missing domain
        "user@@domain.com",  // Multiple @ symbols
        "user@domain@com",   // Multiple @ symbols
        "",                  // Empty string
        "justtext"           // No @ symbol
    };
    
    cout << "=== Email Parsing Practice ===\n\n";
    
    for (const auto& testCase : testCases) {
        cout << "Testing: \"" << testCase << "\" → ";
        
        try {
            Email email = parseEmail(testCase);
            cout << "Username: " << email.username 
                      << ", Domain: " << email.domain;
        } catch (const exception& e) {
            cout << "Error: " << e.what();
        }
        
        cout << endl;
    }
}

int main() {
    testEmailParser();
    return 0;
} 