#include "Student.h"

Student::Student(std::string n, double gpa_new, int gre_new, int toefl_new, int num0fApp){
    name = n; 
    gpa = gpa_new; 
    gre = gre_new; 
    toefl = toefl_new; 
    num_of_applications = num0fApp;
    std::cout << name << " logged in to the system." << std::endl;
};
    Student::Student(const Student& old){
        name = old.get_name();
        gpa = old.get_gpa();
        gre = old.get_gre();
        toefl = old.get_toefl();
        num_of_applications = old.get_num_of_applications();
        std::cout << name << " logged in to the system." << std::endl;
    };

    
    void Student::set_name(std::string nameNew){
        name = nameNew;
    };
    
    std::string Student::get_name() const{
        return name;
    };

    double Student::get_gpa() const {
        return gpa;
    };

    int Student::get_gre() const {
        return gre;
    };

    int Student::get_toefl() const {
        return toefl;
    };

    void Student::set_num_of_applications(int numNew) const{
        num_of_applications = numNew;
    };

    int Student::get_num_of_applications() const {
        return num_of_applications;
    };

    Student::~Student(){
        std::cout << get_name() << " logged out of the system with " << get_num_of_applications() <<" application(s)." << std::endl;
    };