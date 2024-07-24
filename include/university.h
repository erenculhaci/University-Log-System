#include "Student.h"

class University {

    public:
    University(std::string = "", double = 3.1, double = -0.1, double = 1.0, double = 1.6, std::string ="");

    std::string get_name() const;

    double get_gpa_weight() const;

    double get_gre_weight() const;

    double get_toefl_weight() const;

    double get_bias() const;

    void const evaluate_student(const Student&);

    private:
    std::string name, country;
    double gpa_weight, gre_weight, toefl_weight, bias;
};