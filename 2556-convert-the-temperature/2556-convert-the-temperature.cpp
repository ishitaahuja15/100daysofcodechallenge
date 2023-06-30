class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin;
        double fahrenheit;
        kelvin = celsius + 273.15;
        fahrenheit = celsius *1.80 + 32.00;
        vector<double> ans{kelvin,fahrenheit};
        return ans;

        //could've done ans.push_back(kelvin);
        //ans.push_back(fahrenheit)
    }
    
    
};