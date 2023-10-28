#include <stdio.h>
#include <string.h>

// Define the structure for a record
struct Record {
    char student_name[50];
    int score;
};

// Function to search records by student name
void searchRecordsByName(struct Record records[], int numRecords, const char* targetName) {
    int i;
	for (i = 0; i < numRecords; i++) {
        if (strcmp(records[i].student_name, targetName) == 0) {
            // Found a matching record
            printf("Student Name: %s, Score: %d\n", records[i].student_name, records[i].score);
        }
    }
}

int main() {
    // Sample array of records
    struct Record records[] = {
        {"enes", 90},
        {"abdullah", 85},
        {"merve", 88},
        {"mehmet", 92}
    };

    int numRecords = sizeof(records) / sizeof(records[0]);

    // Search for records by student name
    const char* targetName = "enes";
    searchRecordsByName(records, numRecords, targetName);

    return 0;
}

