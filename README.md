dine-of-philosophers
====================

this is a GUI MultiThread program that shows the the dine of philosophers problem...

The dine of philosopher problem:

Five silent philosophers sit at a table around a bowl of spaghetti. A fork is placed between each pair of adjacent philosophers.
Each philosopher must alternately think and eat. However, a philosopher can only eat spaghetti when he has both left and right forks. Each fork can be held by only one philosopher and so a philosopher can use the fork only if it's not being used by another philosopher. After he finishes eating, he needs to put down both forks so they become available to others. A philosopher can grab the fork on his right or the one on his left as they become available, but can't start eating before getting both of them.
Eating is not limited by the amount of spaghetti left: assume an infinite supply.
The problem is how to design a discipline of behavior such that each philosopher won't starve; i.e., can forever continue to alternate between eating and thinking assuming that any philosopher cannot know when others may want to eat or think.
instruct each philosopher to behave as follows:

think until the left fork is available; when it is, pick it up;

think until the right fork is available; when it is, pick it up;

when both forks are held, eat for a fixed amount of time;

then, put the right fork down;

then, put the left fork down;

repeat from the beginning.


you can see complete the problem and it's solutions in this link:
http://en.wikipedia.org/wiki/Dining_philosophers_problem
