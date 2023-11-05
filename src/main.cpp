#include <Arduino.h>
#include <SPIFFS.h>
#include "pin_defs.h"
#include "webserver.h"
#include <regex.h>
// put function declarations here:
int myFunction(int, int);

class RootRequestHandler : public AsyncWebHandler
{
private:
public:
  CaptiveRequestHandler() {}
  ~CaptiveRequestHandler() {}
  bool canHandle(AsyncWebServerRequest *request)
  {
    if (request->url() == "/" & request->method() == WebRequestMethod::HTTP_GET)
    {
      return true;
    }
    return false;
  }

  void handleRequest(AsyncWebServerRequest *request)
  {
    AsyncResponseStream *response = request->beginResponseStream("text/html");
    response->
  }
};

void setup()
{
  // put your setup code here, to run once:

  server.serveStatic("/", SPIFFS, "/www/");
}

void loop()
{
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}