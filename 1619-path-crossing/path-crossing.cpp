class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0;
        int y = 0;
        unordered_set<string> st;
        st.insert("0_0");

        for (int i = 0; i < path.length(); i++) {
            if (path[i] == 'N') y++;
            else if (path[i] == 'S')  y--;
            else if (path[i] == 'E')  x++;
            else if (path[i] == 'W') x--;

            string key = to_string(x) + "_" + to_string(y);

            if (st.find(key) != st.end()) {
                return true;
            }
            st.insert(key);
        }
        return false;
    }
};