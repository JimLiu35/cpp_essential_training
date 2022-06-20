#include <cstdio>
// #include <string>
#include <cstring>

// const char ety = "Unknown";
const size_t strsize = 1024;
const char * ety = "Unknown";
const char * nID = "0";

class Stock
{
private:
    char stockID[strsize] = {};
    char stockName[strsize] = {};
    char stockDis[strsize] = {};
public:
    Stock();
    Stock(const char & ID, const char & Name, const char & Dis);
    char * getID();
    char * getName();
    char * getDis();
    void setID( const char * ID );
    void setName( const char * Name );
    void setDis( const char * Dis );
    void stockDisplay();
    ~Stock();
};

Stock::Stock()
{
    strncpy(stockID, nID, 1);
    strncpy(stockName, ety, strsize);
    strncpy(stockDis, ety, strsize);
}

Stock::Stock(const char & ID, const char & Name, const char & Dis)
{
    strncpy(stockID, &ID, (size_t) 1);
    strncpy(stockName, &Name, strsize);
    strncpy(stockDis, &Dis, strsize);
}

Stock::~Stock()
{

}

char * Stock::getID() {return stockID;}
char * Stock::getName() {return stockName;}
char * Stock::getDis() {return stockDis;}
void Stock::setID( const char * ID) {
    strncpy(stockID, ID, (size_t) 1);
}
void Stock::setName( const char * Name) {
    strncpy(stockName, Name, strsize);
}
void Stock::setDis( const char * Dis) {
    strncpy(stockDis, Dis, strsize);
}
void Stock::stockDisplay() {
    printf("sku: %s, name: %s, desc: %s", stockID, stockName, stockDis);
}

int main() {
    const char * fileName = "items.txt";
    char * sID;
    char * sName;
    char * sDis;
    Stock i1, i2, i3, i4;
    puts("Reading file");
    FILE * fr = fopen(fileName, "r");
    char buffer[1024];
    // const char * nTerm = '\0';
    while (fgets(buffer, 1024, fr))
    {
        static int index = 1;
        char * cp = strrchr(buffer, '\t');
        char idTemp[strsize] = {};
        char nameTemp[strsize] = {};
        char disTemp[strsize] = {};
        // strncpy(idTemp, buffer, 1);
        idTemp[0] = buffer[0];
        sID = idTemp;
        strncpy(nameTemp, buffer, cp - buffer);
        sName = nameTemp + 2;
        strcpy(disTemp, buffer);
        sDis = disTemp + (cp - buffer) + 1;
        // printf("%c\n", *sID);
        // printf("%c\n", sName);

        fputs(sName, stdout);
        printf("\n");
        if (index == 1)
        {
            i1.setID(sID);
            i1.setName(sName);
            i1.setDis(sDis);
        }
        else if (index == 2)
        {
            i2.setID(sID);
            i2.setName(sName);
            i2.setDis(sDis);
        }
        else if (index == 3)
        {
            i3.setID(sID);
            i3.setName(sName);
            i3.setDis(sDis);
        }
        else
        {
            i4.setID(sID);
            i4.setName(sName);
            i4.setDis(sDis);
        }
        index++;
    }
    i1.stockDisplay();
    i2.stockDisplay();
    i3.stockDisplay();
    i4.stockDisplay();
    return 0;
}