#include <iostream>
#include <curl/curl.h>
#include <string>
#include <cstdlib>

int main() {
    CURL* curl;
    CURLcode res;
    std::string query = "Kurdistan";

    curl = curl_easy_init();
    if (curl) {
        system("color e"); int b = 4;
        for (int i = 0; i < b; i++)
        {
            system("start chrome");
        }
        system("close chrome");
        std::string url = "https://www.google.com/search?q=" + query;
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }
        curl_easy_cleanup(curl);
    }
    return 0;
}