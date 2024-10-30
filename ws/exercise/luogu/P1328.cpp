#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    const char scissor='0',rock='1',paper='2',lizard='3',spock='4';
    int round;
    int cycleA, cycleB;
    int numVectoryA=0, numVectoryB=0;
    string attachA, attachB;
    cin >> round >> cycleA >> cycleB;
    cin.ignore();
    getline(cin,attachA);
    getline(cin,attachB);
    attachA.erase(remove(attachA.begin(),attachA.end(),' '),attachA.end());
    attachB.erase(remove(attachB.begin(),attachB.end(),' '),attachB.end());
    for(int i=0;i<round;i++)
    {
        // cout << i%cycleA << ' ' << i%cycleB << endl;
        switch(attachA[i%cycleA])
        {
            case scissor:
                switch(attachB[i%cycleB])
                {
                    case scissor:
                        break;
                    case rock:
                    case spock:
                        numVectoryB++;
                        break;
                    case paper:
                    case lizard:
                        numVectoryA++;
                }
                break;
            case rock:
                switch(attachB[i%cycleB])
                {
                    case rock:
                        break;
                    case scissor:
                    case lizard:
                        numVectoryA++;
                        break;
                    case spock:
                    case paper:
                        numVectoryB++;
                }
                break;
            case paper:
                switch(attachB[i%cycleB])
                {
                    case paper:
                        break;
                    case scissor:    
                    case lizard:
                        numVectoryB++;
                        break;
                    case spock:
                    case rock:
                        numVectoryA++;
                }
                break;
            case lizard:
                switch(attachB[i%cycleB])
                {
                    case lizard:
                        break;
                    case scissor:
                    case rock:
                        numVectoryB++;
                        break;
                    case paper:
                    case spock:
                        numVectoryA++;
                }
                break;
            case spock:
                switch(attachB[i%cycleB])
                {
                    case spock:
                        break;
                    case scissor:
                    case rock:
                        numVectoryA++;
                        break;
                    case paper:
                    case lizard:
                        numVectoryB++;
                }
        }

    }
    cout << numVectoryA << ' ' << numVectoryB;
    return 0;
}