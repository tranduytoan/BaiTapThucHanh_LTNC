#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box {
private:
//l,b,h are integers representing the dimensions of the box
    int l, b, h;
public:
// The class should have the following functions : 

// Constructors: 
// Box();
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }
// Box(int,int,int);
    Box(int lenght, int breadth, int height) : l(lenght), b(breadth), h(height) {};
// Box(Box);
    Box(Box &B) {
        l = B.l;
        b = B.b;
        h = B.h;
    }


// int getLength(); // Return box's length
    int getLength() {return l;}
// int getBreadth (); // Return box's breadth
    int getBreadth () {return b;}
// int getHeight ();  //Return box's height
    int getHeight () {return h;}
// long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume() {
        long long result;
        result = (long long)l*b*h;
        return result;
    }

//Overload operator < as specified
//bool operator<(Box& b)
    bool operator< (Box &B) {
        if (l < B.l) return true;
        if (b < B.b && l == B.l) return true;
        if (h < B.h && b == B.h && l == B.l) return true;
        return false;
    }

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
    // ostream& operator<<(ostream& out,const Box& B) {
    //     out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    //     return out;
    // }
};

ostream& operator<<(ostream& out, Box& B) {
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}