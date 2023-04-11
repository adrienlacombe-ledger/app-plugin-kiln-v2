#include "kiln_plugin.h"

void handle_finalize(void *parameters) {
    ethPluginFinalize_t *msg = (ethPluginFinalize_t *) parameters;
    context_t *context = (context_t *) msg->pluginContext;

    msg->uiType = ETH_UI_TYPE_GENERIC;

    switch (context->selectorIndex) {
        case KILN_DEPOSIT:
        case KILN_WITHDRAW:
        case KILN_WITHDRAW_EL:
        case KILN_WITHDRAW_CL:
        case KILN_BATCH_WITHDRAW:
        case KILN_BATCH_WITHDRAW_EL:
        case KILN_BATCH_WITHDRAW_CL:
        case KILN_REQUEST_EXIT:
            msg->numScreens = 1;
            msg->result = ETH_PLUGIN_RESULT_OK;
            break;
        default:
            PRINTF("Selector Index not supported: %d\n", context->selectorIndex);
            msg->result = ETH_PLUGIN_RESULT_ERROR;
            break;
    }
}
