#include <iostream>
#include <string>

using namespace std;


class Car{
    private:
    int m_MaxSeating;
    int m_price;
    void updata_price(int base = 500000){
        m_price = m_MaxSeating * base;
    }
    
    protected:
    string drive_mode;
    
    public:
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x,string y, int z, int s){
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
        updata_price();
        drive_mode = "No_wheel";
    }
    int get_MaxSeating(){
        return m_MaxSeating;
    }
    int get_Price(){
        return m_price;
    }
    string get_DriveMode(){
        return drive_mode;
    }
};

class BMW : public Car{
    public:
    BMW(string y, int z, int s) : Car("BMW", y, z, s){
        cout << "Counstructing BMW_Car\n";
        drive_mode = "Rear-wheel";
    }
};

class AUDI : public Car{
    public:
    AUDI(string y, int z, int s) : Car("AUDI", y, z, s){
        cout << "Counstructing AUDI_Car\n";
        drive_mode = "Front-wheel";
    }
};

class BENZ : public Car{
    public:
    BENZ(string y, int z, int s) : Car("BENZ", y, z, s){
        cout << "Counstructing BENZ_Car\n";
        drive_mode = "Front-wheel";
    }
};

int main()
{
    // Car car1("BMW", "X5", 2023, 6);
    // Car car2("Audi", "A1", 2021, 2);
    // cout << car1.m_brand << " Max Seating = " << car1.get_MaxSeating() << endl << "price = " << car1.get_Price() << endl;
    // cout << car2.m_brand << " Max Seating = " << car2.get_MaxSeating() << endl << "price = " << car2.get_Price() << endl;
    
    BMW BMW_Car("X5", 2023, 6);
    cout << "BMW：" << BMW_Car.get_DriveMode() << endl; 
    AUDI AUDI_Car("A1", 2021, 2);
    cout << "AUDI：" << AUDI_Car.get_DriveMode() << endl;
    BENZ BENZ_Car("A1", 2021, 2);
    cout << "BENZ：" << BENZ_Car.get_DriveMode() << endl;
    return 0;
}
