#ifndef __WEBSERVER_H__
#define __WEBSERVER_H__
#include <DNSServer.h>
#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <stdlib.h>
#define WEBSERVER_PORT 80
#define DNS_PORT 80

DNSServer dnsServer;
AsyncWebServer server(WEBSERVER_PORT);

void init_server_handler(AsyncWebHandler *web_handler, const String &ssid, const String &password);
void server_handle_request();
#endif //__WEBSERVER_H__