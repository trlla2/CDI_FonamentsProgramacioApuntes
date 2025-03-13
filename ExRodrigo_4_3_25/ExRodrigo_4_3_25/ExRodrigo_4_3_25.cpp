#include <iostream>

using namespace std;

struct CrewMember
{
    string name;
    string role;
    int yearsOfService;
};

void CreateCrewMember(CrewMember* member) {
    member->name = "l";
    member->role = "slut";
    member->yearsOfService = 1;
}

void PrintMember(CrewMember* member) {
    cout << member->name << ", " << member->role << ", " << member->yearsOfService << endl;
}

void UpdateCrewMember(CrewMember** member) {
    (*member)->role = "bitch";
}

CrewMember* AddCrewMember(CrewMember* arrayMembers[], int max_array) {
    CrewMember** newArrayMembers = new CrewMember * [max_array + 1];
    for (int i = 0; i < max_array; i++) {
        (*newArrayMembers)[i] = (*arrayMembers)[i];
    }

    CreateCrewMember(newArrayMembers[max_array]);

    return (*newArrayMembers);

}

int main()
{
    int MAX_ARRAY;

    cin >> MAX_ARRAY;

    CrewMember** arrayMembers = new CrewMember * [MAX_ARRAY];
    
    for (int i = 0; i < MAX_ARRAY; i++) {

        arrayMembers[i] = new CrewMember; 

        CreateCrewMember(arrayMembers[i]);

        PrintMember(arrayMembers[i]);
    }

    UpdateCrewMember(&arrayMembers[1]);
    
}

