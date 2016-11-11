#include "Question.h"

void BaseQuestion::SetQuestion(const string& question)
{
	m_question = question;
}

void TrueFalseQuestion::SetAnswer(bool isTrue)
{
	m_isTrue = isTrue;
}

bool TrueFalseQuestion::AskQuestion()
{
	cout << "\nQUESTION: " << endl;
	cout << m_question << endl << endl;
	cout << "ANSWER: (1) True (2) False " << endl;
	cout << "Choice: ";

	int choice;
	cin >> choice;

	return(m_isTrue && choice == 1);
}

void MultipleChoiceQuestion::SetAnswers(const string answers[], int correctIndex)
{
	m_correctIndex = correctIndex;
	for (int i = 0; i < 4; i++)
	{
		m_answers[i] = answers[i];
	}
}

bool MultipleChoiceQuestion::AskQuestion()
{
	cout << "\nQUESTION: " << endl;
	cout << m_question << endl << endl;
	cout << "ANSWERS: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << "  " << m_answers[i] << endl;
	}
	cout << "Choice: ";

	int choice;
	cin >> choice;
	choice--;

	if (choice == m_correctIndex)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void FillInTheBlankQuestion::SetAnswer(const string& answer)
{
	m_answer = answer;
}

bool FillInTheBlankQuestion::AskQuestion()
{
	cout << "\nQUESTION: " << endl;
	cout << m_question << endl << endl;
	cout << "What is your answer? ";

	string answer;
	cin >> answer;

	if (answer == m_answer)
	{
		return true;
	}
	else
	{
		return false;
	}
}
