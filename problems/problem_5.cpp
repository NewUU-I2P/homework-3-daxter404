float problemSolution5(float x, float y, char operation) {
    switch (operation) {
            case '+':
                return x+y;

            case '-':
                return x-y;

            case '*' :
                return x*y;

            case '/':
                if (y!=0) {
                    return x / y;
                }

    }
   return 0;
}
