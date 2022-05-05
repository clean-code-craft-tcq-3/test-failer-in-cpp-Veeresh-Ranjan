
int countCharacters(string str){
    int count;
    for (auto i:str){
        ++count;
        if (i=='|')
            break;
    }
    return count;
}


bool checkAlignment(vector <string> arrayOfStringLines){
    string str1,str2;
    str1 = arrayOfStringLines.at(8);
    str2 = arrayOfStringLines.at(9);
    int count1 = 0,count2 = 0;
    count1 = countCharacters(str1);
    count2 = countCharacters(str2);
    if (count1 == count2) return true;
    return false;
}
