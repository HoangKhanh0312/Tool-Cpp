#include <iostream>

void symbol()
{
    std::cout<<"<==========>\n";
}
void symres()
{
    std::cout<<"<----------->\n";
}
class mol
{
    public:
    double smol(double sct)
    {
    return sct/(6022*std::pow(10,23));
    }
    double tinhdotan(double mn,double mct)
    {
        return (mct/mn)*100;
    }
    double ndpt(double mct,double mdd)
    {
        return (mct/mdd)*100;
    }
    double ndmol(double mct,double vdd)
    {
        return mct/vdd;
    }
};
void choose()
{
    mol *hh = new mol();
    std::string donvi;
    double show;
    int choos3;
    std::cout<<"1.Tinh do tan cua chat trong nuoc\n"
             <<"2.Tinh nong do phan tram\n"
             <<"3.Tinh nong do mol\n"
             <<"4.Tinh khoi luong dung dich\n"
             <<"5.Tinh so mol\n"
             <<"0.Thoat\n"
             <<"=>";
    std::cin>>choos3;
    symbol();
    switch (choos3)
    {
        case 0:
        exit(0);
        break;

        case 1:
        double mct,mn;
        std::cout<<"Nhap khoi luong chat tan:";
        std::cin>>mct;
        std::cout<<"Nhap khoi luong nuoc:";
        std::cin>>mn;
        std::cout<<"Nhap don vi:";
        std::cin>>donvi;
        symres();
        show = hh->tinhdotan(mn,mct);
        std::cout<<"KQ:"<<show<<donvi<<"\n";
        symbol();
        choose();
        break;

        case 2:
        double mdd;
        std::cout<<"Nhap khoi luong chat tan:";
        std::cin>>mct;
        std::cout<<"Nhap khoi luong:";
        std::cin>>mdd;
        symres();
        show = hh->ndpt(mct,mdd);
        std::cout<<"KQ:"<<show<<"%"<<"\n";
        symbol();
        choose();
        break;

        case 3:
        double vdd;
        std::cout<<"Nhap so mol chat tan:";
        std::cin>>mct;
        std::cout<<"Nhap the tich dung dich:";
        std::cin>>vdd;
        std::cout<<"Nhap don vi:";
        std::cin>>donvi;
        symres();
        show = hh->ndmol(mct,vdd);
        std::cout<<"KQ:"<<show<<donvi<<"\n";
        symbol();
        choose();
        break;

        case 5:
        double s1,s2,s3,sm;
        std::cout<<"Nhap so thu 1:";
        std::cin>>s1;
        std::cout<<"Nhap so thu 2:";
        std::cin>>s2;
        std::cout<<"Nhap so mu:";
        std::cin>>sm;
        symres();
        s3 = s1*std::pow(s2,sm);
        show = hh->smol(s3);
        std::cout<<"KQ:";
        printf("%0.2f%s\n",show,"mol");
        symbol();
        choose();
        break;
    }
}
int main()
{
    choose();
}