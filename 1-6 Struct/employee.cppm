export module employee;

export struct Employee
{
    char firstInitial;
    char lastInitial;
    int  employeeNumber;
    int  salary;
};

export Employee getEmployee()
{
    return Employee { 'Y', 'D', 729, 9999 };
}