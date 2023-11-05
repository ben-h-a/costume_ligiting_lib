
#include "webserver.h"

void init_server_handler(AsyncWebHandler *web_handler, const String &ssid, const String &password)
{
    WiFi.softAP(ssid, password);
    dnsServer.start(DNS_PORT, "*", WiFi.softAPIP());
    server.addHandler(web_handler).setFilter(ON_AP_FILTER);
}

void server_handle_request()
{
    dnsServer.processNextRequest();
}