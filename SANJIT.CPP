#include<iostream.h>
#include<conio.h>
class complex
{
   private:
    int a,b;
   public:
    void setData(int x,int y)
    {
       a=x;b=y;
     }
     void showData()
     {
       cout<<"\na= "<<a<<"\nb= "<<b;
     }

     friend ostream& operator<<(ostream&,complex);
     friend istream& operator>>(istream& ,complex&);
};
ostream& operator<<(ostream &dout,complex c)
{
    cout<<"\na= "<<c.a<<"\nb= "<<c.b;
    return(dout);
}
istream& operator>>(istream &din,complex &c)
{
  cin>>c.a>>c.b;
  return(din);
}

void main()
{
  clrscr();
  complex c1;
  cout<<"Enter a complex number";
  cin>>c1;
  cout<<"\nyou enter number is";
  cout<<c1;
  getch();
}
