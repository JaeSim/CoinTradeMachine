#ifndef __HTTPCLIENT_H__
#define __HTTPCLIENT_H__
#include <iostream>
#include <string>
#include <curl/curl.h>

using namespace std;

class HttpClient
{
private:
    CURL* curl;
    CURLcode res;
public:
    enum METHOD { GET = 0, PUT = 1, POST = 2};
    class Request {
    public:
        METHOD method;
        string url;
        string data;
    };

    class Response {
    public:
        int resCode;
        string resData;
    };

    class MemoryStruct {
    public:
      char *memory;
      size_t size;
    };

    static const string name;
    int httpRequest(Request request, Response* response);
    static size_t writefunc(void *contents, size_t size, size_t nmemb, void *userp);
    HttpClient();
    ~HttpClient() {};
};
#endif
