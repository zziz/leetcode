class Solution {
public:
    map<string, string> m;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrl = std::to_string(std::hash<std::string>()(longUrl));
        m.insert(pair<string, string>(shortUrl, longUrl));
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));