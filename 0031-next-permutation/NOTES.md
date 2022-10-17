basically we have to find a peak element whose all the elements to the right are
all in sorted (dec order) ....that element will tell that till that place all permutation
have been exhaused and it was the last choice
like in 123-->132...now all possible patterns of 2 and 3 are finished because 3 is the
largest ...so after finding that peak element we will backtrack from that element
that means that element prior to that element will take part in permutation now
so we have to find a element to swap that element and that element needs to be the
just greater element than that because if it is smaller then we will not be getting
greater permutation and after fixing that just greater element to that position
we can sort the rest of the list bec we want smallest lexicographic order
