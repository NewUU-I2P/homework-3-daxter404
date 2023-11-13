float problemSolution5(float x, float y, char operation) {
   float result =0;
    switch (operation) {
            case '+':
                result = x+y;
                break;
            case '-':
                result = x-y;
                break;
            case '*' :
                result = x*y;
                break;
            case '/':
                if (y!=0) {
                    result = x / y;
                } else {
                    std::cout << "division by zero is undefined";
                }
                break;
            default:
                std::cout << "Operation is undefined";
                break;
    }
   return result;
}
