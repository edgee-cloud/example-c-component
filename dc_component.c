#include "internal/data_collection.h"
#include <stdlib.h>
#include <string.h>

/*
    These are the functions that you will need to implement in order to create your component.
    These functions are called by the Edgee runtime to get the HTTP request to make to the provider's API for each event type.
    You should set your request parameters in the `ret` struct and return true if the request was successful.
*/
struct component_settings {
    data_collection_string_t example;
};

struct component_settings parse_settings(exports_edgee_protocols_data_collection_dict_t *settings) {
    struct component_settings ret;
    for (int i = 0; i < settings->len; i++) {
        if (settings->ptr[i].f0.len == 0) {
            continue;
        }
        if (strncmp((const char*)settings->ptr[i].f0.ptr, "example", settings->ptr[i].f0.len) == 0) {
            ret.example = settings->ptr[i].f1;
        }
    }
    return ret;
}

bool exports_edgee_protocols_data_collection_page(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *settings, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
    struct component_settings parsed_settings = parse_settings(settings);
    data_collection_string_dup(&ret->url, "https://example.com");

    data_collection_string_dup(&ret->body, "{\"key\":\"value\"}");

    ret->method = EXPORTS_EDGEE_PROTOCOLS_DATA_COLLECTION_HTTP_METHOD_POST;

    ret->headers.ptr = malloc(2 * sizeof(data_collection_tuple2_string_string_t));
    ret->headers.len = 2;
    data_collection_string_dup(&ret->headers.ptr[0].f0, "Content-Type");
    data_collection_string_dup(&ret->headers.ptr[0].f1, "application/json");

    data_collection_string_dup(&ret->headers.ptr[1].f0, "Example");
    ret->headers.ptr[1].f1 = parsed_settings.example;

    ret->forward_client_headers = true;
    return true;
}
bool exports_edgee_protocols_data_collection_track(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *settings, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
    struct component_settings parsed_settings = parse_settings(settings);
    data_collection_string_dup(&ret->url, "https://example.com");

    data_collection_string_dup(&ret->body, "{\"key\":\"value\"}");

    ret->method = EXPORTS_EDGEE_PROTOCOLS_DATA_COLLECTION_HTTP_METHOD_POST;

    ret->headers.ptr = malloc(2 * sizeof(data_collection_tuple2_string_string_t));
    ret->headers.len = 2;
    data_collection_string_dup(&ret->headers.ptr[0].f0, "Content-Type");
    data_collection_string_dup(&ret->headers.ptr[0].f1, "application/json");

    data_collection_string_dup(&ret->headers.ptr[1].f0, "Example");
    ret->headers.ptr[1].f1 = parsed_settings.example;

    ret->forward_client_headers = true;
    return true;
}
bool exports_edgee_protocols_data_collection_user(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *settings, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
    struct component_settings parsed_settings = parse_settings(settings);
    data_collection_string_dup(&ret->url, "https://example.com");

    data_collection_string_dup(&ret->body, "{\"key\":\"value\"}");

    ret->method = EXPORTS_EDGEE_PROTOCOLS_DATA_COLLECTION_HTTP_METHOD_POST;

    ret->headers.ptr = malloc(2 * sizeof(data_collection_tuple2_string_string_t));
    ret->headers.len = 2;
    data_collection_string_dup(&ret->headers.ptr[0].f0, "Content-Type");
    data_collection_string_dup(&ret->headers.ptr[0].f1, "application/json");

    data_collection_string_dup(&ret->headers.ptr[1].f0, "Example");
    ret->headers.ptr[1].f1 = parsed_settings.example;

    ret->forward_client_headers = true;
    return true;
}
