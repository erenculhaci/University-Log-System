#include <string>
#include <iostream>

class Student{
    
public:
    
    Student(std::string = "", double = 0, int = 0, int = 0, int = 0);
    Student(const Student&);
    
    void set_name(std::string);
    std::string get_name() const;

    double get_gpa() const;
    
    int get_gre() const;

    int get_toefl() const;

    void set_num_of_applications(int) const;
    int get_num_of_applications() const;
    
    ~Student();
    
private:
    std::string name;
    double gpa;
    int gre, toefl; 
    mutable int num_of_applications;
};