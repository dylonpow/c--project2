#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>

// void happyBirthday(std::string name, int age);
// int main() {

//     std::string name = "Dawns";
//     int age = 19;
//     happyBirthday(name, age);

//     return 0;
// }

// void happyBirthday(std::string dude, int age){
//     std::cout << "Happy birthday to " << dude << "\n";
//     std::cout << "Happy birthday to " << dude << "\n";
//     std::cout << "Happy birthday to " << dude << "\n";
//     std::cout << "Your age is " << age << " years old" << "\n";
// }



// // **********************lesson 26: return keyword
//     std::string concatStrings(std::string string1, std::string string2);
//     int main() {
//         std::string firstName = "Dustin";
//         std::string lastName = "Levin";
//         std::string fullName = concatStrings(firstName, lastName);

//         std::cout << "What's been up " << fullName;
//         return 0;
//     }

//     std::string concatStrings(std::string string1, std::string string2){
//         return string1 + " " + string2;
//     }



// 27
// int myNum = 5;

// void printNum();

// int main() {
//     int myNum = 15;
//     printNum();
//     std::cout << ::myNum << '\n';
// }

// void printNum(){
//     int myNum = 4;
//     std::cout << ::myNum << '\n';
// }







// **************** /////// BANKING PRACTICE PROGRAM ///////*******************



// void showBalance(double balance);
// double deposit();
// double withdraw(double balance);

// int main() {
//     double balance = 82000;
//     int choice = 0;
//     std::cin.clear();
//     fflush(stdin);

//     do
//     {
//         std::cout << "-----------------------------\n";
//     std::cout << "Welcome to Irvin Council Bank\n";
//     std::cout << "-----------------------------\n";
//     std::cout << "\n";
//     std::cout << "Please Enter Your Choice: \n";
//     std::cout << "\n";
//     std::cout << "1.Show Balance\n";
//     std::cout << "2.Deposit Your Money\n";
//     std::cout << "3.Withdraw Your Money\n";
//     std::cout << "4.Exit\n";
//     std::cin >> choice;

//     switch (choice)
//     {
//     case 1:
//         showBalance(balance);
//         break;
    
//     case 2:
//         balance += deposit();
//         showBalance(balance);
//         break;

//     case 3:
//         balance -= withdraw(balance);
//         showBalance(balance);
//         break;

//     case 4:
//         std::cout << "Thank's for visiting.\n";
//         break;

    
//     default:
//         std::cout << "That's Invalid Choice !\n";
//         break;
//     }

//     } while (choice != 4);
    

// }

// void showBalance(double balance){
//     std::cout << "\n";
//     std::cout << "Your available Balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
//     std::cout << "\n";
// }
// double deposit(){
//     double amount = 0;

//     std::cout << "Please enter amount to be deposited: \n";
//     std::cin >> amount;

//     if (amount > 0)
//     {
//         return amount;
//     }
//     else {
//         std::cout << "That's not a valid amount to be deposited !\n";
//                 return 0;
//     }
    
// }
// double withdraw(double balance){
//     double amount = 0;


//     std::cout << "Please enter amount to be Withdrawn: \n";
//     std::cin >> amount;

//     if (amount > balance)
//     {
//         std::cout << "Insufficient !\n";
//         return 0;
//     }
//     else if (amount < 0)
//     {
//         std::cout << "That's not a valid amount to be Withdrawn !\n";
//                 return 0;
//     }
    
//     else {
//         return amount;
//     }
// }













// GAME 1

// char getUserChoice();
// char getComputerChoice();
// void showChoice(char choice);
// void chooseWinner(char player, char computer);

// int main() {
//     char player;
//     char computer;

//     player = getUserChoice();
//     std::cout << "Your Choice: ";
//     showChoice(player);

//     computer = getComputerChoice();
//     std::cout << "Computer's Choice: ";
//         showChoice(computer);


//     chooseWinner(computer, player);

//     return 0;

// }


// char getUserChoice(){
//     char player;
//     std::cout << "-------------------------\n";
//     std::cout << "Rock-Paper-Scissors Game\n";
//     std::cout << "-------------------------\n";

//     std::cout << "\n";

//     do
//     {
//           std::cout << "Choose one of the following: \n";
//     std::cout << "'r' for Rock\n";
//     std::cout << "'p' for Paper\n";
//     std::cout << "'s' for Scissors\n";
//     std::cin >> player;
//     } while (player != 'r' && player != 'p' && player != 's');

//     return player;
    
// }
// char getComputerChoice(){

