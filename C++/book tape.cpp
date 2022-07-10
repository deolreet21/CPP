#include <iostream>
using namespace std;
class Publication
{
        string title;
        int num_of_copies;
        float price;
    public:
        void get_data()
        {
            cout<<"\nEnter the Title of Publication: ";
            cin>>title;
            cout<<"\nEnter the Number of copies sold: ";
            cin>>num_of_copies;
            cout<<"\nEnter the price: ";
            cin>>price;
        }
        
        void put_data()
        {
            cout<<"\nThe title of the publication is "<<title<<endl;
            cout<<"The number of copies sold is "<<num_of_copies<<endl;
            cout<<"The price is "<<price<<endl;
        }
};

class Book:public Publication
{
    private:
        int page_count;
    public:
        void get_data()
        {
            cout<<"\nEnter number of pages: ";
            cin>>page_count;
        }
        void put_data()
        {
            cout<<"The number of pages is "<<page_count<<endl;
        }
};

int main()
{
    Publication p;
    Book b;
    p.get_data();
    b.get_data();
    
    p.put_data();
    b.put_data();
    return 0;
}
