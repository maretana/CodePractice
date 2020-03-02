#include <string>
#include <vector>

class Rainfall
{
public:
    static double mean(std::string town, const std::string& strng);
    static double variance(std::string town, const std::string& strng);

private:
    static std::vector<double> getTownData(const std::string&, std::string);
};
