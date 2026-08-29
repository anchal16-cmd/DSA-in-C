#include <stdio.h>

struct Address {
    char city[30];
    int pinCode;
};

struct Student {
    int rollNo;
    char name[50];
    struct Address address;
};

int main() {
    struct Student s1 = {
        101,
        "Aryan",
        {"Dehradun", 248001}
    };

    printf("Roll No: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("City: %s\n", s1.address.city);
    printf("PIN Code: %d\n", s1.address.pinCode);

    return 0;
}