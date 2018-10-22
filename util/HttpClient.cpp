#include "HttpClient.h"

const string HttpClient::name = "HttpClient";

HttpClient::HttpClient() {
    curl = curl_easy_init();
}

size_t HttpClient::writefunc(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int HttpClient::httpRequest(Request request, Response* response) {
    string readBuffer;

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, request.url.c_str());

        if (request.method == METHOD::PUT) {
            curl_easy_setopt(curl, CURLOPT_PUT, 1L);
        } else if (request.method == METHOD::POST) {
            curl_easy_setopt(curl, CURLOPT_POST, 1L);
        } else { // GET case

        }
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writefunc);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        CURLcode res = curl_easy_perform(curl);

        cout<<readBuffer<<endl;
        response->resCode = res;
        response->resData = readBuffer;
        return 0;
    }
    return -1;
}


