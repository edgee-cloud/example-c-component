#include "internal/data_collection.h"
#include <stdlib.h>

/*
    These are the functions that you will need to implement in order to create your component.
    These functions are called by the Edgee runtime to get the HTTP request to make to the provider's API for each event type.
    You should set your request parameters in the `ret` struct and return true if the request was successful.
*/

bool exports_edgee_protocols_data_collection_page(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *settings, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
    /*
        If your settings are set as:
            [[components.data_collection]]
            id = "my_component"
            component = "output.wasm"
            settings.test_project_id = "123456789"
            settings.test_write_key = "abcdefg"
        Then the following code:
            for (int i = 0; i < settings.len; i++) {
                printf("%s: %s\n", settings.ptr[i].f0.ptr, settings.ptr[i].f1.ptr);
            }
        Will print:
            test_project_id: 123456789
            test_write_key: abcdefg
    */

    data_collection_string_dup(&ret->url, "https://example.com");

    data_collection_string_dup(&ret->body, "{\"key\":\"value\"}");

    ret->method = EXPORTS_EDGEE_PROTOCOLS_DATA_COLLECTION_HTTP_METHOD_POST;

    ret->headers.ptr = malloc(sizeof(data_collection_tuple2_string_string_t));
    ret->headers.len = 1;
    data_collection_string_dup(&ret->headers.ptr[0].f0, "Content-Type");
    data_collection_string_dup(&ret->headers.ptr[0].f1, "application/json");
    ret->forward_client_headers = true;
    return true;
}
bool exports_edgee_protocols_data_collection_track(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *settings, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
    data_collection_string_dup(&ret->url, "https://example.com");

    data_collection_string_dup(&ret->body, "{\"key\":\"value\"}");

    ret->method = EXPORTS_EDGEE_PROTOCOLS_DATA_COLLECTION_HTTP_METHOD_POST;

    ret->headers.ptr = malloc(sizeof(data_collection_tuple2_string_string_t));
    ret->headers.len = 1;
    data_collection_string_dup(&ret->headers.ptr[0].f0, "Content-Type");
    data_collection_string_dup(&ret->headers.ptr[0].f1, "application/json");
    ret->forward_client_headers = true;
    return true;
}
bool exports_edgee_protocols_data_collection_user(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *settings, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
    data_collection_string_dup(&ret->url, "https://example.com");

    data_collection_string_dup(&ret->body, "{\"key\":\"value\"}");

    ret->method = EXPORTS_EDGEE_PROTOCOLS_DATA_COLLECTION_HTTP_METHOD_POST;

    ret->headers.ptr = malloc(sizeof(data_collection_tuple2_string_string_t));
    ret->headers.len = 1;
    data_collection_string_dup(&ret->headers.ptr[0].f0, "Content-Type");
    data_collection_string_dup(&ret->headers.ptr[0].f1, "application/json");
    ret->forward_client_headers = true;
    return true;
}
