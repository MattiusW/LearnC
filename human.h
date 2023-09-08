#include <string>
using namespace std;

class human
{
    private:
    string name = "Mateusz";
    string surname = "W";

    //Constructor
    public:
    human(string name, string surname);

    //Destroyer
    ~human();

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    string getSurname() const //Static method const need to add
    {
        return surname;
    }

    friend human operator+(const human&, const human&); //operator overloading
};
