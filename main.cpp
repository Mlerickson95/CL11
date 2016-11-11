#include "Question.h"
#include <iostream>
using namespace std;

int main()
{
	int score = 0;
	int totalScore = 3;

	FillInTheBlankQuestion question1;
	question1.SetQuestion("2 + 2 = ");
	question1.SetAnswer("4");

	TrueFalseQuestion question2;
	question2.SetQuestion("5 + 5 = 10");
	question2.SetAnswer(true);

	MultipleChoiceQuestion question3;
	question3.SetQuestion("5 x 10 = ");
	string answers[4] = { "15", "25", "50", "5" };
	question3.SetAnswers(answers, 2);

	if (question1.AskQuestion())
	{
		score++;
	}
	
	if (question2.AskQuestion())
	{
		score++;
	}
	
	if (question3.AskQuestion())
	{
		score++;
	}

	cout << "Final Score: " << score << "/" << totalScore;

	return 0;
}
