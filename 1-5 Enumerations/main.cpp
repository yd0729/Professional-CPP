import <iostream>;
import <format>;

using namespace std;

// Strongly typed enumeration types
enum class PieceType : unsigned long
{
    King, Queen, Rook = 10, Pawn
};

// Different strongly typed enumerations can have enumeration values with the same name.
enum class State
{
    Unknown, Started, Finished
};
enum class Error
{
    None, BadInput, DiskFull, Unknown
};

enum Status
{
    error, ok
};  // old-style type-unsafe enum

using enum State;
// using Error::Unknown;  // conflit

int main()
{
    // Enumerated Types
    PieceType piece { PieceType::Rook };
    cout << format("piece = {}", static_cast<int>(piece)) << endl;
    if(piece == PieceType::King)
    {
        cout << "piece is King";
    }

    State state { Started };
    cout << format("state = {}", static_cast<int>(state)) << endl;

    // Old-Style Enumerated Types
    Status status { error };  // 没有前面的 "Status::"
    cout << format("status = {}", static_cast<int>(status)) << endl;
}
