import <string>;
import <iostream>;
import <format>;
import airline_ticket;

using namespace std;

void mysteryFunction(const std::string* someString)
{
	//*someString = "Test";  // Will not compile.
}

void func(const int param)
{ 
	/* Not allowed to change param... */
}

int main()
{
	std::string myString { "The string" };
	mysteryFunction(&myString);

	AirlineTicket myTicket;  // Stack-based AirlineTicket
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	double cost { myTicket.calculatePriceInDollars() };
	cout << format("This ticket will cost ${}", cost) << endl;
}