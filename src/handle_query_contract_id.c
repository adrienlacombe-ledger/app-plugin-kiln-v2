#include "kiln_plugin.h"

void handle_query_contract_id(void *parameters) {
    ethQueryContractID_t *msg = (ethQueryContractID_t *) parameters;
    const context_t *context = (const context_t *) msg->pluginContext;

    strlcpy(msg->name, PLUGIN_NAME, msg->nameLength);

    msg->result = ETH_PLUGIN_RESULT_OK;

    switch (context->selectorIndex) {
        case KILN_DEPOSIT:
            strlcpy(msg->version, "Stake", msg->versionLength);
            break;

        case KILN_WITHDRAW:
        case KILN_WITHDRAW_EL:
        case KILN_WITHDRAW_CL:
            strlcpy(msg->version, "Withdraw", msg->versionLength);
            break;

        case KILN_BATCH_WITHDRAW:
        case KILN_BATCH_WITHDRAW_EL:
        case KILN_BATCH_WITHDRAW_CL:
            strlcpy(msg->version, "Batch Withdraw", msg->versionLength);
            break;

        case KILN_REQUEST_EXIT:
            strlcpy(msg->version, "Request Exit", msg->versionLength);
            break;

        default:
            PRINTF("Selector Index not supported: %d\n", context->selectorIndex);
            msg->result = ETH_PLUGIN_RESULT_ERROR;
            break;
    }
}
