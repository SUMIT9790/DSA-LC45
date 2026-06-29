class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;

        for (int i=1; i<=n; i++) {
            string out = "";

            if (i%3 == 0) out =out+"Fizz";
            if (i % 5 == 0) out = out + "Buzz";
            if (out == "")  out = to_string(i);
            
            res.push_back(out);
        }
        return res;
    }
};