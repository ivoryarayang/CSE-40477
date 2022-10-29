#include<iostream>
#include<ctime>

using namespace std;
namespace IvoryYang

{
    class Date
    {
        private:
        int month;
        int day;
        int year;

        public:
        inline int getMonth();
        inline int getDay();
        inline int getYear();

        Date()
        {
            time_t now = time(0);
            tm * lt = localtime(&now);
            year=1900 + lt->tm_year;
            month=1 + lt->tm_mon;
            day=lt->tm_mday;
        }
        Date(int month, int day, int year)
        {
            if(year>0)
            {
                if(month>0 && month<13)
                {
                    if(month==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month ==12)
                    {
                        if(day>0 && day<=31)
                        {
                            this->day=day;
                            this->year=year;
                            this->month=month;
                        }
                        else cout<<"Error: Invalid day"<<endl;
                    }
                }
                {
                    if(month == 4 || month ==6 || month == 9 || month == 11)
                    {
                        if(day>0 && day<=30)
                        {
                            this->day=day;
                            this->year=year;
                            this->month=month;
                        }
                        else cout<<"Error: Invalid day"<<endl;
                    }
                else cout<<"Error: Invalid month"<<endl;
                }
            }
            else cout<<"Error: Invalid year"<<endl;
        }
        
        inline int getMonth() const
        {
            return month;
        }
        inline int getDay() const
        {
            return day;
        }
        inline int getYear() const
        {
            return year;
        }
    
    void display()
    {
        cout<<month<<"/"<<day<<"/"<<year<<endl;
    }
    };
}
