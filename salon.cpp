#include <iostream>

// I am not witting "using namespace std;" because it is a bad practice

int main()
{
    int N, price_of_cut;
    int basic_cut = 0, style_cut = 0, total_rev = 0; // initialing to get rid of garbage value

    // First I am getting the number of clients which is N
    std::cout << "**********************Number of clients**********************" << std::endl << std::endl;
    std::cout << "Enter Number of clients (N) : ";
    std::cin >> N;
    std::cout << std::endl;
    std::cout << "*************************************************************" << std::endl << std::endl;

    // loop will run N times
    for (int i = 0; i < N; i++)
    {

        // getting the price
        std::cout << "**********************Price of HairCut**********************" << std::endl << std::endl;
        std::cout << "Enter the Price of Haircut : ";
        std::cin >> price_of_cut;
        std::cout << std::endl;
        std::cout << "************************************************************" << std::endl << std::endl;

        // checking the price using if/else
        if (price_of_cut < 400)
        {

            std::cout << "Its a Basic HairCut" << std::endl;

            basic_cut++;
        }

        else
        {

            std::cout << "Its a Styled HairCut" << std::endl;

            style_cut++;
        }

        total_rev += price_of_cut;
    }

    // Displaying the details
    std::cout << "**********************Detail**********************\n";
    std::cout << "Total No of Basic Cut = " << basic_cut << std::endl;

    std::cout << "Total No of Styled Cut = " << style_cut << std::endl;

    std::cout << "Total Revenue = " << total_rev << std::endl;
    std::cout << "***************************************************\n";

    return 0;
}