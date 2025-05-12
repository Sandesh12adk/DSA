//To Check the validity of the expression by balancing symbol using staco
//Algotithm
//->Scan the each characters in the expression(x+(y-4)+[{4*4+(2*2)}]) from left to right
->if it other characters other then (, {, [ leave them
->if it is the opening bracket then push it to the stack
->if it is the closing bracket then pop from the stack and compare with the current closing bracket if they 
matches the continue the scanning , if they dont match or the stack is empty then the expressing is invalid.
->After scanning all the characters the stack should be empty,if not then the expression is invalid.
