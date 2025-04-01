//! GFG - Print all the duplicate characters in a string

//* Method - 1
//? TC - O(N Logn)
//? SC - O(1)

void printDuplicates(string str)
{
    int len = str.length();

    sort(str.begin(), str.end());

    for (int i = 0; i < len; i++) {
        int count = 1;

        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        if (count > 1) {
            cout << str[i] << ", count = " << count << endl;
        }
    }
}


//* Method - 2
//? TC - O(N)
//? SC - O(K) size of map

void printDuplicates(string str)
{
    unordered_map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
    for (auto it : count) {
        if (it.second > 1)
            cout<<it.first<<", count = "<<it.second<<"\n";
    }
}