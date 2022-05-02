
int countCharacters(string str){
    cout<<str<<endl;
    int count;
    for (auto i:str){
        count++;
        if (i=='|')
            break;
    }
    return count;
}


bool checkAlignment(vector <string> arrayOfStringLines){
    string str1,str2;
    str1 = arrayOfStringLines.at(9);
    str2 = arrayOfStringLines.at(10);
    int count1 = 0,count2 = 0;
    count1 = countCharacters(str1);
    cout<<"Count1: "<<count1<<endl;
    count2 = countCharacters(str2);
    cout<<"Count2: "<<count2<<endl;
    if (count1 == count2) return true;
    return false;
}
