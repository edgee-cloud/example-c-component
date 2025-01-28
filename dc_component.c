#include "internal/data_collection.h"
#include <stdlib.h>

/*
    These are the functions that you will need to implement in order to create your component.
    These functions are called by the Edgee runtime to get the HTTP request to make to the provider's API for each event type.
    You should set your request parameters in the `ret` struct and return true if the request was successful.
*/

bool exports_edgee_protocols_data_collection_page(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *cred, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
    /*
        If your credentials are set as:
            [[components.data_collection]]
            name = "my_component"
            component = "outpout.wasm"
            credentials.test_project_id = "123456789"
            credentials.test_write_key = "abcdefg"
        Then the following code:
            for (int i = 0; i < cred.len; i++) {
                printf("%s: %s\n", cred.ptr[i].f0.ptr, cred.ptr[i].f1.ptr);
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

    return true;
}
bool exports_edgee_protocols_data_collection_track(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *cred, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
    data_collection_string_dup(&ret->url, "https://example.com");

    data_collection_string_dup(&ret->body, "{\"key\":\"value\"}");

    ret->method = EXPORTS_EDGEE_PROTOCOLS_DATA_COLLECTION_HTTP_METHOD_POST;

    ret->headers.ptr = malloc(sizeof(data_collection_tuple2_string_string_t));
    ret->headers.len = 1;
    data_collection_string_dup(&ret->headers.ptr[0].f0, "Content-Type");
    data_collection_string_dup(&ret->headers.ptr[0].f1, "application/json");
    return true;
}
bool exports_edgee_protocols_data_collection_user(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *cred, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
    data_collection_string_dup(&ret->url, "https://example.com");

    data_collection_string_dup(&ret->body, "{\"key\":\"value\"}");

    ret->method = EXPORTS_EDGEE_PROTOCOLS_DATA_COLLECTION_HTTP_METHOD_POST;

    ret->headers.ptr = malloc(sizeof(data_collection_tuple2_string_string_t));
    ret->headers.len = 1;
    data_collection_string_dup(&ret->headers.ptr[0].f0, "Content-Type");
    data_collection_string_dup(&ret->headers.ptr[0].f1, "application/json");
    return true;
}
