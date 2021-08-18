// base class
class Cd
{
private:
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(const char * s1,const char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	~Cd();
	virtual void Report() const;
	virtual Cd & operator=(const Cd & d);
};

class Classic :public Cd
{
private:
	char * mainCom;
public:
	Classic(const char * s1, const char * s2, const char * s3, int n, double x);
	Classic(const Cd & d,char * s3);
	Classic(const Classic & d);
	Classic();
	~Classic();
	virtual void Report() const;
	virtual Classic & operator=(const Classic & d);
};