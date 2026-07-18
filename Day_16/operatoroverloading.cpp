um(){
    cout<<real<<"+"<<img<<"i\n";


}
//overloading
Complex operator+(Complex &c2){
    int resReal=this->real+c2.real;
    int resImg=this->img+c2.img;
    Complex c3(resReal,resImg);
    return c3;
}

};
int main(){
    Complex c1(1,2);
    Complex c2(2,3);
    c1.showNum();
    c2.showNum();
     Complex c3=c1+c2;
     cout<<"result=";
     c3.showNum();
    return 0;

}
