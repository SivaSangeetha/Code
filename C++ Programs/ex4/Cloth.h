class Cloth
{
 int cloth;
 char* Name;
 int price;
 static int object;
 static int no;
 char* colour;
 static int NextClothNo;
 static int NoOfObj;
 public:

        void setNo(int);
        int getNo();
        void setName(char*);
        char* getName();
        void setPrice(int);
        int getPrice();
        void setColour(char*);
	char* getColour();
	void setNoOfObj(int);
 static	int getNoOfObj();
	void setNextClothNo(int);
 static	int getNextClothNo();
 
	Cloth(char *,int);
        Cloth();
        Cloth(int,char*,char*);
        Cloth(const Cloth &);
        ~Cloth();
        friend void display();
};

