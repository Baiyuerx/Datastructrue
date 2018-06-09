//
// Created by lwb85 on 2018/5/30.
//
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

int option(int, int, string);

int caculatePostfix(string input) {
    stack<int> s;
    string operators("+-*/");
    int op_a, op_b;
    istringstream iss(input);
    do {
        string substr;
        iss >> substr;
        if (operators.find(substr) != string::npos) {
            op_b = s.top();
            s.pop();
            op_a = s.top();
            s.pop();
            s.push(option(op_a, op_b, substr));
        } else
            s.push(atoi(substr.c_str()));
    }while(!iss.eof());
    return s.top();
}


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

int option(int a, int b, string op) {
    int result = 0;
    map<string, int> stoi;
    stoi["+"] = 1;
    stoi["-"] = 2;
    stoi["*"] = 3;
    stoi["/"] = 4;
    switch (stoi[op]) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            result = a / b;
            break;
        default:
            cout << "error" << endl;
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    string postfix;
    intoPostfix(s, postfix);
    cout << caculatePostfix(postfix) << endl;
//    caculatePostfix(s);
    return 0;
}

