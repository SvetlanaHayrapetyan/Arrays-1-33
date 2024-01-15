//1. Տրված է ամբողջ թվերի հաջորդականություն: Արտածել այդ
//հաջորդականության
//ա) [-5,10] միջակայքին պատկանող տարրերի քանակը,
#include <iostream>
using namespace std;

int main()
{
    const int count = 6;
    int arr[count]{2, -10, -4, 100, 9, 3};
    
    int count_elements = 0;
    for (int i = 0; i < count; i++)
    {
        if(arr[i] >= -5 && arr[i] <=10)
        count_elements++;
                 
    }
       cout << count_elements << endl;

    return 0;
}


//բ) դրական և կենտ տարրերի քանակը,
#include <iostream>
using namespace std;

int main()
{
    const int count = 6;
    int arr[count]{2, -10, -4, 100, 9, 3};
    
    int count_elements = 0;
    for (int i = 0; i < count; i++)
    {
        int odd = arr[i] % 2;
        if(arr[i] > 0 && odd == 1 )
        count_elements++;
                 
    }
       cout << count_elements << endl;

    return 0;
}


//գ) 5-ից մեծ զույգ տարրերի գումարը,
#include <iostream>
using namespace std;

int main()
{
    const int count = 6;
    int arr[count]{2, -10, -4, 100, 9, 3};
    
    int count_elements = 0;
    for (int i = 0; i < count; i++)
    {
        int odd = arr[i] % 2;
        if(arr[i] > 5 && odd == 0 )
        count_elements++;
                 
    }
       cout << count_elements << endl;

    return 0;
}

//դ) 15-ից փոքր և 3-ին պատիկ տարրերի արտադրյալը,
#include <iostream>
using namespace std;

int main()
{
    const int count = 6;
    int arr[count]{2, -10, -4, 100, 9, 3};

    int multiplication = 1;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] < 15 && !(arr[i] % 3))
            multiplication *= arr[i];
    }
    cout << multiplication << endl;

    return 0;
}


//ե) բոլոր տարրերի միջին թվաբանականը,
#include <iostream>
using namespace std;

int main()
{
    const int count = 6;
    int arr[count]{2, -10, -4, 100, 40, 3};
    
    
    float sum = 0;
    float arithmetic_average;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
     arithmetic_average = sum / count;
      
    }
    cout << arithmetic_average << endl;
      

    return 0;
}

//զ) բացասական և 7-ին պատիկ տարրերի միջին թվաբանականը,
#include <iostream>
using namespace std;

int main()
{
    const int count = 6;
    int arr[count]{2, -10, -4, 100, -49, -7};
    
    
    float sum = 0;
    float arithmetic_average;
    int count1 = 0;
    for (int i = 0; i < count; i++)
    {
        if(arr[i] < 0 && !(arr[i] % 7)){
            
        sum += arr[i];
        count1++;
        arithmetic_average = sum / count1;
        }
        
    }
    cout << arithmetic_average << endl;
      

    return 0;
}

//է) 3-ով սկսվող թվերի քանակը,
#include <iostream>

int apengold(int arr[], int size ) {
    int count = 0;

    for (int i = 0; i < size; ++i) {
        
        int first_digit = arr[i];
        while (first_digit >= 10) {
            first_digit /= 10;
        }


        if (first_digit == 3) {
            count++;
        }
    }

    return count;
}

int main() {
   
    int arr[] = {2, 30, -4, 100, 9, 30090};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = apengold(arr, size);

    std::cout << count << std::endl;

    return 0;
}

//ը) բոլոր զույգ դրական տարրերը, այնուհետև բոլոր բացասական տարրերը:
#include <iostream>

void Positive(int arr[], int size) {
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0 && arr[i] % 2 == 0) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}

void Negative(int arr[], int size) {
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            std::cout <<arr[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    
    int arr[] = {2, 30, -4, 100, 9, -5, 30090};
    int size = sizeof(arr) / sizeof(arr[0]);

    
    Positive(arr, size);

    Negative(arr, size);

    return 0;
}
