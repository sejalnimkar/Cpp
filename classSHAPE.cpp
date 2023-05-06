#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

class shape{
    protected:
    int id;
    char colour[10];
    char type;
    public:
    shape()
    {
        id=0;
        strcpy(colour,"black");
        type='0';
    }
    shape(int a, char* b, int c)
    {
        id=a;
        strcpy(colour,b);
        type=c;
    }
    ~shape(){
       
    }
    virtual void display(){
        cout<<"\nShape ID: "<<id;
        cout<<"\nColour of shape: "<<colour;
        if(type=='s'||type=='S'){
            cout<<"\nShape is solid";
        }
        else if(type=='h'||type=='H'){
            cout<<"\nShape is hollow";
        }
        else{
            cout<<"\nInvalid type";
        }
    }
    virtual float calc_area()=0;
};

class triangle:public shape{
    float base, height;
    public:
    triangle(){
        id=0;
        strcpy(colour,"black");
        type='0';
        base=0;
        height=0;
    }
    triangle(int a, int b){
        base=a;
        height=b;
    }
    triangle(int a, char* b,char c, int d, int e):shape(a,b,c){
        base=d;
        height=e;
    }
    ~triangle(){
       
    }
    float calc_area(){
        float area;
        area=0.5*base*height;
        return area;
    }
    void display(){
        cout<<"\nShape belongs to class triangle";
        cout<<"\nShape ID: "<<id;
        cout<<"\nColour of shape: "<<colour;
        if(type=='s'||type=='S'){
            cout<<"\nShape is solid";
        }
        else if(type=='h'||type=='H'){
            cout<<"\nShape is hollow";
        }
        else{
            cout<<"\nInvalid type";
        }
        cout<<"\nBase of triangle: "<<base;
        cout<<"\nHeight of triangle: "<<height;
    }
};

class circle:public shape{
    float rad;
    public:
    circle(){
      id=0;
        strcpy(colour,"black");
      type='0';
      rad=0;
    }
    circle(int a, char* b,char c,float d):shape(a,b,c)
    {
        rad=d;
    }
    circle(float a){
        rad=a;
    }
    ~circle()
    {
       
    }
    float calc_area(){
        float area;
        area=3.14*rad*rad;
        return area;
    }
    void display(){
        cout<<"\n";
        cout<<"\nShape belongs to class circle";
        cout<<"\nShape ID: "<<id;
        cout<<"\nColour of shape: "<<colour;
        if(type=='s'||type=='S'){
            cout<<"\nShape is solid";
        }
        else if(type=='h'||type=='H'){
            cout<<"\nShape is hollow";
        }
        else{
            cout<<"\nInvalid type";
        }
        cout<<"\nRadius of circle: "<<rad;
    }
};

class square:public shape{
    float side;
    public:
    square(){
      id=0;
        strcpy(colour,"black");
      type='0';
      side=0;
    }
    square(int a, string b,char c,float d):shape(a,b,c){
        side=d;
    }
    square(float a){
        side=a;
    }
    ~square(){
       
    }
    float calc_area(){
        float area;
        area=side*side;
        return area;
    }
    void display(){
        cout<<"\n";
        cout<<"\nShape belongs to class square";
        cout<<"\nShape ID: "<<id;
        cout<<"\nColour of shape: "<<colour;
        if(type=='s'||type=='S'){
            cout<<"\nShape is solid";
        }
        else if(type=='h'||type=='H'){
            cout<<"\nShape is hollow";
        }
        else{
            cout<<"\nInvalid type";
        }
        cout<<"\nLength of side of square: "<<side;
        cout<<"\nPerimeter of square: "<<side*4;
    }
};

int main(){
    int i;
    // shape *ptr=new triangle(13,"red",'h',3,6);
    // ptr->display();
    // cout<<"\nArea of triangle"<<ptr->calc_area();

    //array of pointers
    shape *ptr[5];
    ptr[0]= new triangle(13,"red",'h',3,6);
    ptr[1]= new square(9,"blue",'s',4.5);
    ptr[2]= new circle(9,"green",'h',3.3);
    ptr[3]= new triangle(4,3);
    ptr[4]= new square(6);

    for(i=0;i<5;i++){
        cout<<"\nObject "<<i+1<<" area: "<<ptr[i]->calc_area();
        delete ptr[i];
    }
    return 0;
}

