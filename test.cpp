#include <bits/stdc++.h>

using namespace std;

void game_display_board(char arr[3][3])
{
    cout << "";
    printf("%c | %c | %c\n", arr[0][0], arr[0][1], arr[0][2]);
    printf("--+---+--\n");
    printf("%c | %c | %c\n", arr[1][0], arr[1][1], arr[1][2]);
    printf("--+---+--\n");
    printf("%c | %c | %c\n", arr[2][0], arr[2][1], arr[2][2]);
}

void winner_check(char arr[3][3])
{

    //--------------------------------------------------------
    // Diagonal Winner check
    if (arr[0][0] == arr[1][1] == arr[2][2])
    {
    }
    else if (arr[0][2] == arr[1][1] == arr[2][0])
    {
    }

    //---------------------------------------------------------
    // Horizontal Winner check
    else if (arr[0][0] == arr[0][1] == arr[0][2])
    {
    }
    else if (arr[1][0] == arr[1][1] == arr[1][2])
    {
    }
    else if (arr[2][0] == arr[2][1] == arr[2][2])
    {
    }

    //----------------------------------------------------------
    // Vertical Winner check
    else if (arr[0][0] == arr[1][0] == arr[2][0])
    {
    }
    else if (arr[0][1] == arr[1][1] == arr[2][1])
    {
    }
    else if (arr[0][2] == arr[1][2] == arr[2][2])
    {
    }

    //------------------------------------------------------------
    // No winner check
    else
    {
    }
}

void position_choice(char arr[3][3])
{
    for (int player_turn = 0; player_turn < 9; player_turn++)
    {
        int player1, player2;

        if (player_turn % 2 == 0)
        {
            char choice;
            cout << "Player 1 turn!\n";
            cout << "Enter your choice (1-9): ";
            cin >> choice;

            switch (choice)
            {
            case '1':
                if (arr[0][0] == 'x')
                    cout << "Already exist\n";

                else
                {

                    arr[0][0] = 'x';
                    game_display_board(arr);
                }
                break;

            case '2':
                if (arr[0][1] == 'x')
                    cout << "Already exist\n";

                else
                {

                    arr[0][1] = 'x';
                    game_display_board(arr);
                }
                break;

            case '3':
                if (arr[0][2] == 'x')
                    cout << "Already exist\n";

                else
                {

                    arr[0][2] = 'x';
                    game_display_board(arr);
                }
                break;

            //-----------------------------------------------------------------
            case '4':
                if (arr[1][0] == 'x')
                    cout << "Already exist\n";

                else
                {

                    arr[1][0] = 'x';
                    game_display_board(arr);
                }
                break;

            case '5':
                if (arr[1][1] == 'x')
                    cout << "Already exist\n";

                else
                {

                    arr[1][1] = 'x';
                    game_display_board(arr);
                }
                break;

            case '6':
                if (arr[1][2] == 'x')
                    cout << "Already exist\n";

                else
                {

                    arr[1][2] = 'x';
                    game_display_board(arr);
                }
                break;

            //-----------------------------------------------------------------------------
            case '7':
                if (arr[2][0] == 'x')
                    cout << "Already exist\n";

                else
                {

                    arr[2][0] = 'x';
                    game_display_board(arr);
                }
                break;

            case '8':
                if (arr[2][1] == 'x')
                    cout << "Already exist\n";

                else
                {

                    arr[2][1] = 'x';
                    game_display_board(arr);
                }
                break;

            case '9':
                if (arr[2][2] == 'x')
                    cout << "Already exist\n";

                else
                {

                    arr[2][2] = 'x';
                    game_display_board(arr);
                }
                break;
            //-------------------------------------------------------------------------
            default:
                cout << "sorry";
                break;
            }
        }

        else
        {
            char choice;
            cout<<"Player 2 turn!\n";
            cout << "Enter your choice (1-9): ";
            cin >> choice;

            switch (choice)
            {
            case '1':
                if (arr[0][0] == 'O')
                    cout << "Already exist\n";

                else
                {

                    arr[0][0] = 'O';
                    game_display_board(arr);
                }
                break;

            case '2':
                if (arr[0][1] == 'O')
                    cout << "Already exist\n";

                else
                {

                    arr[0][1] = 'O';
                    game_display_board(arr);
                }
                break;

            case '3':
                if (arr[0][2] == 'O')
                    cout << "Already exist\n";

                else
                {

                    arr[0][2] = 'O';
                    game_display_board(arr);
                }
                break;

            //-----------------------------------------------------------------
            case '4':
                if (arr[1][0] == 'O')
                    cout << "Already exist\n";

                else
                {

                    arr[1][0] = 'O';
                    game_display_board(arr);
                }
                break;

            case '5':
                if (arr[1][1] == 'O')
                    cout << "Already exist\n";

                else
                {

                    arr[1][1] = 'O';
                    game_display_board(arr);
                }
                break;

            case '6':
                if (arr[1][2] == 'O')
                    cout << "Already exist\n";

                else
                {

                    arr[1][2] = 'O';
                    game_display_board(arr);
                }
                break;

            //-----------------------------------------------------------------------------
            case '7':
                if (arr[2][0] == 'O')
                    cout << "Already exist\n";

                else
                {

                    arr[2][0] = 'O';
                    game_display_board(arr);
                }
                break;

            case '8':
                if (arr[2][1] == 'O')
                    cout << "Already exist\n";

                else
                {

                    arr[2][1] = 'O';
                    game_display_board(arr);
                }
                break;

            case '9':
                if (arr[2][2] == 'O')
                    cout << "Already exist\n";

                else
                {

                    arr[2][2] = 'O';
                    game_display_board(arr);
                }
                break;
            //-------------------------------------------------------------------------
            default:
                cout << "sorry";
                break;
            }
        }
    }
}

void insertion()
{
    char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    // cout << "Enter the elements in the board: \n";

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    game_display_board(arr);
    position_choice(arr);
}

int main()
{

    insertion();

    return 0;
}