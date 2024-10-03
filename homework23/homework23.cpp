#include <iostream>
#include <string>

using namespace std;

//2-ci
//void fillArrayWithRandomNumbers(int* array, int size, int min, int max) {
//    srand(time(0));
//    for (int i = 0; i < size; ++i) {
//        array[i] = rand() % (max - min + 1) + min;
//    }
//}
//void fillArrayWithRandomNumbers(double* array, int size, double min, double max) {
//    srand(time(0));
//    for (int i = 0; i < size; ++i) {
//        array[i] = min + (rand() * (1.0 / RAND_MAX)) * (max - min);
//    }
//}
//void fillArrayWithRandomNumbers(float* array, int size, float min, float max) {
//    srand(time(0));
//    for (int i = 0; i < size; ++i) {
//        array[i] = min + (rand() * (1.0f / RAND_MAX)) * (max - min); 
//    }
//}
//void fillArrayWithRandomNumbers(char* array, int size, char min, char max) {
//    srand(time(0)); 
//    for (int i = 0; i < size; ++i) {
//        array[i] = (rand() % (max - min + 1)) + min; 
//    }
//}





//3-cu
//void printArray(const int* array, int size) {
//    cout << "Int massiv: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//void printArray(const double* array, int size) {
//    cout << "Double massiv: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//void printArray(const float* array, int size) {
//    cout << "Float massiv: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//void printArray(const char* array, int size) {
//    cout << "Char massiv: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}




//4-cu
//void bubbleSort(int* array, int size, bool ascending) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if ((ascending && array[j] > array[j + 1]) || (!ascending && array[j] < array[j + 1])) {
//                swap(array[j], array[j + 1]);
//            }
//        }
//    }
//}
//void bubbleSort(double* array, int size, bool ascending) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if ((ascending && array[j] > array[j + 1]) || (!ascending && array[j] < array[j + 1])) {
//                swap(array[j], array[j + 1]);
//            }
//        }
//    }
//}
//void bubbleSort(float* array, int size, bool ascending) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if ((ascending && array[j] > array[j + 1]) || (!ascending && array[j] < array[j + 1])) {
//                swap(array[j], array[j + 1]);
//            }
//        }
//    }
//}
//void bubbleSort(char* array, int size, bool ascending) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if ((ascending && array[j] > array[j + 1]) || (!ascending && array[j] < array[j + 1])) {
//                swap(array[j], array[j + 1]);
//            }
//        }
//    }
//}
//void printArray(const int* array, int size) {
//    cout << "Int massiv: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//void printArray(const double* array, int size) {
//    cout << "Double massiv: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//void printArray(const float* array, int size) {
//    cout << "Float massiv: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//void printArray(const char* array, int size) {
//    cout << "Char massiv: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}







//5-ci
//int findElement(const int* array, int size, int target) {
//    for (int i = 0; i < size; ++i) {
//        if (array[i] == target) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int findElement(const double* array, int size, double target) {
//    for (int i = 0; i < size; ++i) {
//        if (array[i] == target) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int findElement(const float* array, int size, float target) {
//    for (int i = 0; i < size; ++i) {
//        if (array[i] == target) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int findElement(const char* array, int size, char target) {
//    for (int i = 0; i < size; ++i) {
//        if (array[i] == target) {
//            return i;
//        }
//    }
//    return -1;
//}


//6-ci
//int findMin(const int* array, int size) {
//    int minElement = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] < minElement) {
//            minElement = array[i];
//        }
//    }
//    return minElement;
//}
//double findMin(const double* array, int size) {
//    double minElement = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] < minElement) {
//            minElement = array[i];
//        }
//    }
//    return minElement;
//}
//float findMin(const float* array, int size) {
//    float minElement = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] < minElement) {
//            minElement = array[i];
//        }
//    }
//    return minElement;
//}
//char findMin(const char* array, int size) {
//    char minElement = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] < minElement) {
//            minElement = array[i];
//        }
//    }
//    return minElement;
//}





//7-CI
//int findMax(const int* array, int size) {
//    int maxElement = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] > maxElement) {
//            maxElement = array[i];
//        }
//    }
//    return maxElement;
//}
//double findMax(const double* array, int size) {
//    double maxElement = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] > maxElement) {
//            maxElement = array[i];
//        }
//    }
//    return maxElement;
//}
//float findMax(const float* array, int size) {
//    float maxElement = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] > maxElement) {
//            maxElement = array[i];
//        }
//    }
//    return maxElement;
//}




