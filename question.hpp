#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <iostream>
using namespace std;

//class Question
//{
//private:
//	string m_question;
	//string m_answer;

//public:
	//void SetQuestion(const string& question, const string& answer);
	//bool AskQuestion();
//};

class BaseQuestion
{
public:
	void SetQuestion(const string& question);
protected:
	string m_question;
};

class TrueFalseQuestion : public BaseQuestion
{
public:
	void SetAnswer(bool isTrue);
	bool AskQuestion();
protected:
	bool m_isTrue;
};

class MultipleChoiceQuestion : public BaseQuestion
{
public:
	void SetAnswers(const string answers[], int correctIndex);
	bool AskQuestion();
protected:
	string m_answers[4];
	int m_correctIndex;
};

class FillInTheBlankQuestion : public BaseQuestion
{
public:
	void SetAnswer(const string& answer);
	bool AskQuestion();
protected:
	string m_answer;
};
