#include <iostream>
#include <cmath>
#include <iomanip>

void symbol()
{
	std::cout << "<=====================> \n";
}
void symres()
{
	std::cout << "<----------------->\n";
}
void usr();
void toanhinh();
void s();
void p();
void v();
class ts
{
public:
	//Option
	void toanso()
	{
		int pick;
		std::cout << "1.Tim UCLN\n"
			<< "2.Tim BCNN\n"
			<< "3.Ty le thuan\n"
			<< "4.Ty le nghich\n"
			<< "5.Lam tron \n"
			<< "6.Tinh tong day so cach deu\n"
			<< "7.Cac phep tinh don gian\n"
			<< "8.Sap xep\n"
			<< "0.Quay lai\n"
			<< "=>";
		std::cin >> pick;
		symbol();
		if (pick == 6)
		{
			tdscd();
		}
		else if(pick == 7)
		{
			pickp();
		}
		else if (pick == 1)
		{
			int a, b;
			std::cout << "Nhap so thu 1:";
			std::cin >> a;
			std::cout << "Nhap so thu 2:";
			std::cin >> b;
			symres();
			std::cout << "KQ:" << ucln(a, b) << "\n";
			symbol();
			toanso();
		}
		else if (pick == 2)
		{
			int a, b;
			std::cout << "Nhap so thu 1:";
			std::cin >> a;
			std::cout << "Nhap so thu 2:";
			std::cin >> b;
			symres();
			int res = (a * b) / ucln(a, b);
			std::cout << "KQ:" << res << "\n";
			symbol();
			toanso();
		}
		else if (pick == 0)
		{
			usr();
		}
		else if (pick == 3)
		{
			tlt();
		}
		else if (pick == 4)
		{
			tln();
		}
		else if (pick == 5)
		{
			double a1;
			int b1;
			std::cout << "Nhap so can lam tron:";
			std::cin >> a1;
			std::cout << "Nhap so thap phan con lai:";
			std::cin >> b1;
			symres();
			std::cout << "KQ:" << std::fixed << std::setprecision(b1) << a1 << "\n";
			symbol();
			toanso();
		}
		else if(pick == 8)
		{
			sxp();
		}
		else
		{
			toanso();
		}
	}
	//
	//sx
	void sxp()
	{
		int check;
		std::cout<<"1.Tu be den lon\n"
				 <<"2.Tu lon den be\n"
				 <<"0.Quay lai\n"
				 <<"=>";
		std::cin>>check;
		symres();
		if(check == 0)
		{
			toanso();
		}
		else if(check == 1)
		{
			bdl();
		}
		else if(check==2)
		{
			lbd();
		}
	}
	void bdl()
	{
		int z,size;
		std::cout<<"Co bao nhieu so can sap xep ?\n=>";
		std::cin>>z;
		symres();
		double numbers[9000];
		for(int i=1;i <= z;i++)
		{
			std::cout<<"Nhap so thu "<<i<<":";
			std::cin>>numbers[i];
		}
		size = sizeof(numbers)/sizeof(numbers[0]);			
		for(int z=0;z < size-1;z++)
		{
			for(int j=0;j <size-z-1;j++)
			{
				if(numbers[j] > numbers[j+1])
				{
					double temp = numbers[j];
					numbers[j] = numbers[j+1];
					numbers[j+1]=temp;
				}
			}
		}
		symres();
		std::cout<<"KQ:";
		for(double show:numbers)
		{
			std::cout<<show<<" "<<"\n";
		}
		symbol();
		sxp();
	}
	void lbd()
	{

	}
	//
	//cal
	void pickp()
	{
		std::string choose;
		std::cout<<"+,-,x,:,q\n=>";
		std::cin>>choose;
		symbol();
		if(choose == "+")
		{
			increments();
		}
		else if(choose == "-")
		{
			subtraction();
		}
		else if(choose == "x" || choose == "*")
		{
			multiply();
		}
		else if(choose == ":" || choose == "/")
		{
			divide();
		}
		else if(choose == "q")
		{
			toanso();
		}
		else 
		{
			pickp();
		}
	}
	void increments()
	{
		int z;
		std::cout<<"Co bao nhieu so can cong ?\n=>";
		std::cin>>z;
		double s[9000],sum;
		for(int i=1;i < z+1;i++)
		{
			std::cout<<"Nhap so thu "<<i<<":";
			std::cin>>s[i];
			sum += s[i];
		}
		symres();
		std::cout<<"KQ:"<<sum<<"\n";
		symbol();
		pickp();
	}
	void subtraction()
	{
		int z;
		double numbers[9000],sub;
		std::cout<<"Co bao nhieu so can de tru\n=>";
		std::cin>>z;
		for(int i=1;i <= z;i++)
		{
			std::cout<<"Nhap so thu "<<i<<":";
			std::cin>>numbers[i];
			if(i == 1)
			{
				sub = numbers[i];
			}
			else 
			{
				sub -= numbers[i];
			}
		}
		symres();
		std::cout<<"KQ:"<<sub<<"\n";
		symbol();
		pickp();
	}
	void multiply()
	{
		int z;
		double numbers[9000],sub;
		std::cout<<"Co bao nhieu so can de nhan\n=>";
		std::cin>>z;
		for(int i=1;i <= z;i++)
		{
			std::cout<<"Nhap so thu "<<i<<":";
			std::cin>>numbers[i];
			if(i == 1)
			{
				sub = numbers[i];
			}
			else 
			{
				sub *= numbers[i];
			}
		}
		symres();
		std::cout<<"KQ:"<<sub<<"\n";
		symbol();
		pickp();
	}
	void divide()
	{
		int z;
		double numbers[9000],sub;
		std::cout<<"Co bao nhieu so can de chia\n=>";
		std::cin>>z;
		for(int i=1;i <= z;i++)
		{
			std::cout<<"Nhap so thu "<<i<<":";
			std::cin>>numbers[i];
			if(i == 1)
			{
				sub = numbers[i];
			}
			else 
			{
				sub /= numbers[i];
			}
		}
		symres();
		std::cout<<"KQ:"<<sub<<"\n";
		symbol();
		pickp();
	}
	//
	void tlt()
	{
		double a, b, c, t;
		std::string ct;
		std::cout << "Nhap so thu 1:";
		std::cin >> a;
		std::cout << "Nhap so thu 2:";
		std::cin >> b;
		std::cout << "Nhap so thu 3:";
		std::cin >> c;
		std::cout << "Nhap tong:";
		std::cin >> t;
		std::cout << "Nhap cong thuc (a,b,c):";
		std::cin >> ct;
		symres();
		if (ct == "a+b+c")
		{
			double r = t / (a + b + c);
			double m = a *= r;
			double n = b *= r;
			double p = c *= r;
			std::cout << "So thu 1:" << m << "\n";
			std::cout << "So thu 2:" << n << "\n";
			std::cout << "So thu 3:" << p << "\n";
			symbol();
			toanso();
		}
		else if (ct == "a-b+c")
		{
			double r = t / (a - b + c);
			double m = a *= r;
			double n = b *= r;
			double p = c *= r;
			std::cout << "So thu 1:" << m << "\n";
			std::cout << "So thu 2:" << n << "\n";
			std::cout << "So thu 3:" << p << "\n";
			symbol();
			toanso();
		}
		else if (ct == "a+b-c")
		{
			double r = t / (a + b - c);
			double m = a *= r;
			double n = b *= r;
			double p = c *= r;
			std::cout << "So thu 1:" << m << "\n";
			std::cout << "So thu 2:" << n << "\n";
			std::cout << "So thu 3:" << p << "\n";
			symbol();
			toanso();
		}
		else if (ct == "a-b-c")
		{
			double r = t / (a - b - c);
			double m = a *= r;
			double n = b *= r;
			double p = c *= r;
			std::cout << "So thu 1:" << m << "\n";
			std::cout << "So thu 2:" << n << "\n";
			std::cout << "So thu 3:" << p << "\n";
			symbol();
			toanso();
		}
	}
	void tln()
	{
		std::cout << "<Tinh he so ty le> \n";
		double s1, s3, s2;
		std::cout << "Nhap so thu 1:";
		std::cin >> s1;
		std::cout << "Nhap so thu 2:";
		std::cin >> s2;
		symbol();
		std::cout << "<Nhap gia tri can tim>\n";
		std::cout << "Nhap so thu 3:";
		std::cin >> s3;
		symres();
		std::cout << "=>" << s1 * s2 / s3 << "\n";
		symbol();
		toanso();
	}
	int ucln(int a,int b)
	{
		while (b != 0)
		{
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
	void tdscd()
	{
		double st, en,nd;
		std::cout << "Nhap so thu nhat:";
		std::cin >> st;
		std::cout<<"Nhap so thu hai:";
		std::cin>>nd;
		std::cout << "Nhap so ket thuc:";
		std::cin >> en;
		symres();
		double kc = nd-st;
		double p1=(en-st)/kc+1;
		double p2=(st+en)*p1/2;
		std::cout<<"KQ:"<<p2<<"\n";
		symbol();
		toanso();
	}
};
class th
{
public:
	double show;
	std::string donvi;
	//tu giac 
	void xdtgc()
	{
		int choose;
		std::cout<<"1.Xac dinh qua so do goc\n"
				 <<"2.Xac dinh qua so do duong cheo\n"
				 <<"0.Quay lai\n"
				 <<"=>";
		std::cin>>choose;
		symbol();
		if(choose == 0)
		{
			ht();
		}
		else if(choose == 1)
		{
			double g1,g2;
			std::cout<<"Nhap so do goc 1:";
			std::cin>>g1;
			std::cout<<"Nhap so do goc 2:";
			std::cin>>g2;
			symres();
			if(g1 == g2)
			{
				std::cout<<"Day la hinh thang can !\n";
				symbol();
				xdtgc();
			}
			else
			{
				std::cout<<"Day khong phai la hinh thang can !\n";
				symbol();
				xdtgc();
			}
		}
		else if(choose == 2)
		{
			double dc1,dc2;
			std::cout<<"Nhap so do duong cheo 1:";
			std::cin>>dc1;
			std::cout<<"Nhap so do duong cheo 2:";
			std::cin>>dc2;
			symres();
			if(dc1 == dc2)
			{
				std::cout<<"Day la hinh thang can !\n";
				symbol();
				xdtgc();
			}
			else
			{
				std::cout<<"Day khong phai la hinh thang can !\n";
				symbol();
				xdtgc();
			}
		}
	}
	//
	//Tu giac choose
	void hbh()
	{

	}
	void ht()
	{
		int choose;
		std::cout<<"1.Xac dinh hinh thang can\n"
				 <<"2.Xac dinh hinh thang vuong\n"
				 <<"0.Quay lai\n";
		std::cin>>choose;
		symbol();
		if(choose == 0)
		{
			tugiac();
		}
		else if(choose == 1)
		{
			xdtgc();
		}
	}
	void hcn()
	{

	}
	void hv()
	{

	}
	void hthoi()
	{

	}
	//
	//S
	double svuong(double c) {
		return pow(c, 2);
	}
	double schunhat(double cd, double cr)
	{
		return cd * cr;
	}
	double stamgiac(double d,double cc)
	{
		return (d * cc) / 2;
	}
	double sthang(double dl, double db, double cc)
	{
		return (dl + db) * cc / 2;
	}
	double stron(double bk)
	{
		return pow(bk, 2) * 3.14;
	}
	double sxq_hhcn(double cd,double cr,double cc)
	{
		return 2 * (cd + cr) * cc;
	}
	double sxq_lp(double c)
	{
		return 4 * pow(c, 2);
	}
	double sxq_ctgd(double c1, double c2, double sm)
	{
		return (c1 * c2) / 2 * sm;
	}
	double stp_hhcn(double cd, double cr, double cc)
	{
		return (cd * cr) + sxq_hhcn(cd, cr, cc);
	}
	double stp_lp(double c)
	{
		return pow(c, 2) * 6;
	}
	double stp_ctgd(double sday,double c1, double c2, double sm)
	{
		return  sday + sxq_ctgd(c1, c2, sm);
	}
	double sxq_ltd(double pday, double cc)
	{
		return pday * cc;
	}
	double stp_ltd(double pday,double sday,double cc)
	{
		return (sday * 2) + sxq_ltd(pday, cc);
	}
	// 
	//P
	double p_vuong(double c)
	{
		return c * 4;
	}
	double p_chunhat(double cd, double cr)
	{
		return (cd + cr) * 2;
	}
	double p_tamgiac(double c1, double c2, double c3)
	{
		return c1 + c2 + c3;
	}
	double p_tron(double dk)
	{
		return dk * 3.14;
	}
	double p_thang(double c1, double c2, double c3, double c4)
	{
		return c1 + c2 + c3 + c4;
	}
	// 
	// V
	double v_ltd(double sday, double cc)
	{
		return sday * cc;
	}
	double v_lp(double canh)
	{
		return pow(canh, 3);
	}
	double v_hhcn(double cd, double cr, double cc)
	{
		return cd * cr * cc;
	}
	double v_ctgd(double sday,double cc)
	{
		return sday / 3 * cc;
	}
	// 
	//Pythagore
	void pythagore()
	{
		int choose;
		std::cout<<"1.Tinh canh cua mot tam giac\n";
		std::cout<<"2.Xac dinh tam giac vuong\n";
		std::cout<<"0.Quay lai\n";
		std::cout<<"=>";
		std::cin>>choose;
		symbol();
		switch(choose)
		{
			case 1:
			double c1,c2,res;
			std::cout<<"Nhap so do canh 1:";
			std::cin>>c1;
			std::cout<<"Nhap so do canh 2:";
			std::cin>>c2;
			std::cout<<"Nhap don vi:";
			std::cin>>donvi;
			symres();
			res=sqrt(pow(c1,2)+pow(c2,2));
			std::cout<<"KQ:"<<res<<"\n";
			symbol();
			pythagore();
			break;

			case 2:
			double n1,n2,n3,check;
			std::cout<<"Nhap so do canh 1:";
			std::cin>>n1;
			std::cout<<"Nhap so do canh 2:";
			std::cin>>n2;
			std::cout<<"Nhap so do canh 3:";
			std::cin>>n3;
			symres();
			check = sqrt(pow(n1,2)+pow(n2,2));
			if(check == n3)
			{
				std::cout<<"Day la tam giac vuong ! \n";
			}
			else
			{
				std::cout<<"Day khong phai la tam giac vuong ! \n";
			}
			symbol();
			pythagore();
			break;

			case 0:
			tamgiac();
			break;

			default:
			pythagore();
			break;
		}
	}
	//
	//Option
	
	void tamgiac()
	{
		int pick;
		std::cout<<"1.Xac dinh tam giac\n"
				<<"2.Tinh tong tam giac\n"
				<<"3.Tinh goc tam giac\n"
				<<"4.Dinh ly Pythagore\n"
				<<"0.Quay lai\n"
				<<"=>";
		std::cin>>pick;
		symres();
		if (pick == 1)
		{
			double c1,c2,c3;
			std::cout<<"Nhap so do canh 1:";
			std::cin>>c1;
			std::cout<<"Nhap so do canh 2:";
			std::cin>>c2;
			std::cout<<"Nhap so do canh 3:";
			std::cin>>c3;
			symres();
			if (c1+c2 > c3 && c1+c3 > c2 && c2+c3 > c1)
			{
				std::cout<<"Day lai lam giac ! \n";
				symbol();
				tamgiac();
			}
			else
			{
				std::cout<<"Day khong phai la tam giac \n";
				symbol();
				tamgiac();
			}
		}
		else if (pick == 2)
		{
			double n1,n2,n3;
			std::cout<<"Nhap so do canh 1:";
			std::cin>>n1;
			std::cout<<"Nhap so do canh 2:";
			std::cin>>n2;
			std::cout<<"Nhap so do canh 3:";
			std::cin>>n3;
			symres();
			double res = n1+n2+n3;
			std::cout<<"KQ:"<<res<<"\n";
			if (res > 180 || res < 180)
			{
				std::cout<<"So do cua ban co van de ! \n";
			}
			symbol();
			tamgiac();
		}
		else if (pick == 3)
		{
			double g1,g2,res;
			std::cout<<"Nhap so do goc 1:";
			std::cin>>g1;
			std::cout<<"Nhap so do goc 2:";
			std::cin>>g2;
			symres();
			res = 180-g1-g2;
			std::cout<<"KQ:"<<res<<"\n";
			symbol();
			tamgiac();
		}
		else if (pick == 4)
		{
			pythagore();
		}
		else if(pick == 0)
		{
			toanhinh();
		}
	}
	void sxq()
	{
		int choose;
		double show;
		std::string donvi;
		std::cout << "1.Hinh hop chu nhat\n"
			<< "2.Hinh chop tu giac deu\n"
			<< "3.Hinh lap phuong\n"
			<< "4.Hinh lang tru dung\n"
			<< "0.Quay lai\n"
			<< "=>";
		std::cin >> choose;
		symbol();
		if (choose == 2)
		{
			double cd, cc, sm;
			std::cout << "Nhap so do canh day:";
			std::cin >> cd;
			std::cout << "Nhap so do chieu cao:";
			std::cin >> cc;
			std::cout << "Nhap so mat xung quanh:";
			std::cin >> sm;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = sxq_ctgd(cd, cc, sm);
			std::cout << "KQ:" << show << donvi <<"^2"<<"\n";
			symbol();
			sxq();
		}
		else if (choose == 1)
		{
			double cd, cr, cc;
			std::cout << "Nhap so do chieu dai:";
			std::cin >> cd;
			std::cout << "Nhap so do chieu rong:";
			std::cin >> cr;
			std::cout << "Nhap so do chieu cao:";
			std::cin >> cc;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = sxq_hhcn(cd, cr, cc);
			std::cout << "KQ:" << show<<donvi <<"^2"<< "\n";
			symbol();
			sxq();
		}
		else if (choose == 3)
		{
			double c;
			std::cout << "Nhap so do chieu dai:";
			std::cin >> c;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = sxq_lp(c);
			std::cout << "KQ:" << show << donvi <<"^2"<< "\n";
			symbol();
			sxq();
		}
		else if (choose == 4)
		{
			double pday, cc;
			std::cout << "Nhap chu vi day:";
			std::cin >> pday;
			std::cout << "Nhap chieu cao:";
			std::cin >> cc;
			std::cout << "NHap don vi:";
			std::cin >> donvi;
			symres();
			show = sxq_ltd(pday, cc);
			std::cout << "KQ:" << show << donvi <<"^2"<< "\n";
			symbol();
			sxq();
		}
		else if (choose == 0)
		{
			s();
		}
		else
		{
			sxq();
		}
	}
	void tugiac()
	{
		int choose;
		std::cout<<"1.Tinh goc\n"
				 <<"2.Hinh thang\n"
				 <<"3.Hinh binh hanh\n"
				 <<"4.Hinh thoi\n"
				 <<"5.Hinh chu nhat\n"
				 <<"6.Hinh vuong\n"
				 <<"0.Quay lai\n"
				 <<"=>";
		std::cin>>choose;
		symbol();
		if(choose == 1)
		{
			double g1,g3,g2,g4;
			std::cout<<"Nhap so do goc 1:";
			std::cin>>g1;
			std::cout<<"Nhap so do goc 2:";
			std::cin>>g2;
			std::cout<<"Nhap so do goc 3:";
			std::cin>>g3;
			std::cout<<"Nhap don vi:";
			std::cin>>donvi;
			symres();
			g4 = 360-g1-g2-g3;
			std::cout<<"KQ:"<<g4<<donvi<<"\n";
			symbol();
		}
		else if(choose == 2)
		{
			ht();
		}
		else if(choose == 3)
		{
			hbh();
		}
		else if(choose == 4)
		{
			hthoi();
		}
		else if(choose == 5)
		{
			hcn();
		}
		else if(choose == 6)
		{
			hv();
		}
		else if(choose == 0)
		{
			toanhinh();
		}
		else
		{
			tugiac();
		}
	}
	void stp()
	{
		int choose;
		double show;
		std::string donvi;
		std::cout << "1.Hinh hop chu nhat\n"
			<< "2.Hinh chop tu giac deu\n"
			<< "3.Hinh lap phuong\n"
			<< "4.Hinh lang tru dung\n"
			<< "0.Quay lai\n"
			<< "=>";
		std::cin >> choose;
		symbol();
		if (choose == 2)
		{
			double cd, cc, sm,sday;
			std::cout << "Nhap dien tich day:";
			std::cin >> sday;
			std::cout << "Nhap so do canh day:";
			std::cin >> cd;
			std::cout << "Nhap so do chieu cao:";
			std::cin >> cc;
			std::cout << "Nhap so mat xung quanh:";
			std::cin >> sm;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = stp_ctgd(sday,cd, cc, sm);
			std::cout << "KQ:" << show << donvi <<"^2"<< "\n";
			symbol();
			sxq();
		}
		else if (choose == 1)
		{
			double cd, cr, cc;
			std::cout << "Nhap so do chieu dai:";
			std::cin >> cd;
			std::cout << "Nhap so do chieu rong:";
			std::cin >> cr;
			std::cout << "Nhap so do chieu cao:";
			std::cin >> cc;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = stp_hhcn(cd, cr, cc);
			std::cout << "KQ:" << show << donvi <<"^2"<< "\n";
			symbol();
			sxq();
		}
		else if (choose == 3)
		{
			double c;
			std::cout << "Nhap so do chieu dai:";
			std::cin >> c;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = stp_lp(c);
			std::cout << "KQ:" << show << donvi << "^2\n";
			symbol();
			sxq();
		}
		else if (choose == 4)
		{
			double pday, sday, cc;
			std::cout << "Nhap chu vi day:";
			std::cin >> pday;
			std::cout << "Nhap chieu cao:";
			std::cin >> cc;
			std::cout << "Nhap dien tich day:";
			std::cin >> sday;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = stp_ltd(pday, sday, cc);
			std::cout << "KQ:" << show << donvi << "^2\n";
			symbol();
			stp();
		}
		else if (choose == 0)
		{
			s();
		}
		else
		{
			stp();
		}
	}
	void s()
	{
		int choose;
		std::cout<< "1.Dien tich xung quanh\n"
			<< "2.Dien tich toan phan\n"
			<< "3.Hinh vuong\n"
			<< "4.Hinh chu nhat\n"
			<< "5.Hinh tam giac \n"
			<< "6.Hinh tron\n"
			<< "7.Hinh thang\n"
			<< "8.Hinh thoi\n"
			<<"9.Hinh binh hanh\n"
			<< "0.Quay lai\n"
			<< "=>";
		std::cin >> choose;
		symbol();
		if (choose == 0)
		{
			toanhinh();
		}
		if (choose == 3)
		{
			double c;
			std::cout << "Nhap so do canh:";
			std::cin >> c;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			show = svuong(c);
			symres();
			std::cout << "KQ:" << show << donvi << "^2\n";
			symbol();
			s();
		}
		else if (choose == 4)
		{
			double cd, cr;
			std::cout << "Nhap chieu dai:";
			std::cin >> cd;
			std::cout << "Nhap chieu rong:";
			std::cin >> cr;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			show = schunhat(cd, cr);
			symres();
			std::cout << "KQ:" << show << donvi << "^2\n";
			symbol();
			s();
		}
		else if (choose == 5)
		{
			double d, cc;
			std::cout << "Nhap so do canh 1:";
			std::cin >> d;
			std::cout << "Nhap so do canh 2:";
			std::cin >> cc;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			show = stamgiac(d, cc);
			symres();
			std::cout << "KQ:" << show << donvi << "^2\n";
			symbol();
			s();
		}
		else if (choose == 7)
		{
			double dl, db, cc;
			std::cout << "Nhap so do day lon:";
			std::cin >> dl;
			std::cout << "Nhap so do day be:";
			std::cin >>db;
			std::cout << "Nhap chieu cao:";
			std::cin >> cc;
			show = sthang(dl, db, cc);
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			std::cout << "KQ:" << show << donvi << "^2\n";
			symbol();
			s();
		}
		else if (choose == 6)
		{
			double bk;
			std::cout << "Nhap ban kinh:";
			std::cin >> bk;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = stron(bk);
			std::cout << "KQ:" << show << donvi << "^2\n";
			symbol();
			s();
		}
		else if (choose == 8)
		{
			double dc1, dc2;
			std::cout << "Nhap duong cheo 1:";
			std::cin >> dc1;
			std::cout << "Nhap duong cheo 2:";
			std::cin >> dc2;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			show = stamgiac(dc1, dc2);
			symres();
			std::cout << "KQ:" << show << donvi << "^2\n";
			symbol();
			s();
		}
		else if(choose == 9)
		{
			double cd,cc;
			std::cout<<"Nhap so do canh day:";
			std::cin>>cd;
			std::cout<<"Nhap so do chieu cao:";
			std::cin>>cc;
			std::cout<<"Nhap don vi:";
			std::cin>>donvi;
			show=schunhat(cd,cc);
			symres();
			std::cout<<"KQ:"<<show<<donvi<<"^2\n";
			symbol();
			s();
		}
		else if (choose == 1)
		{
			sxq();
		}
		else if (choose == 2)
		{
			stp();
		}
		else
		{
			s();
		}
	}
	void p()
	{
		int pick;
		std::cout << "1.Hinh vuong\n"
			<<"2.Hinh chu nhat\n"
			<<"3.Hinh tam giac\n"
			<<"4.Hinh tron\n"
			<<"5.Hinh thang\n"
			<<"6.Hinh thoi\n"
			<<"7.Hinh binh hanh\n"
			<<"0.Quay lai\n"
			<<"=>";
		std::cin >> pick;
		symbol();
		switch (pick)
		{

		case 0:
			toanhinh();
		case 1:
			double cv;
			std::cout << "Nhap so do canh:";
			std::cin >> cv;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			show = p_vuong(cv);
			symres();
			std::cout << "KQ:" << show << donvi << "\n";
			symbol();
			p();
			break;
		case 2:
			double cd, cr;
			std::cout << "Nhap so do chieu dai:";
			std::cin >> cd;
			std::cout << "Nhap so do chieu rong:";
			std::cin >> cr;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = p_chunhat(cd, cr);
			std::cout << "KQ:" << show << donvi << "\n";
			symbol();
			p();
			break;
		case 3:
			double c1, c2, c3;
			std::cout << "Nhap so do canh 1:";
			std::cin >> c1;
			std::cout << "Nhap so do canh 2:";
			std::cin >> c2;
			std::cout << "Nhap so do canh 3:";
			std::cin >> c3;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = p_tamgiac(c1, c2, c3);
			std::cout << "KQ:" << show << donvi << '\n';
			symbol();
			p();
			break;
		case 4:
			double dk;
			std::cout << "Nhap so do duong kinh:";
			std::cin >> dk;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = p_tron(dk);
			std::cout << "KQ:" << show << donvi << "\n";
			symbol();
			p();
			break;
		case 5:
			double a, b, c, d;
			std::cout << "Nhap so do canh 1:";
			std::cin >> a;
			std::cout << "Nhap so do canh 2:";
			std::cin >> b;
			std::cout << "Nhap so do canh 3:";
			std::cin >> c;
			std::cout << "Nhap so do canh 4:";
			std::cin >> d;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = p_thang(a,b,c,d);
			std::cout << "KQ:" << show << donvi << "\n";
			symbol();
			p();
			break;
		case 6:
			double ct;
			std::cout << "Nhap so do canh:";
			std::cin >> ct;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = p_vuong(ct);
			std::cout << "KQ:" << show << donvi << "\n";
			symbol();
			p();
			break;
			
		case 7:
			double cd2,cr2;
			std::cout<<"Nhap so do chieu dai:";
			std::cin>>cd2;
			std::cout<<"Nhap so do chieu rong:";
			std::cin>>cr2;
			std::cout<<"Nhap don vi:";
			std::cin>>donvi;
			symres();
			show = p_chunhat(cd2,cr2);
			std::cout<<"KQ:"<<show<<donvi<<"\n";
			symbol();
			p();
			break;
		}
	}
	void v()
	{
		int choose;
		std::cout << "1.Hinh chop tu giac deu\n"
			<< "2.Hinh lap phuong\n"
			<< "3.Hinh hop chu nhat \n"
			<< "4.Hinh lang tru dung\n"
			<< "0.Quay lai\n"
			<< "=>";
		std::cin >> choose;
		symbol();
		switch (choose)
		{
		case 0:
			toanhinh();
			break;
		case 1:
			std::cout << "Nhap dien tich day:";
			double sday2,cc2;
			std::cin >> sday2;
			std::cout << "Nhap so do chieu cao:";
			std::cin >> cc2;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = v_ctgd(sday2, cc2);
			std::cout << "KQ:" << show << donvi << "^3\n";
			symbol();
			v();
			break;
		case 2:
			double c;
			std::cout << "Nhap so do canh:";
			std::cin >> c;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = v_lp(c);
			std::cout << "KQ:" << show << donvi << "^3\n";
			symbol();
			v();
			break;
		case 3:
			double cd, cr, cch;
			std::cout << "Nhap so do chieu dai:";
			std::cin >> cd;
			std::cout << "Nhap so do chieu rong:";
			std::cin >> cr;
			std::cout << "Nhap so do chieu cao:";
			std::cin >> cch;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = v_hhcn(cd, cr, cch);
			std::cout << "KQ" << show << donvi << "^3\n";
			symbol();
			v();
			break;
		case 4:
			double sday, cc;
			std::cout << "Nhap dien tich day:";
			std::cin >> sday;
			std::cout << "Nhap chieu cao:";
			std::cin >> cc;
			std::cout << "Nhap don vi:";
			std::cin >> donvi;
			symres();
			show = v_ltd(sday, cc);
			std::cout << "KQ:" << show << donvi << "^3\n";
			symbol();
			v();
			break;
		}
	}
	//
};

void toanhinh()
{
	th *test = new th;
	int choose;
	std::cout
		<< "1.Tinh dien tich\n"
		<< "2.Tinh chu vi \n"
		<< "3.Tinh the tich \n"
		<< "4.Cac bai toan ve tam giac\n"
		<<"5.Cac bai tap lien quan den tu giac\n"
		<< "0.Quay lai \n"
		<< "=>";
	std::cin >> choose;
	symbol();
	if (choose == 1)
	{
		test->s();
	}
	else if (choose == 2)
	{
		test->p();
	}
	else if (choose == 3)
	{
		test->v();
	}
	else if (choose == 4)
	{
		test->tamgiac();
	}
	else if(choose == 5)
	{
		test->tugiac();
	}
	else if (choose == 0)
	{
		usr();
	}
	else
	{
		toanhinh();
	}
}
void usr()
{
	ts* main = new ts();
	int choose;
	std::cout << "1.So\n2.Hinh\n0.Thoat\n=>";
	std::cin >> choose;
	symbol();
	if (choose == 1)
	{
		main->toanso();
	}
	else if (choose == 2)
	{
		toanhinh();
	}
	else if (choose == 0)
	{
		exit(0);
	}
	else
	{
		usr();
	}
}
int main()
{
	symbol();
	std::cout << "Toan" <<"\n";
	symbol();
	usr();
}