//8-ci
//void shiftRight(int* array, int size, int shift) {
//    shift = shift % size;
//    int* temp = new int[size];
//    for (int i = 0; i < size; ++i) {
//        temp[(i + shift) % size] = array[i];
//    }
//    for (int i = 0; i < size; ++i) {
//        array[i] = temp[i];
//    }
//    delete[] temp;
//}
//void shiftRight(double* array, int size, int shift) {
//    shift = shift % size;
//    double* temp = new double[size];
//    for (int i = 0; i < size; ++i) {
//        temp[(i + shift) % size] = array[i];
//    }
//    for (int i = 0; i < size; ++i) {
//        array[i] = temp[i];
//    }
//    delete[] temp;
//}
//void shiftRight(float* array, int size, int shift) {
//    shift = shift % size;
//    float* temp = new float[size];
//    for (int i = 0; i < size; ++i) {
//        temp[(i + shift) % size] = array[i];
//    }
//    for (int i = 0; i < size; ++i) {
//        array[i] = temp[i];
//    }
//    delete[] temp;
//}
//void printArray(const int* array, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//void printArray(const double* array, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//void printArray(const float* array, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}




int main()
{
    //2-ci
    //int sizeInt, sizeDouble, sizeFloat, sizeChar;
    //int minInt, maxInt;
    //double minDouble, maxDouble;
    //float minFloat, maxFloat;
    //char minChar, maxChar;
    //cout << "Int massivinin olcusunu daxil edin: ";
    //cin >> sizeInt;
    //cout << "Minimum deyeri daxil edin: ";
    //cin >> minInt;
    //cout << "Maksimum deyeri daxil edin: ";
    //cin >> maxInt;
    //int* intArray = new int[sizeInt];
    //fillArrayWithRandomNumbers(intArray, sizeInt, minInt, maxInt);
    //cout << "Doldurulmus int massiv: ";
    //for (int i = 0; i < sizeInt; ++i) {
    //    cout << intArray[i] << " ";
    //}
    //cout << endl;
    //delete[] intArray;
    //cout << "Double massivinin olcusunu daxil edin: ";
    //cin >> sizeDouble;
    //cout << "Minimum deyeri daxil edin: ";
    //cin >> minDouble;
    //cout << "Maksimum deyeri daxil edin: ";
    //cin >> maxDouble;
    //double* doubleArray = new double[sizeDouble];
    //fillArrayWithRandomNumbers(doubleArray, sizeDouble, minDouble, maxDouble);
    //cout << "Doldurulmus double massiv: ";
    //for (int i = 0; i < sizeDouble; ++i) {
    //    cout << doubleArray[i] << " ";
    //}
    //cout << endl;
    //delete[] doubleArray;
    //cout << "Float massivinin olcusunu daxil edin: ";
    //cin >> sizeFloat;
    //cout << "Minimum deyeri daxil edin: ";
    //cin >> minFloat;
    //cout << "Maksimum deyeri daxil edin: ";
    //cin >> maxFloat;
    //float* floatArray = new float[sizeFloat];
    //fillArrayWithRandomNumbers(floatArray, sizeFloat, minFloat, maxFloat);
    //cout << "Doldurulmus float massiv: ";
    //for (int i = 0; i < sizeFloat; ++i) {
    //    cout << floatArray[i] << " ";
    //}
    //cout << endl;
    //delete[] floatArray;
    //cout << "Char massivinin olcusunu daxil edin: ";
    //cin >> sizeChar;
    //cout << "Minimum deyeri daxil edin (a-z): ";
    //cin >> minChar;
    //cout << "Maksimum deyeri daxil edin (a-z): ";
    //cin >> maxChar;
    //char* charArray = new char[sizeChar];
    //fillArrayWithRandomNumbers(charArray, sizeChar, minChar, maxChar);
    //cout << "Doldurulmus char massiv: ";
    //for (int i = 0; i < sizeChar; ++i) {
    //    cout << charArray[i] << " ";
    //}
    //cout << endl;




    //3-cu
    //int intArray[] = { 1, 2, 3, 4, 5 };
    //int sizeInt = sizeof(intArray) / sizeof(intArray[0]);
    //printArray(intArray, sizeInt);
    //double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    //int sizeDouble = sizeof(doubleArray) / sizeof(doubleArray[0]);
    //printArray(doubleArray, sizeDouble);
    //float floatArray[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };
    //int sizeFloat = sizeof(floatArray) / sizeof(floatArray[0]);
    //printArray(floatArray, sizeFloat);
    //char charArray[] = { 'a', 'b', 'c', 'd', 'e' };
    //int sizeChar = sizeof(charArray) / sizeof(charArray[0]);
    //printArray(charArray, sizeChar);



    //4-cu
    //int intArray[] = { 5, 3, 8, 6, 2 };
    //int sizeInt = sizeof(intArray) / sizeof(intArray[0]);
    //cout << "Int massiv: ";
    //printArray(intArray, sizeInt);
    //bubbleSort(intArray, sizeInt, true); 
    //cout << "Artana siralanmis int massiv: ";
    //printArray(intArray, sizeInt);
    //double doubleArray[] = { 5.5, 3.3, 8.8, 6.6, 2.2 };
    //int sizeDouble = sizeof(doubleArray) / sizeof(doubleArray[0]);
    //cout << "Double massiv: ";
    //printArray(doubleArray, sizeDouble);
    //bubbleSort(doubleArray, sizeDouble, false); 
    //cout << "Azalana siralanmis double massiv: ";
    //printArray(doubleArray, sizeDouble);
    //float floatArray[] = { 5.5f, 3.3f, 8.8f, 6.6f, 2.2f };
    //int sizeFloat = sizeof(floatArray) / sizeof(floatArray[0]);
    //cout << "Float massiv: ";
    //printArray(floatArray, sizeFloat);
    //bubbleSort(floatArray, sizeFloat, true); 
    //cout << "Artana siralanmis float massiv: ";
    //printArray(floatArray, sizeFloat);
    //char charArray[] = { 'e', 'd', 'c', 'b', 'a' };
    //int sizeChar = sizeof(charArray) / sizeof(charArray[0]);
    //cout << "Char massiv: ";
    //printArray(charArray, sizeChar);
    //bubbleSort(charArray, sizeChar, false); 
    //cout << "Azalana siralanmis char massiv: ";
    //printArray(charArray, sizeChar);



    //5-ci
    //int intArray[] = { 10, 20, 30, 40, 50 };
    //int sizeInt = sizeof(intArray) / sizeof(intArray[0]);
    //int targetInt = 30;
    //int indexInt = findElement(intArray, sizeInt, targetInt);
    //cout << "Int massivdə " << targetInt << " ədədi "
    //<< (indexInt != -1 ? indexInt : -1) << " indeksində tapıldı." << endl;

    //double doubleArray[] = { 10.1, 20.2, 30.3, 40.4, 50.5 };
    //int sizeDouble = sizeof(doubleArray) / sizeof(doubleArray[0]);
    //double targetDouble = 30.3;
    //int indexDouble = findElement(doubleArray, sizeDouble, targetDouble);
    //cout << "Double massivdə " << targetDouble << " ədədi "<< (indexDouble != -1 ? to_string(indexDouble) : "tapılmadı") << " indeksində tapıldı." << endl;

    //float floatArray[] = { 10.1f, 20.2f, 30.3f, 40.4f, 50.5f };
    //int sizeFloat = sizeof(floatArray) / sizeof(floatArray[0]);
    //float targetFloat = 40.4f;
    //int indexFloat = findElement(floatArray, sizeFloat, targetFloat);
    //cout << "Float massivdə " << targetFloat << " ədədi "
    //<< (indexFloat != -1 ? to_string(indexFloat) : "tapılmadı") << " indeksində tapıldı." << endl;

    //char charArray[] = { 'a', 'b', 'c', 'd', 'e' };
    //int sizeChar = sizeof(charArray) / sizeof(charArray[0]);
    //char targetChar = 'c';
    //int indexChar = findElement(charArray, sizeChar, targetChar);
    //cout << "Char massivdə '" << targetChar << "' ədədi "
    //<< (indexChar != -1 ? indexChar : -1) << " indeksində tapıldı." << endl;






    //6-ci
    //int intArray[] = { 10, 20, 5, 40, 50 };
    //cout << "Int massivde en kicik element: " << findMin(intArray, 5) << endl;
    //double doubleArray[] = { 10.1, 20.2, 5.5, 40.4, 50.5 };
    //cout << "Double massivde en kicik element: " << findMin(doubleArray, 5) << endl;
    //float floatArray[] = { 10.1f, 20.2f, 5.5f, 40.4f, 50.5f };
    //cout << "Float massivde en kicik element: " << findMin(floatArray, 5) << endl;
    //char charArray[] = { 'e', 'd', 'c', 'a', 'b' };
    //cout << "Char massivde en kicik element: '" << findMin(charArray, 5) << "'" << endl;




    //7-CI
    //int intArray[] = { 10, 20, 5, 40, 50 };
    //cout << "Int massivde en boyuk element: " << findMax(intArray, 5) << endl;
    //double doubleArray[] = { 10.1, 20.2, 5.5, 40.4, 50.5 };
    //cout << "Double massivde en boyuk element: " << findMax(doubleArray, 5) << endl;
    //float floatArray[] = { 10.1f, 20.2f, 5.5f, 40.4f, 50.5f };
    //cout << "Float massivde en boyuk element: " << findMax(floatArray, 5) << endl;






    //8-ci
    //int intArray[] = { 1, 2, 3, 4, 5 };
    //int sizeInt = sizeof(intArray) / sizeof(intArray[0]);
    //int shiftIndexInt = 2;
    //shiftRight(intArray, sizeInt, shiftIndexInt);
    //cout << "Int massiv surusdukden sonra: ";
    //printArray(intArray, sizeInt);
    //double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    //int sizeDouble = sizeof(doubleArray) / sizeof(doubleArray[0]);
    //int shiftIndexDouble = 2;
    //shiftRight(doubleArray, sizeDouble, shiftIndexDouble);
    //cout << "Double massiv surusdukden sonra: ";
    //printArray(doubleArray, sizeDouble);
    //float floatArray[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };
    //int sizeFloat = sizeof(floatArray) / sizeof(floatArray[0]);
    //int shiftIndexFloat = 2;
    //shiftRight(floatArray, sizeFloat, shiftIndexFloat);
    //cout << "Float massiv surusdukden sonra: ";
    //printArray(floatArray, sizeFloat);
}
