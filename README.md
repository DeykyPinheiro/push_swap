<h1 align="center">push_swap</h1>

push swap is a project where you receive a stack of random integers in a list and you have to sort from list A to list B following a series of rules, the idea of the project is to mplement your own sorting algorithm or reuse one that already exists.

## Rules
* The game is composed of 2 stacks named a and b.
* To start with:
a contains a random number of either positive or negative numbers without
any duplicates.
b is empty
* The goal is to sort in ascending order numbers into stack a.
* To do this you have the following operations at your disposal:

<table>
	<thead>
		<tr>
			<th colspan=3><h4>Operations</h4></th>
		</tr>
		<tr>
			<th>mv</th>
			<th>description</th>
		</tr>
	</thead>
	<tbody>
	</thead>
		<tr>
			<td align="center">sa</td>
			<td>swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.</td>
		</tr>
		<tr>
			<td align="center">sb</td>
			<td>swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.</td>
		</tr>
		<tr>
			<td align="center">ss</td>
			<td>sa and sb at the same time.</td>
		</tr>
		<tr>
			<td align="center">pa</td>
			<td>push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.</td>
		</tr>
		<tr>
			<td align="center">pb</td>
			<td>push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.</td>
		</tr>
		<tr>
			<td align="center">ra</td>
			<td>rotate a - shift up all elements of stack a by 1. The first element becomes the last one.</td>
		</tr>
		<tr>
			<td align="center">rb</td>
			<td>rotate b - shift up all elements of stack b by 1. The first element becomes the last one.</td>
		</tr>
		<tr>
			<td align="center">rr</td>
			<td>ra and rb at the same time.</td>
		</tr>
		<tr>
			<td align="center">rra</td>
			<td>reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.</td>
		</tr>
		<tr>
			<td align="center">rrb</td>
			<td>reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.</td>
		</tr>
	</tbody>
</table>

## How to use
### Install
```bash
# Clone the project and access the folder
git clone https://github.com/DeykyPinheiro/push_swap
cd push_swap

# compiles "push_swap" into "./push_swap"
make
```
### run
```bash
# Running push_swap
./push_swap 1 3 2 5 4

# output
rra
pb
rra
pb
sa
rra
pa
pa
```
## Results

![alt text](/assets/gif/run.gif)
