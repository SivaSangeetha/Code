class Cloth
{
 int cloth;
 char* Name;
 int price;
 char* colour;
 public:
      
	void setNo(int);
	int getNo();
	void setName(char*);
	char* getName();
	void setPrice(int);
	int getPrice();
	void setColour(char*);
	char* getColour();
	Cloth();
	Cloth(int,int,char*,char*);
	Cloth(const Cloth &);
        ~Cloth();
	friend void display();
};
	
