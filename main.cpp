#include <bits/stdc++.h>

using namespace std;

void game_display_board(char arr[3][3])
{
    cout << "                                          Player 1 = X" << endl;
    cout << "                                          Player 2 = O" << endl;
    cout << "\n";
    printf("                        %c | %c | %c\n", arr[0][0], arr[0][1], arr[0][2]);
    printf("                        --+---+--\n");
    printf("                        %c | %c | %c\n", arr[1][0], arr[1][1], arr[1][2]);
    printf("                        --+---+--\n");
    printf("                        %c | %c | %c\n", arr[2][0], arr[2][1], arr[2][2]);
}

void winner_check(char arr[3][3], int *ptr)
{

    //--------------------------------------------------------
    // Diagonal Winner check
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
    {
        if (*ptr % 2 == 0)
            cout << "\n                  [ Player 1 is Winner ]" << endl
                 << endl;
        else
            cout << "\n                  [ Player 2 is Winner ]" << endl
                 << endl;
        *ptr = 9;
    }
    else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
    {
        if (*ptr % 2 == 0)
            cout << "\n                  [ Player 1 is Winner ]" << endl
                 << endl;
        else
            cout << "\n                  [ Player 2 is Winner ]" << endl
                 << endl;
        ;
        *ptr = 9;
    }

    //---------------------------------------------------------
    // Horizontal Winner check
    else if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
    {
        if (*ptr % 2 == 0)
            cout << "\n                  [ Player 1 is Winner ]" << endl
                 << endl;
        else
            cout << "\n                  [ Player 2 is Winner ]" << endl
                 << endl;
        ;
        *ptr = 9;
    }
    else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
    {
        if (*ptr % 2 == 0)
            cout << "\n                  [ Player 1 is Winner ]" << endl
                 << endl;
        else
            cout << "\n                  [ Player 2 is Winner ]" << endl
                 << endl;
        ;
        *ptr = 9;
    }
    else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
    {
        if (*ptr % 2 == 0)
            cout << "\n                  [ Player 1 is Winner ]" << endl
                 << endl;
        else
            cout << "\n                  [ Player 2 is Winner ]" << endl
                 << endl;
        ;
        *ptr = 9;
    }

    //----------------------------------------------------------
    // Vertical Winner check
    else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])
    {
        if (*ptr % 2 == 0)
            cout << "\n                  [ Player 1 is Winner ]" << endl
                 << endl;
        else
            cout << "\n                  [ Player 2 is Winner ]" << endl
                 << endl;
        ;
        *ptr = 9;
    }
    else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
    {
        if (*ptr % 2 == 0)
            cout << "\n                  [ Player 1 is Winner ]" << endl
                 << endl;
        else
            cout << "\n                  [ Player 2 is Winner ]" << endl
                 << endl;
        ;
        *ptr = 9;
    }
    else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
    {
        if (*ptr % 2 == 0)
            cout << "\n                  [ Player 1 is Winner ]" << endl
                 << endl;
        else
            cout << "\n                  [ Player 2 is Winner ]" << endl
                 << endl;
        ;
        *ptr = 9;
    }

    //------------------------------------------------------------
    // No winner check
    else
    {
        cout << "\n                      [ No winner ]\n\n";
    }
}

void position_choice(char arr[3][3])
{
    for (int player_turn = 0; player_turn < 9; player_turn++)
    {
        int player1, player2;

        // Player 1 Logic
        if (player_turn % 2 == 0)
        {
            char choice;
            cout << "Player 1 turn!\n";
            cout << "Enter your choice (1-9): ";
            cin >> choice;

            switch (choice)
            {
            //-------------------------------------------------------------------
            // 1st Row
            case '1':
                if (arr[0][0] == 'X' || arr[0][0] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[0][0] = 'X';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '2':
                if (arr[0][1] == 'X' || arr[0][1] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {
                    arr[0][1] = 'X';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '3':
                if (arr[0][2] == 'X' || arr[0][2] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[0][2] = 'X';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            //-----------------------------------------------------------------
            // 2nd Row
            case '4':
                if (arr[1][0] == 'X' || arr[1][0] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[1][0] = 'X';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '5':
                if (arr[1][1] == 'X' || arr[1][1] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[1][1] = 'X';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '6':
                if (arr[1][2] == 'X' || arr[1][2] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[1][2] = 'X';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            //-----------------------------------------------------------------------------
            // 3rd Row
            case '7':
                if (arr[2][0] == 'X' || arr[2][0] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[2][0] = 'X';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '8':
                if (arr[2][1] == 'X' || arr[2][1] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[2][1] = 'X';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '9':
                if (arr[2][2] == 'X' || arr[2][2] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[2][2] = 'X';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;
            //-------------------------------------------------------------------------
            // Invalid Choice
            default:
                cout << "\n            [ ??????? Wrong Choice please choose again ??????? ]" << endl
                     << endl;
                player_turn--;
                break;
            }
        }

        // Player 2 Logic
        else
        {
            char choice;
            cout << "Player 2 turn!\n";
            cout << "Enter your choice (1-9): ";
            cin >> choice;

            switch (choice)
            {
            //----------------------------------------------------------------------------------
            // 1st Row
            case '1':
                if (arr[0][0] == 'X' || arr[0][0] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[0][0] = 'O';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '2':
                if (arr[0][1] == 'X' || arr[0][1] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[0][1] = 'O';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '3':
                if (arr[0][2] == 'X' || arr[0][2] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[0][2] = 'O';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            //-----------------------------------------------------------------
            // 2nd Row
            case '4':
                if (arr[1][0] == 'X' || arr[1][0] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[1][0] = 'O';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '5':
                if (arr[1][1] == 'X' || arr[1][1] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[1][1] = 'O';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '6':
                if (arr[1][2] == 'X' || arr[1][2] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[1][2] = 'O';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            //-----------------------------------------------------------------------------
            // 3rd Row
            case '7':
                if (arr[2][0] == 'X' || arr[2][0] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {
                    arr[2][0] = 'O';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '8':
                if (arr[2][1] == 'X' || arr[2][1] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[2][1] = 'O';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;

            case '9':
                if (arr[2][2] == 'X' || arr[2][2] == 'O')
                {
                    cout << "\n                     [ Already exist ] \n\n";
                    player_turn--;
                }

                else
                {

                    arr[2][2] = 'O';
                    game_display_board(arr);
                    winner_check(arr, &player_turn);
                    cout << "-----------------------------------------------------------------" << endl;
                }
                break;
            //-------------------------------------------------------------------------
            // Invalid Choice
            default:

                cout << "\n            [ ??????? Wrong Choice please choose again ??????? ]" << endl
                     << endl;
                player_turn--;
                break;
            }
        }
    }
}

void insertion()
{
    char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    game_display_board(arr);
    position_choice(arr);
}

int main()
{
    char playAgain;
    do
    {
        insertion();
        cout << "\n\nDO YOU WANT TO PLAY AGAIN (Y/N) : ";
        cin >> playAgain;
        cout << "\n\n-----------------------------------------------------------------\n\n";

    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}