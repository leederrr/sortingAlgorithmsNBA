# sortingAlgorithmsNBA
## Overview
> All sorting analysis was done in this markdown file. The code, which can be found in this repository, was programmed in C++.
>
> 
> This data set represents the NBA player performance statistics from the 1996 to 2021 basketball seasons. There are repeats in the players (i.e., if they played for a different team). See <https://www.kaggle.com/datasets/justinas/nba-players-data> for more information on the dataset/data collection. 

#### File fields with their abbreviations:
>
>num_order: unique integer serial number list
>
>player_name: name of the NBA player
>
>team_abbreviation: abbreviation of the team name the player most recently had played for 
>
>age: age of the player
>
>player_height: height of the player (in centimeters)
>
>gp: the number of games played throughout the season
>
>reb: average number of rebounds grabbed 
>
>ast: average number of assists
>
### Bubble Sort
> The number of reads and writes for Bubble Sort in vectors sizes 1000 through 100 are as follows:

| Vector Size | Reads | Writes |
|-------------|-------|--------|
|1000         |1460982| 464952 |
|900          |1189360| 380910 |
|800          |940576 | 301466 |
|700          |717410 | 228490 |
|600          |524466 | 165108 |
|500          |365618 | 116358 |
|400          |235916 | 76868  |
|300          |131908 | 42480  |
|200          |58372  | 18782  |
|100          |14360  | 4502   |

![bubblesort](https://user-images.githubusercontent.com/123017721/230112975-4c9091ec-d2bc-48fb-b116-63a21debea6e.jpg)

###### Vector of custom class
> Bubble Sort has 224535176 reads and 73146446 writes
> 
> Bubble sort has a best runtime of O(n) which is linear, and an average & worst runtime of O(N<sup>2</sup>) which is quadratic. O(n) or linear complexity increases linearly and in proportion to the number of inputs of size n. This just means that the algorithm will increase proportionally with the amount of inputs increased. Quadratic runtime means that the runtime of an algorithm is directly proportional to the square of the size of the input, which is not great since it is generally quite slow. Bubble Sort has a space complexity of O(1), which means that the amount of memory used is constant and does not depend on the data that is processed.


### Selection Sort
> The number of reads and writes for Selection Sort in vectors sizes 1000 through 100 are as follows:

| Vector Size | Reads | Writes |
|-------------|-------|--------|
|1000         |1000998|  1998  |
|900          |810898 |  1798  |
|800          |640798 |  1598  |
|700          |490698 |  1398  |
|600          |360598 |  1198  |
|500          |250498 |  998   |
|400          |160398 |  798   |
|300          |90298  |  598   |
|200          |40198  |  398   |
|100          |10098  |  198   |

![selectionsort](https://user-images.githubusercontent.com/123017721/230112906-07e67bdd-5cb5-46bf-88bd-06b769ca17b1.jpg)

###### Vector of custom class
> Selection Sort has 151425328 reads and 24608 writes
>
> Selection sort had the lowest amount of writes of any other algorithm. This is true for both the resized vector and the entire dataset. Selection sort has a best, average, and worst run case time of O(N<sup>2</sup>) which is quadratic. Quadratic runtime means that the runtime of an algorithm is directly proportional to the square of the size of the input, which is not great since it is generally quite slow. This could be an explanation as to why there were a low amount of writes for this sort, given that the sorting algorithm has a quadratic runtime. Selection Sort has a space complexity of O(1), which means that the amount of memory used is constant and does not depend on the data that is processed.

### Merge Sort
> The number of reads and writes for Merge Sort in vectors sizes 1000 through 100 are as follows:

| Vector Size | Reads | Writes |
|-------------|-------|--------|
|1000         |27354  | 18665  |
|900          |24334  | 16605  |
|800          |21282  | 14529  |
|700          |18190  | 12433  |
|600          |15158  | 10367  |
|500          |12212  | 8350   |
|400          |9448   | 6468   |
|300          |6712   | 4600   |
|200          |4142   | 2843   |
|100          |1778   | 1225   |

![mergesort](https://user-images.githubusercontent.com/123017721/230150108-40287a77-6f2b-40f1-b6ad-4ea4e97c227f.png)

###### Vector of custom class
> Merge Sort has 471583 reads and 168191 writes
>
> Merge sort had the lowest amount of reads of any other algorithm. Merge Sort has a best, average, and worst case run time of O(n log(n)) and a linear space complexity of O(n). O(n log n) or loglinear complexity means that logn operations will occur n times. A space complexity of O(n) means the proportion to the number of items. 

### Heap Sort
> The number of reads and writes for Heap Sort in vectors sizes 1000 through 100 are as follows:
>
| Vector Size | Reads | Writes |
|-------------|-------|--------|
|1000         |449695 | 169117 |
|900          |363429 | 136368 |
|800          |291273 | 107517 |
|700          |224486 | 82421  |
|600          |170044 | 63316  |
|500          |120305 | 44522  |
|400          |77803  | 28363  |
|300          |47337  | 17472  |
|200          |22276  | 8347   |
|100          |6142   | 2299   |

![heapsort](https://user-images.githubusercontent.com/123017721/230112812-0c5f59b0-cae8-44c9-9877-2c6f9ff10eb3.jpg)

###### Vector of custom class
> Heap Sort has 60062775 reads and 22209027 writes
> Heap sort has a best, average, and worst case run time of O(n log(n)) and a linear space complexity of O(1). O(n log n) or loglinear complexity means that logn operations will occur n times. A space complexity of O(1) which means that the amount of memory used is constant and does not depend on the data that is processed.
> 
> 
### Two Sort
> The number of reads and writes for Two Sort in vectors sizes 1000 through 100 are as follows:

| Vector Size | Reads | Writes |
|-------------|-------|--------|
|1000         |2001996|  3996  |
|900          |1621796|  3596  |
|800          |1281596|  3196  |
|700          |981396 |  2796  |
|600          |721196 |  2396  |
|500          |500996 |  1996  |
|400          |320796 |  1596  |
|300          |180596 |  1196  |
|200          |80396  |  796   |
|100          |20196  |  396   |

![two_sort](https://user-images.githubusercontent.com/123017721/230112545-8291a17a-23b9-473e-beb9-6b9edc4349a9.jpg)

###### Vector of custom class
> Two Sort has 302850656 reads and 49216 writes.
