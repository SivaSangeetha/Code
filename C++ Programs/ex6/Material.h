
class Material:public Cloth
{
 int price;
 int discount;
 public:
	void getLength();
	int setMaterial(int);
        Material();
        Material(int,char*,int,int);
        Material(const Material &);
//        void read();
        void display();
        float computeDiscount();
};


