#include <iostream>

// Defining the Class[span_1](start_span)[span_1](end_span)
class Student {
private:
    // Private Data: Can only be modified by the class's methods[span_2](start_span)[span_2](end_span)
    int studentID; 
    float gpa;

public:
    // Constructor: A public method to initialize the object[span_3](start_span)[span_3](end_span)
    Student(int id, float initial_gpa) {
        studentID = id;
        // Enforce data integrity (GPA must be valid)[span_4](start_span)[span_4](end_span)
        if (initial_gpa >= 0.0 && initial_gpa <= 4.0) {
            gpa = initial_gpa;
        } else {
            gpa = 0.0; // Default or error value[span_5](start_span)[span_5](end_span)
        }
    }

    // Public Method: The controlled interface to access private data[span_6](start_span)[span_6](end_span)
    float getGPA() const {
        return gpa;
    }

    // Public Method: The controlled interface to modify private data[span_7](start_span)[span_7](end_span)
    void updateGPA(float new_grade) {
        // We can add logic here before updating (e.g., logging)[span_8](start_span)[span_8](end_span)
        gpa = new_grade;
    }
};

int main() {
    // --- In main function ---[span_9](start_span)[span_9](end_span)
    Student alice(1001, 3.75);[span_10](start_span)[span_10](end_span)

    // Error: Cannot directly access private data (Encapsulation enforced)[span_11](start_span)[span_11](end_span)
    // alice.gpa = 5.0; // COMPILE ERROR[span_12](start_span)[span_12](end_span)!

    // Correct: Must use the public interface (methods)[span_13](start_span)[span_13](end_span)
    std::cout << "Alice's GPA: " << alice.getGPA() << std::endl; // Output: 3.75[span_14](start_span)[span_14](end_span)

    alice.updateGPA(3.9);[span_15](start_span)[span_15](end_span)
    std::cout << "New GPA: " << alice.getGPA() << std::endl;     // Output: 3.9[span_16](start_span)[span_16](end_span)

    return 0;
}