#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    //flags control turning on and off parts of the loop
    bool askHintFlag = true;
    bool giveHint = true;

    int matches = 9;
    int wins = 0;
    int losses = 0;

    do {

        //ask user when they would like hints
        //equ of asking if the computer should go first

        while(askHintFlag) {
            string selection;
            cout<<"Would you like your hint starting the first or second turn? (F/S): ";
            cin>>selection;

            char selec = selection[0];

            //check to see if the input is what we wanted
            if(selection.length() != 1 || (selec != 'F'
                                           && selec != 'f' && selec != 'S' && selec != 's')) {
                cout<<"Please, answer F or S."<<endl;
                continue;
            }

            if(selec == 's' || selec == 'S') {
                giveHint = false;
            }

            askHintFlag = false;
            break;
        }

        cout<<endl;

        //generate the computer's move
        int compMove = (rand() % 3) + 1;
        //1 is rock
        //2 is scissors
        //3 is paper

        //if we are supposed to give the hint, give it
        if(giveHint) {
            if(compMove == 1) {
                if(rand() % 2) {
                    cout<<"Computer did not pick scissors."<<endl;
                }
                else {
                    cout<<"Computer did not pick paper."<<endl;
                }
            }
            if(compMove == 2) {
                if(rand() % 2) {
                    cout<<"Computer did not pick rock."<<endl;
                }
                else {
                    cout<<"Computer did not pick paper."<<endl;
                }
            }
            if(compMove == 3) {
                if(rand() % 2) {
                    cout<<"Computer did not pick scissors."<<endl;
                }
                else {
                    cout<<"Computer did not pick rock."<<endl;
                }
            }
        }

        //every turn after the first one ALWAYS gets a hint
        //the important part to conceptualize is that Hint/Turn alternates
        //based on which one goes first

        //eg hint/turn/hint/turn
        //vs turn/hint/turn/hint

        //this concept can be extended to who goes first in a two player game
        giveHint = true;

        // print matches yet to be taken in groups of three

        for(int i = 1; i <= matches; i++) {
            cout<<"@";
            if(i % 3 == 0)
                cout<<" ";
        }
        cout<<endl;

        //print out taken matches in groups of three

        for(int i = 1; i <= losses + wins; i++) {
            if(i <= losses)
                cout<<"&";
            else
                cout<<"^";
            if(i % 3 == 0)
                cout<<" ";
        }
        cout<<endl;

        //check to see if anyone has won
        if(matches == 0) {
            if(losses > wins)
                cout<<"You lost!"<<endl;
            else
                cout<<"You win!"<<endl;

            //Ask user if they would like to go again
            while(true) {
                string selection;
                cout<<"Would you like to go again? (Y/N): ";
                cin>>selection;

                char selec = selection[0];

                if(selection.length() != 1 || (selec != 'Y'
                                               && selec != 'y' && selec != 'N' && selec != 'n')) {
                    cout<<"Please, answer Y or N."<<endl;
                    continue;
                }

                if(selec == 'N' || selec == 'n')
                    return 0;
                break;
            }

            //get the variables back in order to start a new game
            matches = 9;
            losses = 0;
            wins = 0;
            askHintFlag = true;
            continue;
        }

        int move = 0;

        //get the user's desired move
        do {
            cout<<"1 - Rock\n"
                <<"2 - Scissors\n"
                <<"3 - Paper\n";
            cout<<"Enter your move squishy human: ";
            cin>>move;

            if(cin.fail()) {
                //we only clear and ignore when theres been an error
                cin.clear();
                cin.ignore(100,'\n');
                cout<<"Please, type 1, 2, or 3 as your response."<<endl;
                continue;
            }

            if(move < 1 || move > 3) {
                cout<<"Please, type 1, 2, or 3 as your response."<<endl;
                continue;
            }

            break;
        } while(true);

        //calculate who won and adjust accordingly.
        if(compMove == 1) {
            switch (move)
            {
            case 1:
                cout<<"Draw! Try again!"<<endl;
                continue;
            case 2:
                cout<<"Computer picked rock, you loose!"<<endl;
                losses++;
                break;
            case 3:
                cout<<"Computer picked rock, you win!"<<endl;
                wins++;
                break;
            }
        }
        else if (compMove == 2) {
            switch (move)
            {
            case 1:
                cout<<"Computer picked scissors, you win!"<<endl;
                wins++;
                break;
            case 2:
                cout<<"Draw! Try again!"<<endl;
                continue;
            case 3:
                cout<<"Computer picked scissors, you loose!"<<endl;
                losses++;
                break;
            }
        }
        else {
            switch (move)
            {
            case 1:
                cout<<"Computer picked paper, you loose!"<<endl;
                losses++;
                break;
            case 2:
                cout<<"Computer picked paper, you win!"<<endl;
                wins++;
                break;
            case 3:
                cout<<"Draw! Try again!"<<endl;
                continue;
            }
        }

        //we got through the whole turn without having to start over due to a draw, subtrack 1.
        matches--;

    } while(true);
}