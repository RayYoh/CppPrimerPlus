#include <iostream>
using namespace std;
class abcDMA
{
private:
	char * label;
	int rating;
public:
	abcDMA(const char * l = "null", int r = 0);
	abcDMA(const abcDMA & rs);
	virtual ~abcDMA();
	abcDMA & operator=(const abcDMA & rs);
	friend ostream & operator<<(ostream & os, const abcDMA & rs);
	virtual void view() const = 0;
};
// Basing Class Using DMA
class baseDMA:public abcDMA
{
public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	virtual void view() const ;
};

class lacksDMA : public abcDMA
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
	lacksDMA(const char * c, const abcDMA & rs);
	friend ostream & operator <<(ostream & os, const lacksDMA & rs);
	virtual void view()const;
};

class hasDMA : public abcDMA
{
private:
	char * style;
public:
	hasDMA(const char *s = "none", const char * l = "null", int r = 0);
	hasDMA(const char * s, const abcDMA & rs);
	hasDMA(const hasDMA & hs);
	~hasDMA();
	hasDMA & operator=(const hasDMA & rs);
	friend ostream & operator<<(ostream & os, const hasDMA & rs);
	virtual void view()const;
};