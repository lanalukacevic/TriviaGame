#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class Trivia {
    private: 
        string question, answer;
        int worth;
    public:
        //default constructor 
        Trivia(){}
        // regular constructor  
        Trivia(string question, string answer, int worth)
        {
            this ->  question = question;
            this -> answer = answer;
            this -> worth = worth;
        }
        //Get functions (accessor functions) 
        string getQuestion() const
        {
            return question;
        }
        string getAnswer() const
        {
            return answer;
        }
        int getWorth() const
        {
            return worth;
        }
        //Set functions (mutator functions)
        void setQuestion(string question)
        {
            this -> question = question;
        }
        void setAnswer (string answer)
        {
            this -> answer = answer;
        }
        void setWorth (int worth){
            this -> worth = worth;
        }
};

int main ()
{
    //decalres a string for the  user's answer and an integer for the amount of money, which is initialized to 0
    string answer;
    int money = 0;

    //creates an array of data type Trivia 
    Trivia game[5];
    //creates a pointer with the data type Trivia
    Trivia *p;

    p = new Trivia("What is the capital of New York? ", "Albany", 25);
    //points to game[0] 
    game[0] = *p;

    p = new Trivia("Who is the 5th president of the United States? ", "James Monroe", 50);
    //points to game[1] 
    game[1] = *p;

    p = new Trivia("Where is the next Olympics being held? ", "Paris", 60);
    //points to game[2] 
    game[2] = *p;

    p = new Trivia("Which president is on the $2 bill? ", "Thomas Jefferson", 70);
    //points to game[3] 
    game[3] = *p;

    p = new Trivia("Who was the first woman to fly solo across the Atlantic Ocean? ", "Amelia Earhart", 80);
    //points to game[4] 
    game[4] = *p;

    //For loop to run through each question and get user's answer
    for (int i = 0; i < 5; i++){
        cout << "Question " << (i +1) << ": " << game[i].getQuestion();
        getline(cin, answer);
        //checks if the answer stored in the game array at that index matches the user's answer. If it does, it prints Correct 
        if(game[i].getAnswer() == answer){
            cout << "Correct! ";
            //adds the amount of money this question was worth to the user's money 
            money += game[i].getWorth();
        }
        //runs if user's answer does not match the correct answer and it prints the correct answer
        else 
        {
            cout << "You are incorrect. The correct answer is: "<< game[i].getAnswer() << endl;
        }
    }
    cout << "The total amount of money you have won is: $" << money << endl;
    return 0;
}

