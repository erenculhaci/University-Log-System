    #include "university.h"
    
    University::University(std::string nm, double gpa_w, double gre_w, double toefl_w, double biass, std::string cntry){
        name = nm;
        gpa_weight = gpa_w;
        gre_weight = gre_w;
        toefl_weight = toefl_w;
        bias = biass;
        country = cntry;
    };

    std::string University::get_name() const{
        return name;
    };

    double University::get_gpa_weight() const{
        return gpa_weight;
    };

    double University::get_gre_weight() const{
        return gre_weight;
    };

    double University::get_toefl_weight() const{
        return toefl_weight;
    };

    double University::get_bias() const{
        return bias;
    };

    void const University::evaluate_student(const Student& student){

        student.set_num_of_applications(student.get_num_of_applications()+1);

        double z;
        z = (student.get_gpa()*(this->get_gpa_weight()))+(student.get_gre()*(this->get_gre_weight()))+(student.get_toefl()*(this->get_toefl_weight())) + this->get_bias();

        if(z>=0){
            std::cout << student.get_name() << " is admitted to " << this->get_name() << "." << std::endl;
        }
        else {
            std::cout << student.get_name() << " is rejected from " << this->get_name() << "." << std::endl;
        }
    };