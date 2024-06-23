# FIFO

<ins>_**Experiment name:**_</ins> Implementation of the FIFO page replacement Algorithm.

<ins>_**Description:**_</ins>
This C++ program simulates the First In, First Out (FIFO) page replacement algorithm, which is used in operating systems to manage memory. The program starts by accepting user input for the number of pages (n), the capacity of the memory (capacity), and the page reference string (pages). It uses an unordered set (s) to keep track of the pages currently in memory and a queue (indexes) to maintain the order in which pages were loaded, adhering to the FIFO policy. The main loop iterates through each page in the reference string. If the memory has available capacity, it checks if the current page is already in memory. If not, the page is added to the memory, recorded in the queue, and the page fault counter (page_faults) is incremented. If the memory is full and the page is not in memory, the oldest page (the front of the queue) is removed from both the set and the queue, and the new page is added, following which the page fault counter is incremented. Finally, the program outputs the total number of page faults after processing all pages in the reference string. This implementation effectively demonstrates the FIFO page replacement policy, providing a clear and practical example of how this algorithm handles page faults in a constrained memory environment.

<ins>_**Input**_</ins>
The input required for the provided  FIFO page replacement code is as follows:
To provide input for this C++ program, follow these steps:
-	Number of Pages (n): Specify the total number of page references in the string.
-	Capacity of Memory (capacity): Specify the maximum number of pages that can be held in memory at one time.
-	Page Reference String (pages): Enter a sequence of integers representing the order in which pages are requested.
When you run the program, you will be prompted to enter these values. Here is the format in which you should provide the input:

-	First, enter the number of pages when prompted with "Enter the number of pages: ".
-	Next, enter the capacity of the memory when prompted with "Enter the capacity of the memory: ".
-	Finally, enter the page reference string, a sequence of integers separated by spaces, when prompted with "Enter the page reference string: ".
The program will then process the input using the FIFO page replacement algorithm and output the total number of page faults after processing all the pages in the reference string.


<ins>_**Output**_</ins>
The output of the provided FIFO page replacement code and the final result:
![image](https://github.com/simoon06/FIFO/assets/139492391/b0482e45-2296-4049-967e-b7dc8a24956b)
