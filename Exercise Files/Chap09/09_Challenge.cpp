#include <iostream>
#include <fstream>
#include <vector>
#include <string>

const std::string nID = "0";
std::string epty = "Unknown";

class Stock
{
private:
    std::vector<std::string> stockID;
    std::vector<std::string> stockName;
    std::vector<std::string> stockDis;

public:
    Stock();
    Stock(const std::string id, const std::string & name, const std::string dis);
    ~Stock();
    void addStock(const std::string id, const std::string & name, const std::string dis);
    void displayStock();
};

Stock::Stock(): stockID({nID}), stockName({epty}), stockDis({epty})
{
}

Stock::Stock(const std::string id, const std::string & name, const std::string dis){
    stockID.insert(stockID.end(), id);
    stockName.insert(stockName.end(), name);
    stockDis.insert(stockDis.end(), dis);

    
}

Stock::~Stock()
{
}

void Stock::addStock(const std::string id, const std::string & name, const std::string dis){
    stockID.insert(stockID.end(), id);
    stockName.insert(stockName.end(), name);
    stockDis.insert(stockDis.end(), dis);
    if (stockID[0] == "0")
    {
        stockID.erase(stockID.begin());
        stockName.erase(stockName.begin());
        stockDis.erase(stockDis.begin());
    }
}

void Stock::displayStock(){
    for (int i = 0; i < stockID.size(); i++)
    {
        std::cout << "sku: " << stockID[i] << ", name: " << stockName[i] << ", desc: " 
        << stockDis[i] << std::endl;
    }
}

int main() {
    static const char * filename = "items.txt";
    std::ifstream infile(filename);
    Stock stockList;
    std::string id, name, dis;
    while (infile.good())
    {
        char buf[128] = {};
        char nameTemp[128] = {};
        char disTemp[128] = {};
        infile.getline(buf, sizeof(buf));
        std::string bufTemp = buf;
        size_t pos = bufTemp.rfind("\t");
        id = bufTemp[0];
        bufTemp.copy(nameTemp, pos - 2, 2);
        bufTemp.copy(disTemp, bufTemp.size() - pos, pos + 1);
        name = nameTemp;
        dis = disTemp;
        stockList.addStock(id, name, dis);
    }
    stockList.displayStock();
    infile.close();
    return 0;
}