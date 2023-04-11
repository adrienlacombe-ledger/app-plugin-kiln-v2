#include "kiln_plugin.h"

// cast keccak "deposit()"
static const uint32_t KILN_DEPOSIT_SELECTOR = 0xd0e30db0;
// cast keccak "withdraw(bytes)"
static const uint32_t KILN_WITHDRAW_SELECTOR = 0x0968f264;
// cast keccak "withdrawELFee(bytes)"
static const uint32_t KILN_WITHDRAW_EL_SELECTOR = 0xbf509bd4;
// cast keccak "withdrawCLFee(bytes)"
static const uint32_t KILN_WITHDRAW_CL_SELECTOR = 0x2ba03a79;
// cast keccak "batchWithdraw(bytes)"
static const uint32_t KILN_BATCH_WITHDRAW_SELECTOR = 0xe8a0c121;
// cast keccak "batchWithdrawELFee(bytes)"
static const uint32_t KILN_BATCH_WITHDRAW_EL_SELECTOR = 0xef5e4682;
// cast keccak "batchWithdrawCLFee(bytes)"
static const uint32_t KILN_BATCH_WITHDRAW_CL_SELECTOR = 0x0ffab6c2;
// cast keccak "requestValidatorsExit(bytes)"
static const uint32_t KILN_REQUEST_EXIT_SELECTOR = 0xb6b06dec;

const uint32_t KILN_SELECTORS[NUM_SELECTORS] = {
    KILN_DEPOSIT_SELECTOR,
    KILN_WITHDRAW_SELECTOR,
    KILN_WITHDRAW_EL_SELECTOR,
    KILN_WITHDRAW_CL_SELECTOR,
    KILN_BATCH_WITHDRAW_SELECTOR,
    KILN_BATCH_WITHDRAW_EL_SELECTOR,
    KILN_BATCH_WITHDRAW_CL_SELECTOR,
    KILN_REQUEST_EXIT_SELECTOR,
};
