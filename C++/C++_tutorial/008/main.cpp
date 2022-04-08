#include<iostream>
#include<string>

using namespace std;

class Arrow
{
    private:
         static int a;
         static int b;
         static int q;
         static int r;
    public:
        void lower() const;
        void upper() const;
        void display_1() const;
        void display_2() const;
        void display_3() const;
        void mainDisplay() const;
        void space() const;
};
int Arrow::a=4;//For Upper 2nd wing
int Arrow::q=30;//For Upper Space
int Arrow::b=10;//For lower 2nd wing
int Arrow::r=24;//For Lower Space
//For Upper Wings Part
void Arrow:: upper() const
{
    for(int j=0;j<=3;j++)
    {
        for(int i=0;i<35;i++)
        cout<<" ";
        for(int i=0;i<j;i++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}
//For lower Wings Part
void Arrow:: lower() const
{
    for(int j=3;j>=1;j--)
    {
        for(int i=0;i<35;i++)
        cout<<" ";
        for(int i=0;i<j;i++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}
//for Space
void Arrow::space() const
{
        for(int p=0;p<4;p++)
        {
            cout<<" ";
        }
}
//For Central Part
void Arrow::display_2() const
{
    space();
    for(int i=0;i<44;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    space();
    cout<<" ";
    for(int i=0;i<45;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    space();
    for(int i=0;i<44;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
//For Upper Wings Part
void Arrow::display_1() const
{
    upper();
    while(a<11)
    {
        for(int i=1;i<=7;i++)
        {
            space();
            for(int k=1;k<=i;k++)
            cout<<"*";
            for(int j=q;j>=1;j--)
            cout<<" ";
            for(int i=0;i<a;i++)
            cout<<"*";
            cout<<endl;
            q--;//For Space
            a++;//For 2nd wing
        }
    }

}
//For Lower Wings Part
void Arrow::display_3() const
{
    while(b>4)
    {
        for(int i=7;i>=1;i--)
        {
            space();
            for(int k=1;k<=i;k++)
            cout<<"*";
            for(int j=r;j>=1;j--)
            cout<<" ";
            for(int i=0;i<b;i++)
            cout<<"*";
            cout<<endl;
            r++;
            b--;
        }
    }
    lower();

}
//For Calling All Functions
void Arrow::mainDisplay() const
{
    display_1();
    display_2();
    display_3();
}
//Main
int main()
{
    Arrow obj;
    obj.mainDisplay();
}
