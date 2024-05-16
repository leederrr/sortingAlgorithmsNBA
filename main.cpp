#include "bubbleSort.h"
#include "heapSort.h"
#include "mergeSort.h"
#include "selectionSort.h"
#include "twoSort.h"
#include "printVec.h"
#include "NBA.h"

using namespace std;

/**
 * @return : the total read and write counts for each sorting algorithm
 */
int main() {
    int read, write = 0;
    std::vector<NBA> players;
    std::string fn = "../nba_seasons.csv"; // opening custom data set file
    //vector <int> numbers = {22, 13, 6, 22, 4, 67, 13};

    if (loadFromFile(fn, players)) {
        // Bubble Sort reads and writes
        read = 0;
        write = 0;
        bubbleSort(players, read, write);
        std::cout << "Bubble Sort has " << read << " reads and " << write << " writes.\n" << endl;

        // Selection Sort reads and writes
        read = 0;
        write = 0;
        selectionSort(players, read, write);
        std::cout << "Selection Sort has " << read << " reads and " << write << " writes.\n" << endl;

        // Merge Sort reads and writes
        read = 0;
        write = 0;
        mergeSort(players, read, write);
        std::cout << "Merge Sort has " << read << " reads and " << write << " writes.\n" << endl;

        // Heap Sort reads and writes
        read = 0;
        write = 0;
        heapSort(players, read, write);
        std::cout << "Heap Sort has " << read << " reads and " << write << " writes.\n" << endl;

        // Two Sort reads and writes
        read = 0;
        write = 0;
        twoSort(players, read, write);
        std::cout << "Two Sort has " << read << " reads and " << write << " writes.\n" << endl;

    }
    ofstream outFile;
    outFile.open("../auxillary.txt");

        // Resize the vector 1000 to 100 for Bubble Sort
        for (int i = 1000; i > 0; i -= 100) {
            read = 0;
            write = 0;
            players.resize(i);
            bubbleSort(players, read, write);
            outFile << "Vector of " << i << " for Bubble Sort\nReads: " << read << "\nWrites: " << write << "\n" << endl;
        }

        // Resize the vector 1000 to 100 for Selection Sort
        for (int i = 1000; i > 0; i -= 100) {
            read = 0;
            write = 0;
            players.resize(i);
            selectionSort(players, read, write);
            outFile << "Vector of " << i << " for Selection Sort\nReads: " << read << "\nWrites: " << write << "\n" << endl;
        }

        // Resize the vector 1000 to 100 for Merge Sort
        for (int i = 1000; i > 0; i -= 100) {
            read = 0;
            write = 0;
            players.resize(i);
            mergeSort(players, read, write);
            outFile << "Vector of " << i << " for Merge Sort\nReads: " << read << "\nWrites: " << write << "\n" << endl;
        }

        // Resize the vector 1000 to 100 for Heap Sort
        for (int i = 1000; i > 0; i -= 100) {
            read = 0;
            write = 0;
            players.resize(i);
            heapSort(players, read, write);
            outFile << "Vector of " << i << " for Heap Sort\nReads: " << read << "\nWrites: " << write << "\n" << endl;
        }

        // Resize the vector 1000 to 100 for Two Sort
        for (int i = 1000; i > 0; i -= 100) {
            read = 0;
            write = 0;
            players.resize(i);
            twoSort(players, read, write);
            outFile << "Vector of " << i << " for Two Sort\nReads: " << read << "\nWrites: " << write << "\n" << endl;
        }
        return 0;
    }
