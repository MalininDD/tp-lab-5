// Copyright 2021 MalininDmitry
#ifndef INCLUDE_DEANERY_H_
#define INCLUDE_DEANERY_H_

#include <string>
#include <vector>
#include <fstream>


class Group;
class Student;

class Deanery{
private:
    std::vector<Group*> groups;
    
public:
    Deanery(std::string filename);
    void createGroups(std::string filename);
    
    void hireStudents(std::string filename);
    
    void addMarksToAll(int mark);
    
    void getStatistics(std::string filename);
    
    void moveStudents(Student * student, Group * group);
    
    void fireStudents();
    
    void saveStaff(std::string filename_group, std::string filename_students);
    
    void initHeads();
    
    void outputToConsole();
};

#endif  // INCLUDE_DEANERY_H_

