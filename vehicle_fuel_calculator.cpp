#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    double distance, time, fuelEfficiency, fuelCostPerLiter;

    // 사용자 입력
    cout << "------------------------------" << endl;
    cout << " Vehicle Fuel Calculator " << endl;
    cout << "------------------------------" << endl;
    
    cout << "Enter the distance traveled (in kilometers): ";
    cin >> distance;

    cout << "Enter the time taken (in hours): ";
    cin >> time;

    cout << "Enter the fuel efficiency (in kilometers per liter): ";
    cin >> fuelEfficiency;

    // 기본 정보 출력
    cout << "\n------------------------------" << endl;
    cout << " Summary of Inputs " << endl;
    cout << "------------------------------" << endl;
    cout << "Distance: " << distance << " km" << endl;
    cout << "Time: " << time << " hours" << endl;
    cout << "Fuel Efficiency: " << fuelEfficiency << " km/l" << endl;

    // 평균 속도와 연료 소비량 계산
    double averageSpeed = distance / time;
    double fuelConsumed = distance / fuelEfficiency;

    // 계산 결과 출력
    cout << "\n------------------------------" << endl;
    cout << " Results " << endl;
    cout << "------------------------------" << endl;
    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Consumed: " << fuelConsumed << " liters" << endl;

    // 연료 비용 계산
    cout << "\nEnter the cost of fuel per liter: ";
    cin >> fuelCostPerLiter;

    double totalFuelCost = fuelConsumed * fuelCostPerLiter;
    cout << "\n------------------------------" << endl;
    cout << " Total Fuel Cost " << endl;
    cout << "------------------------------" << endl;
    cout << "Total Fuel Cost: " << totalFuelCost << " currency units" << endl;

    cout << "------------------------------" << endl;

    return 0;
}
