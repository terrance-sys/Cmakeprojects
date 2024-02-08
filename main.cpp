# include <iostream>

int main(){
    double n1, n2;
    char op;

    std::cout <<"Enter first Number: ";
    std::cin >> n1;

    std::cout <<"Enter Second Number: ";
    std::cin >> n2;

    std::cout <<"Enter operator (+, -, *, /): ";
    std::cin >> op;

    double result;

    switch (op) {
        case '+': 
             result = n1 + n2;
             break;
        case '-': 
             result = n1 - n2;
             break;
        case '*': 
             result = n1 * n2;
             break;
        case '/': 
             if(n1 != 0)
                result = n1 / n2;
             else{
                std::cout <<"ERROR Division By Zero!";
                return 1;
             }
             break;
        default:
             std::cout <<"Invalid Operator! Please Enter the Operator Correctly.";
             return 1;
    }
    std::cout <<"Output: " << result << std::endl;
    return 0;


}