//
// Created by lwb85 on 2018/5/30.
//
#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <map>
#include <algorithm>

using namespace std;

void intoPostfix(string &input, string &output) {
    string operators("+-*/()");
    istringstream iss(input);
    string substr;
    stack<string> ops;
    stack<string> result;
    map<string, int> priority;
    priority["+"] = 1;
    priority["-"] = 1;
    priority["*"] = 2;
    priority["/"] = 2;
    priority["("] = 3;
    while (!iss.eof()){
        iss >> substr;
        if(operators.find(substr) != string::npos)
        {
            if(substr == ")")
            {
                while(ops.top()!="(")
                {
                    result.push(ops.top());
                    ops.pop();
                }
                ops.pop();
            } else{
                while(!ops.empty() &&(ops.top() != "(") && (priority[substr] <= priority[ops.top()])){
                    result.push(ops.top());
                    ops.pop();
                }
                ops.push(substr);
            }
        } else
            result.push(substr);
    }
    while(!ops.empty()){
        result.push(ops.top());
        ops.pop();
    }
    output.clear();
    while(!result.empty()){
        auto i = result.top();
        result.pop();
        output = output + i + " ";
    }
    reverse(output.begin(), output.end());
}

//int main()
//{
//    string input("a + b * c + ( d * e + f ) * g"), output;
//    intoPostfix(input, output);
//    cout << output << endl;
//    return 0;
//}

