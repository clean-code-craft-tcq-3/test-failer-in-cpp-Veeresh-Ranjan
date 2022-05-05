string getPairNumber(string stringToBeChecked){
    istringstream wordString(stringToBeChecked);
    string word;
    if(wordString>>word){
        return word;
    }
    return "";
}
string getMajorColor(string stringToBeChecked){
    istringstream wordString(stringToBeChecked);
    string word;
    while(wordString>>word){
        if (word == "White"|| word == "Red" || word == "Black" || word == "Yellow" || word == "Violet"){
            return word;
        }
    }
    return "";
}
string getMinorColor(string stringToBeChecked){
    istringstream wordString(stringToBeChecked);
    string word;
    while(wordString>>word){
        if (word == "Blue"|| word == "Orange" || word == "Green" || word == "Brown" || word == "Slate"){
            return word;
        }
    }
    return "";
}