//     char computer;
//     srand(time(0));
//     int num = rand() % 3 + 1;
//     switch (num)
//     {
//     case 1: return 'r';
//     case 2: return 's';
//     case 3: return 'p';
//         break;
//     }
//     return 0;
// }
// void showChoice(char choice){
//     switch (choice)
//     {
//     case 'r':
//         std::cout << "Rock\n";
//         break;
    
//       case 'p':
//         std::cout << "Paper\n";
//         break;

//           case 's':
//         std::cout << "Scissors\n";
//         break;
   
//     }
// }
// void chooseWinner(char computer, char player){

//     switch (player)
//     {
//     case 'r':
//         if (computer == 'r')
//         {
//             std::cout << "It's tied :()\n";
//         }
//         else if (computer == 'p' ) {
//             std::cout << "You're lose :(\n";
//         }
//         else {
//             std::cout << "You're Winner :))\n";
//         }
        
//         break;
    
//      case 'p':
//         if (computer == 'p')
//         {
//             std::cout << "It's tied :()\n";
//         }
//         else if (computer == 's' ) {
//             std::cout << "You're lose :(\n";
//         }
//         else {
//             std::cout << "You're Winner :))\n";
//         }
//         break;
        
//          case 's':
//         if (computer == 's')
//         {
//             std::cout << "It's tied :()\n";
//         }
//         else if (computer == 'r' ) {
//             std::cout << "You're lose :(\n";
//         }
//         else {
//             std::cout << "You're Winner :))\n";
//         }
        
//         break;
    
    
//     }
// }



// arrays
// int main() {
//     double price[] = {15.75, 17.16, 23.76, 28.56, 32.83};
//     std::cout << price[0] << "\n";
//     std::cout << price[1] << "\n";
//     std::cout << price[2] << "\n";
//     std::cout << price[3] << "\n";
//     std::cout << price[4] << "\n";

//     return 0;
// }




// // size of()
// int main() {
//     // solution 1:
//     // std::string students[] = {"Dustin", "GIna", "Kyo", "Bao", "Tina"};
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     std::cout << students[i] << "\n";
//     // }

//     // Solution 2:
//     std::string students[] = {"Dustin"};
//     for (int i = 0; i < sizeof(students)/sizeof(std::string); i++){
//     std::cout << students[i] << "\n";  
//   }
    
    
//     return 0;
// }


// foreach loop: loop that eases the traversal over an iterable data set.
// int main() {
// double grades[] = {3.5, 3.6, 3.7, 3.9};
// for (double grades : grades){
//   std::cout << grades << '\n';
// }


// return 0;


// }





// Pass array to a function
// total of price


// double getTotal(double prices[], int size);
// int main() {
//   double prices[] = {16.42, 18.15, 6.21, 8.25, 12.53, 14.16, 5.65, 3.45, 6.86};
//   int size = sizeof(prices)/sizeof(prices[0]);
//   double total = getTotal(prices, size);

//   std::cout << "$ " << total << " Dollar";
//   return 0;
// }

// double getTotal(double prices[], int size){
//   double total = 0;

//   for (int i = 0; i < size; i++)
//   {
//     total += prices[i];
//   }

//   return total;
  
// }




// search an array for an element
// int searchFood(std::string food[], int size, std::string element);

// int main() {
//     std::string food[] = {"CrunchyRoll", "Sushi", "Beverage", "Pho"};
//     int size = sizeof(food)/sizeof(food[0]);
//     int index;
//     std::string myFood;

//     std::cout << "Enter Food to be search for: \n";
//     std::getline(std::cin, myFood);

//     index = searchFood(food, size, myFood);

//     if (index != -1)
//     {
//         std::cout << myFood << " currently in line " << index;
//     }
//     else {
//         std::cout << myFood << " currently not in line ";
//     }

//     return 0;
    
// }

// int searchFood(std::string food[], int size, std::string element){

//     for (int i = 0; i < size; i++)
//     {
//         if (food[i] == element)
//         {
//             return i;
//         }

        
//     }
//             return -1;

// }







int searchBeverage(std::string array[], int size, std::string element);
int main() {
    std::string beverage[] = {"7up", "Coca", "Prime", "Juice"};
    int size = sizeof(beverage)/sizeof(beverage[0]);

    std::string myBeverage;
    int index;

    std::cout << "Please enter your Drink to find it: \n";
    std::getline(std::cin, myBeverage);

    index = searchBeverage(beverage, size, myBeverage);

    if (index != -1)
    {
        std::cout << "Your drink currently in line " << index;
    }
    else{
                std::cout << "Your drink doesn't exit!";

    }
    

    return 0;
}
int searchBeverage(std::string array[], int size, std::string element){
    for (int i = 0; i < size; i++)
    {
        if (element == array[i])
        {
            return i;
        }
        
    }
    return -1;
    
}










































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































