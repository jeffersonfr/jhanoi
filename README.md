The shortest and not so mysterious interactive implementation of tower of hanoi

This is a new implementation of interactive tower of hanoi developed by Jefferson Ferreira (jeffersonfr@gmail.com).
The ideia behind this algorithm is very simple, I consider the movements of tower of hanoi like octal numbers, i.e.

  AB 110
  AC 101
  BA 110
  BC 011
  CA 101
  CB 011

Lets consider the sequences below to solve the problem:

  01 disk[s]: AC
  02 disk[s]: [AC AB CB]
  03 disk[s]: [AC AB CB] [AC BA BC] AC
  04 disk[s]: [AC AB CB] [AC BA BC] [AC AB CB] [CA BA CB] [AC AB CB] 

Lets consider also the following:

  AB = BC = 110
  AC = CA = 101
  BC = CB = 011

So, we have always the same sequence of octal numbers: [101 110 011]. The last thing to consider is which tower
is the source and which tower is the destination. The answer is very simple: the source tower has the smallest disk;
