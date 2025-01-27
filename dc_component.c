#include "internal/data_collection.h"
#include <stdlib.h>

bool exports_edgee_protocols_data_collection_page(exports_edgee_protocols_data_collection_event_t *e, exports_edgee_protocols_data_collection_dict_t *cred, exports_edgee_protocols_data_collection_edgee_request_t *ret, data_collection_string_t *err) {
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
