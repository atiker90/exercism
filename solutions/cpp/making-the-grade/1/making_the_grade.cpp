#include <array>
#include <string>
#include <vector>
#include <cmath>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded;
    size_t i =0;
    while (i < student_scores.size()){
        rounded.emplace_back(static_cast<int>(student_scores[i]));
        i++;
    }
    return rounded;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    size_t failed =0;
    size_t i =0;
    while (i < student_scores.size()){
        if(student_scores[i]<=40) failed++;
        i++;
    }
    return failed;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> grades;
    int diff = (highest_score - 40)/4;
    for (int i=0; i<4; i++){
        grades[i]=((40+diff*(i+1))-(diff-1));
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> names_and_scores; 
    size_t i =0;
    while (i < student_scores.size()){
        names_and_scores.emplace_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
        i++;
    }
    return names_and_scores;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string name_perfect = "";
    size_t i =0;
    while (i<student_scores.size()){
        if(student_scores[i] == 100){
            name_perfect=student_names[i];
            break;
        }
        i++;
    }
    return name_perfect;
}
