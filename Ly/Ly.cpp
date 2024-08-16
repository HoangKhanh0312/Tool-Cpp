#include <iostream>
#include <cmath>

void symbol()
{
    std::cout<<"<<==============>>\n";
}
void symres()
{
    std::cout<<"<------------> \n";
}
void usr();
class kc
{
    public:    
    int choose;
    std::string donvi1,donvi2,comb;
    void pick()
    {
        std::cout<<"1.Tinh van toc\n"
                 <<"2.Tinh khoang cach\n"
                 <<"3.Tinh thoi gian\n"
                 <<"0.Quay lai\n"
                 <<"=>";
        std::cin>>choose;
        symbol();
        double v,s,t,show;
        if (choose == 1)
        {
            std::cout<<"Nhap don vi do thoi gian:";
            std::cin>>donvi1;           
            std::cout<<"Nhap don vi do khoang cach:";
            std::cin>>donvi2;
            std::cout<<"Nhap thoi gian:";
            std::cin>>t;
            std::cout<<"Nhap khoang cach:";
            std::cin>>s;
            symres();
            comb = donvi2+"/"+donvi1;
            show = vt(t,s);
            std::cout<<"KQ:"<<show<<comb<<"\n";
            symbol();
            pick();
        }
        else if (choose == 2)
        {   
            std::cout<<"Nhap don vi do khoang cach:";
            std::cin>>donvi1;
            std::cout<<"Nhap thoi gian:";
            std::cin>>t;
            std::cout<<"Nhap van toc:";
            std::cin>>v;
            symres();
            comb = donvi1;
            show = qd(t,v);
            std::cout<<"KQ:"<<show<<comb<<"\n";
            symbol();
            pick();
        }
        else if (choose == 3)
        {
            std::cout<<"Nhap don vi do thoi gian:";
            std::cin>>donvi1;
            std::cout<<"Nhap khoang cach:";
            std::cin>>s;
            std::cout<<"Nhap van toc:";
            std::cin>>v;
            symres();
            comb = donvi1;
            show = tg(v,s);
            std::cout<<"KQ:"<<show<<comb<<"\n";
            symbol();
            pick();
        }
        else if (choose == 0)
        {
            usr();
        }
    }
    double vt(double tg,double qd)
    {
        return qd/tg;
    }
    double tg(double vt,double qd)
    {
        return qd/vt;
    }
    double qd(double tg,double vt)
    {
        return vt*tg;
    }
};
void usr()
{
    kc *kcv = new kc();
    int choose;
    std::cout<<"1.Tinh khoang cach, quang duong va thoi gian\n"
             <<"0.Thoat\n"
             <<"=>";
    std::cin>>choose;
    symbol();
    switch(choose)
    {
        case 1:
        kcv->pick();
        break;

        case 0:
        exit(0);
        break;

        default:
        usr();
        break;
    }
}
int main()
{
    usr();
    return 0;
}