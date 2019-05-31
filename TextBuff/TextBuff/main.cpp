//
//  main.cpp
//  TextBuff
//  Created by Sarvesh Bhatnagar on 31/05/19.
//  Copyright © 2019 introtoalgo.com. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>



#define cout std::cout
#define endl std::endl
#define cin std::cin
#define string std::string



class Reader{
    
public:
    void fetch();//Fetch a string from other object ?.
    
};


class FileHandler{
    string input = "input.txt";
    string output = "output.txt";
    std::vector<string> inputData; //stores input data
    std::vector<string> initVector; //stores initialization data
    std::ifstream in;
    std::ofstream out;
    
public:
    FileHandler(){
        //Maybe initialize the settings after that do :
        openInputFile("init.txt");
        process();
        closeInputFile();
        openInputFile();
        fillData();
        closeInputFile();
    }
    void openInputFile(string inp = ""); //opens input file
    void closeInputFile(); //closes input file
    void openOutputFile(string op = ""); // opens output file
    void closeOutputFile(); // closes output file
    void save(); //saves the result in output file
    void process(); //sends input file
    void fillData(int n=1);//Fills inputData in the vector
    std::vector<string> getInput();//Returns the input data vector
}FHObj;






void FileHandler::openInputFile(string inp){
    if (inp == "") {
        in.open(input);
    }else{
        in.open(inp);
    }
    if (!in) {
        std::cerr<<"FileHandler : Error Opening File(Input)"<<endl;
        exit(2);
    }
}

void FileHandler::closeInputFile(){
    if (in) {
        in.close();
    }
}


void FileHandler::openOutputFile(string op){
    if (op == "") {
        out.open(output);
    }else{
        out.open(op);
    }
    if (!out) {
        std::cerr<<"FileHandler : Error Opening File(Output)"<<endl;
        exit(2);
    }
}

void FileHandler::closeOutputFile(){
    if (out) {
        out.close();
    }
}

void FileHandler::save(){
    //Do something.
}

void FileHandler::process(){
    //Do something.
    fillData(0);//Fills initVector.
    //Read one by one and process.
}

void FileHandler::fillData(int n){
    string t;
    if (n == 1) {
        while(in>>t){
            inputData.push_back(t);
        }
    }else{
        while (in>>t) {
            initVector.push_back(t);
        }
    }
}

std::vector<string> FileHandler::getInput(){
    return inputData;
}





int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<"Hello, World!"<<endl;
    cout<<"DONE "<<endl;
    return 0;
}
