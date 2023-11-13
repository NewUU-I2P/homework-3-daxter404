#include <string>

std::string problemSolution3(float height, char S) {
    std::string result;

    switch (S) {
        case 'M':
            if (height<1.7){
                result = "Short";
            } else if(height>=1.7 and height<1.85){
                result="Normal";
            } else {
                result = "Tall";
            }
            break;

        case 'F':
            if (height<1.60) {
                result = "Short" ;
            } else if (height>=1.60 and height<1.75) {
                result = "Nornmal";
            } else {
                result = "Tall";
            }
            break;
        default:
            result = "Unknown sex entered!!!";
            break;
    }
    return result;
}