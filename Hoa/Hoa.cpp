#include <iostream>
#include <cmath>

void usr();
void symbol()
{
    std::cout<<"<=========>\n";
}
class mol 
{
    public:
    int choose;
    double show;
    void usr1()
    {
        std::cout<<"1.Tinh khoi luong mol(mol)\n"
                 <<"2.Tinh so mol\n"
                 <<"3.Tinh khoi luong mol(g)\n"
                 <<"4.Tinh the tich mol cua chat khi\n"
                 <<"5.Tinh so mol dua tren the tich cua chat khi\n"
                 <<"0.Quay lai\n"
                 <<"=>";
        std::cin>>choose;
        symbol();
        switch(choose)
        {
            case 0:
            usr();
            break;

            case 1:
            double n,m;
            std::cout<<"Nhap so mol(mol):";
            std::cin>>n;
            std::cout<<"Nhap khoi luong(g):";
            std::cin>>m;
            symbol();
            show = m/n;
            symbol();
            printf("KQ:%0.2fg/mol\n",show);
            symbol();
            usr1();
            break;

            case 2:
            double M;
            std::cout<<"Nhap khoi luong(g):";
            std::cin>>m;
            std::cout<<"Nhap khoi luong mol(g/mol):";
            std::cin>>M;
            symbol();
            show = m/M;
            printf("KQ:%0.2fmol\n",show);
            symbol();
            usr1();
            break;

            case 3:
            std::cout<<"Nhap so mol:";
            std::cin>>n;
            std::cout<<"Nhap khoi luong(g):";
            std::cin>>m;
            symbol();
            show = n*m;
            printf("KQ:%0.2fg\n",show);
            symbol();
            usr1();
            break;

            case 4:
            std::cout<<"Nhap so mol(mol):";
            std::cin>>n;
            symbol();
            show = n*24.79;
            printf("KQ:%0.2fl\n",show);
            symbol();
            usr1();
            break;

            case 5:
            std::cout<<"Nhap the tich mol cua chat khi(l):";
            std::cin>>n;
            symbol();
            show=n/24.79;
            printf("KQ:%0.2fmol\n",show);
            symbol();
            usr1();
        }
    }
};
void usr()
{
    mol *test = new mol();
    int choose;
    std::cout<<"1.Cac bai tap ve mol\n"
             <<"0.Thoat\n"
             <<"=>";
    std::cin>>choose;
    symbol();
    switch(choose)
    {
        case 0:
        exit(0);
        break;

        case 1:
        test->usr1();
        break;
    }
}
int main()
{
    usr();
}