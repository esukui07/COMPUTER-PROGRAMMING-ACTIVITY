#include <iostream>
#include <cmath>
using namespace std;

int main(){

cout << "********************GRADE SUMMARY COMPUTATION********************" << '\n';

    //VARIABLE DECLARATIONS
    double quizScore, labScore, projectScore, examScore;
    double weightedQuiz, weightedLab, weightedProj, weightedExam, weightedGrade;
    const double quizPercent = 0.20, labPercent = 0.25, projectPercent = 0.25, examPercent = 0.30; 

    //INPUTS
    cout << "Please enter your scores for the following: " << '\n'
         << "Quiz: ";
    cin >> quizScore;
    cout << "Lab: ";
    cin >> labScore;
    cout << "Project: ";
    cin >> projectScore;
    cout << "Exam: ";
    cin >> examScore;
    
    //COMPUTATION
    weightedQuiz = quizScore * quizPercent;
    weightedLab = labScore * labPercent;
    weightedProj = projectScore * projectPercent;
    weightedExam = examScore * examPercent;
    weightedGrade = weightedQuiz + weightedLab + weightedProj + weightedExam;

    //OUTPUT
    int finalGrade = static_cast<int>(weightedGrade);
    cout << '\n'
         << "The weighted grade is (round): " << round(weightedGrade) << '\n' 
         << "The weighted grade is (int): " << finalGrade << '\n';

    cout << "*****************************************************************";

    return 0;
}