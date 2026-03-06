#include <iostream>
#include <windows.h>
using namespace std;

enum enQuestionLevel { Easy = 1, Med = 2, Hard = 3, Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, mix = 5 };

struct stQuestionInfo {
    short Number1 = 0;
    short Number2 = 0;
    int QuestionLevel=0;
    enQuestionLevel enLevl;
    int OPType=0;
    enOperationType enOP;
};

struct stFinalResult {
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    int CorrectScore = 0;
    int WrongScore = 0;
};



int ReadNumber(string message) {
    int Number;
    do {
        cout << message;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int GenerateRandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

enOperationType GenerateRandomOperation() {
    return (enOperationType)GenerateRandomNumber(1, 4);
}

enQuestionLevel GenerateRandomLevel() {
    return (enQuestionLevel)GenerateRandomNumber(1, 3);
}



enOperationType GetOperationType(stQuestionInfo &Info) {
    switch (Info.OPType) {
    case 1: return Info.enOP = Add;
    case 2: return Info.enOP = Sub;
    case 3: return Info.enOP = Mul;
    case 4: return Info.enOP = Div;
    case 5: return Info.enOP = GenerateRandomOperation();
    default: return Info.enOP = Add;
    }
}

enQuestionLevel GetQuestionLevel(stQuestionInfo &Info) {
    switch (Info.QuestionLevel) {
    case 1: return Info.enLevl = Easy;
    case 2: return Info.enLevl = Med;
    case 3: return Info.enLevl = Hard;
    case 4: return Info.enLevl = GenerateRandomLevel();
    default: return Info.enLevl = Easy;
    }
}



string StrOperationType(enOperationType OPType) {
    string ops[4] = { "+","-","*","/" };
    return ops[OPType - 1];
}

void GenerateQuestion(stQuestionInfo &Info) {

    switch (Info.enLevl) {
    case Easy:
        Info.Number1 = GenerateRandomNumber(1, 10);
        Info.Number2 = GenerateRandomNumber(1, 10);
        break;
    case Med:
        Info.Number1 = GenerateRandomNumber(10, 50);
        Info.Number2 = GenerateRandomNumber(10, 50);
        break;
    case Hard:
        Info.Number1 = GenerateRandomNumber(50, 100);
        Info.Number2 = GenerateRandomNumber(50, 100);
        break;
    }

    cout << "\n" << Info.Number1 << endl;
    cout << StrOperationType(Info.enOP) << endl;
    cout << Info.Number2 << endl;
    cout << "-------------\n";
}

int CalcAnswer(stQuestionInfo Info) {
    switch (Info.enOP) {
    case Add: return Info.Number1 + Info.Number2;
    case Sub: return Info.Number1 - Info.Number2;
    case Mul: return Info.Number1 * Info.Number2;
    case Div: return Info.Number1 / Info.Number2;
    default: return 0;
    }
}

bool CheckAnswer(int CorrectAnswer, int PlayerAnswer) {
    if (PlayerAnswer == CorrectAnswer) {
        system("color 20");
        cout << "Correct Answer!\n";
        return true;
    }
    else {
        system("color 40");
        cout << "Wrong Answer! The correct answer is: " << CorrectAnswer << endl;
        return false;
    }
}


void PrintFinalResult(stFinalResult result, int TotalRounds) {
    
    cout << "\n----------------------------------\n";
    cout << " Final Results\n";
    cout << "----------------------------------\n";
    cout << "Total Questions : " << TotalRounds << endl;
    cout << "Correct Answers : " << result.CorrectScore << endl;
    cout << "Wrong Answers   : " << result.WrongScore << endl;
    cout << "----------------------------------\n";

    if (result.CorrectScore > result.WrongScore)
    {
        cout << "You Won! Great Job!\n";
        Sleep(800);
        system("color 20");
    }
    else
    {
        cout << "You Lost! Try Again Next Time.\n";
        Sleep(800);
        system("color 40");
    }
    cout << "----------------------------------\n";
}

void ResetScreen() {
    system("color 07");
    system("cls");
}

void Calcscore(stFinalResult &Result) {
    if (CheckAnswer(Result.CorrectAnswer, Result.PlayerAnswer))
        Result.CorrectScore++;
    else
        Result.WrongScore++;
}

void GameLogic() {
    stFinalResult Result;
    stQuestionInfo Info;
    int Rounds = ReadNumber("How many Questions do you want? ");
    Info.QuestionLevel = ReadNumber("Choose Level [1]Easy [2]Med [3]Hard [4]Mix: ");
    Info.OPType = ReadNumber("Choose Operation [1]Add [2]Sub [3]Mul [4]Div [5]Mix: ");

    for (int i = 1; i <= Rounds; i++) {
        cout << "\n[ Q " << i << " / " << Rounds << " ]\n";
        GetQuestionLevel(Info);
        GetOperationType(Info);
        GenerateQuestion(Info);

        Result.PlayerAnswer = ReadNumber("Your answer: ");
        Result.CorrectAnswer = CalcAnswer(Info);

        Calcscore(Result);
    }

    PrintFinalResult(Result, Rounds);
}

void PlayGame() {
    bool PlayAgain = true;

    do {
        ResetScreen();
        GameLogic();

        cout << "\nDo you want to play again? (1 = Yes, 0 = No): ";
        cin >> PlayAgain;

    } while (PlayAgain);
}



int main() {
    srand((unsigned)time(NULL));
    PlayGame();
    return 0;
}
