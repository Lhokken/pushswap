*This project has been created as part of the 42 curriculum by gcerrete*

# Push Swap
A program designed to sort a stack of casual integers. It accept a set of integers separated by space, as arguments whwn you launch the program.

## Description
The goal of this project is to create a program that sort casual stack of integers. There are some rules to follow:
1) There are two piles to stack numbers, pile A and pile B. At start all numberes are on the pile A. The goal is to return all numbers on pile A in ascending order.
2) These are the files that applies the various allowed operations:
<ul>ft_rule_sa.c: Swap the first element of stack A with the second element of stack A.</ul>
<ul>ft_rule_sb.c: Swap the first element of stack B with the second element of stack B.</ul>
<ul>ft_rule_ss.c: Swap the first element with the second element of both stacks.</ul> <ul>ft_rule_pa.c: Move the first element of stack B to the top of stack A.</ul>
<ul>ft_rule_pb.c: Move the first element of stack A to the top of stack B.</ul>
<ul>ft_rule_ra.c: Shift up all numbers in stack A, the first element moves to the bottom of stack A.</ul>
<ul>ft_rule_rb.c: Shift up all numbers in stack B, the first element moves to the bottom of stack B.</ul>
<ul>ft_rule_rr.c: Shift up all numbers in both stacks, the first elements move to the bottom of their respective stacks.</ul>
<ul>ft_rule_rra.c: Shift down all numbers in stack A, the last element moves to the top of stack A.</ul>
<ul>ft_rule_rrb.c: Shift down all numbers in stack B, the last element moves to the top of stack B.</ul>
<ul>ft_rule_rrr.c: Shift down all numbers in both stacks, the last elements move to the top of their respective stacks.</ul>

### Algorithm structure.
The very first operation replaces the original random numbers with integers starting from 1 upwards. This makes the sorting process much easier to visualize. At the beginning of the cycle, the function ft_min_set_sortarr generates a set of numbers selected from the lowest ones present in stack A. The aforementioned numbers are stored in the "sort" array, along with the minimum distance required to move them to the top of stack B and whether the most efficient path is upwards or downwards. The algorithm selects the number with the most convenient path and moves it to the top of stack B. At this point, 50% of these numbers are moved to the bottom of stack B. By repeating this cycle, stack B becomes roughly sorted, with the lowest numbers at the top or bottom and the mid-range numbers in the middle of the stack. When the sorting in the stack from the bottom resembles 100-99-98-97-etc., the process moves to the pushing phase back into stack A, which follows different rules. During each cycle, the algorithm searches stack B for the number equal to (top of stack A - 1) and moves it to the top of stack A.

### Search set selection
There is an optimization correlation between the size of the stack to be sorted and the number of elements to include in the sorting array. The following is a research on the average number of operations required to achieve the sorting. It is clearly evident that as one deviates from the optimal sorting array size, the number of necessary operations increases.

<table>
  <thead>
    <tr>
      <th>Set Size</th>
      <th>Stack 100</th>
      <th>Stack 500</th>
    </tr>
  </thead>
  <tbody>
    <tr><td>9</td><td>643</td><td>-</td></tr>
    <tr><td>10</td><td>638</td><td>-</td></tr>
    <tr><td>11</td><td>627</td><td>-</td></tr>
    <tr><td>12</td><td>619</td><td>-</td></tr>
    <tr><td>13</td><td>616</td><td>-</td></tr>
    <tr><td>14</td><td>616</td><td>-</td></tr>
    <tr><td>15</td><td>619</td><td>-</td></tr>
    <tr><td>16</td><td>627</td><td>-</td></tr>
    <tr><td>17</td><td>621</td><td>-</td></tr>
    <tr><td>18</td><td>648</td><td>-</td></tr>
    <tr><td>19</td><td>638</td><td>-</td></tr>
    <tr><td>20</td><td>-</td><td>-</td></tr>
    <tr><td>21</td><td>-</td><td>-</td></tr>
    <tr><td>22</td><td>-</td><td>-</td></tr>
    <tr><td>23</td><td>-</td><td>-</td></tr>
    <tr><td>24</td><td>-</td><td>-</td></tr>
    <tr><td>25</td><td>-</td><td>-</td></tr>
    <tr><td>26</td><td>-</td><td>5637</td></tr>
    <tr><td>27</td><td>-</td><td>5634</td></tr>
    <tr><td>28</td><td>-</td><td>5572</td></tr>
    <tr><td>29</td><td>-</td><td>5544</td></tr>
    <tr><td>30</td><td>-</td><td>5566</td></tr>
    <tr><td>31</td><td>-</td><td>5555</td></tr>
    <tr><td>32</td><td>-</td><td>5530</td></tr>
    <tr><td>33</td><td>-</td><td>5573</td></tr>
    <tr><td>34</td><td>-</td><td>5575</td></tr>
    <tr><td>35</td><td>-</td><td>5581</td></tr>
  </tbody>
</table>

## Instructions
1) make: Compiles the libraries with the main file. The executable name is push_swap.
2) make clean: Removes temporary object files (*.o).
3) make fclean: Removes all compiled files, including the executable and libraries.
4) make test100: Runs a single test on a set of 100 random numbers.
5) make test50x: Runs 200 tests on a set of 50 numbers and calculates the average number of operations.
6) make test100x: Runs 500 tests on a set of 100 numbers and calculates the average.
7) make test500x: Runs 500 tests on a set of 500 numbers and calculates the average.

It is possible to customize the output by setting the following parameters in libftpush:
1) PRINTRULE: Set to 1 to print each operation applied (e.g., sa, pb).
2) PRINTOTALMOVES: Set to 1 to print the total number of operations, calculated via an internal counter.
3) PRINTORDSTACK: Set to 1 to print the final sorted stack.
4) PRINTALGO: Set to 1 to visualize the sorting process step by step.

## Resources
The logic behind the solution was implemented entirely by me without searching for existing algorithms online. I received guidance from fellow students regarding technical issues related to read, open, and malloc.

I used Gemini AI with the following custom instruction: "Quando chiedo delucidazioni in ambito programmazione software, non darmi direttamente la soluzione." (Translated: "When I ask for clarification regarding software programming, do not give me the solution directly.")

I also utilized Gemini AI to debug persistent errors when I was stuck for an extended period.