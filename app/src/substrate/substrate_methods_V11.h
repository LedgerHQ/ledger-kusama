/*******************************************************************************
 *  (c) 2019 - 2022 Zondax GmbH
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include "substrate_types_V11.h"
#include <stddef.h>
#include <stdint.h>

#define PD_CALL_SYSTEM_V11 0
#define PD_CALL_TIMESTAMP_V11 2
#define PD_CALL_INDICES_V11 3
#define PD_CALL_BALANCES_V11 4
#define PD_CALL_STAKING_V11 6
#define PD_CALL_SESSION_V11 8
#define PD_CALL_GRANDPA_V11 10
#define PD_CALL_DEMOCRACY_V11 13
#define PD_CALL_COUNCIL_V11 14
#define PD_CALL_TECHNICALCOMMITTEE_V11 15
#define PD_CALL_PHRAGMENELECTION_V11 16
#define PD_CALL_TECHNICALMEMBERSHIP_V11 17
#define PD_CALL_TREASURY_V11 18
#define PD_CALL_CLAIMS_V11 19
#define PD_CALL_UTILITY_V11 24
#define PD_CALL_IDENTITY_V11 25
#define PD_CALL_SOCIETY_V11 26
#define PD_CALL_RECOVERY_V11 27
#define PD_CALL_VESTING_V11 28
#define PD_CALL_PROXY_V11 30
#define PD_CALL_MULTISIG_V11 31
#define PD_CALL_PREIMAGE_V11 32
#define PD_CALL_BOUNTIES_V11 35
#define PD_CALL_CHILDBOUNTIES_V11 40
#define PD_CALL_TIPS_V11 36
#define PD_CALL_ELECTIONPROVIDERMULTIPHASE_V11 37
#define PD_CALL_GILT_V11 38
#define PD_CALL_BAGSLIST_V11 39
#define PD_CALL_CONFIGURATION_V11 51
#define PD_CALL_INITIALIZER_V11 57
#define PD_CALL_HRMP_V11 60
#define PD_CALL_PARASDISPUTES_V11 62
#define PD_CALL_REGISTRAR_V11 70
#define PD_CALL_AUCTIONS_V11 72
#define PD_CALL_CROWDLOAN_V11 73

#define PD_CALL_BALANCES_TRANSFER_ALL_V11 4
typedef struct {
    pd_LookupasStaticLookupSource_V11_t dest;
    pd_bool_t keep_alive;
} pd_balances_transfer_all_V11_t;

#define PD_CALL_STAKING_BOND_V11 0
typedef struct {
    pd_LookupasStaticLookupSource_V11_t controller;
    pd_CompactBalance_t amount;
    pd_RewardDestination_V11_t payee;
} pd_staking_bond_V11_t;

#define PD_CALL_STAKING_BOND_EXTRA_V11 1
typedef struct {
    pd_CompactBalance_t amount;
} pd_staking_bond_extra_V11_t;

#define PD_CALL_STAKING_UNBOND_V11 2
typedef struct {
    pd_CompactBalance_t amount;
} pd_staking_unbond_V11_t;

#define PD_CALL_STAKING_WITHDRAW_UNBONDED_V11 3
typedef struct {
    pd_u32_t num_slashing_spans;
} pd_staking_withdraw_unbonded_V11_t;

#define PD_CALL_STAKING_VALIDATE_V11 4
typedef struct {
    pd_ValidatorPrefs_V11_t prefs;
} pd_staking_validate_V11_t;

#define PD_CALL_STAKING_NOMINATE_V11 5
typedef struct {
    pd_VecLookupasStaticLookupSource_V11_t targets;
} pd_staking_nominate_V11_t;

#define PD_CALL_STAKING_CHILL_V11 6
typedef struct {
} pd_staking_chill_V11_t;

#define PD_CALL_STAKING_SET_PAYEE_V11 7
typedef struct {
    pd_RewardDestination_V11_t payee;
} pd_staking_set_payee_V11_t;

#define PD_CALL_STAKING_SET_CONTROLLER_V11 8
typedef struct {
    pd_LookupasStaticLookupSource_V11_t controller;
} pd_staking_set_controller_V11_t;

#define PD_CALL_STAKING_PAYOUT_STAKERS_V11 18
typedef struct {
    pd_AccountId_V11_t validator_stash;
    pd_EraIndex_V11_t era;
} pd_staking_payout_stakers_V11_t;

#define PD_CALL_STAKING_REBOND_V11 19
typedef struct {
    pd_CompactBalance_t amount;
} pd_staking_rebond_V11_t;

#define PD_CALL_SESSION_SET_KEYS_V11 0
typedef struct {
    pd_Keys_V11_t keys;
    pd_Bytes_t proof;
} pd_session_set_keys_V11_t;

#define PD_CALL_SESSION_PURGE_KEYS_V11 1
typedef struct {
} pd_session_purge_keys_V11_t;

#define PD_CALL_UTILITY_BATCH_V11 0
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_V11_t;

#define PD_CALL_UTILITY_BATCH_ALL_V11 2
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_all_V11_t;

#define PD_CALL_UTILITY_FORCE_BATCH_V11 4
typedef struct {
    pd_VecCall_t calls;
} pd_utility_force_batch_V11_t;

#define PD_CALL_CROWDLOAN_CREATE_V11 0
typedef struct {
    pd_Compactu32_t index;
    pd_Compactu128_t cap;
    pd_Compactu32_t first_period;
    pd_Compactu32_t last_period;
    pd_Compactu32_t end;
    pd_OptionMultiSigner_V11_t verifier;
} pd_crowdloan_create_V11_t;

#define PD_CALL_CROWDLOAN_CONTRIBUTE_V11 1
typedef struct {
    pd_Compactu32_t index;
    pd_Compactu128_t amount;
    pd_OptionMultiSignature_V11_t signature;
} pd_crowdloan_contribute_V11_t;

#define PD_CALL_CROWDLOAN_WITHDRAW_V11 2
typedef struct {
    pd_AccountId_V11_t who;
    pd_Compactu32_t index;
} pd_crowdloan_withdraw_V11_t;

#define PD_CALL_CROWDLOAN_REFUND_V11 3
typedef struct {
    pd_Compactu32_t index;
} pd_crowdloan_refund_V11_t;

#define PD_CALL_CROWDLOAN_DISSOLVE_V11 4
typedef struct {
    pd_Compactu32_t index;
} pd_crowdloan_dissolve_V11_t;

#define PD_CALL_CROWDLOAN_EDIT_V11 5
typedef struct {
    pd_Compactu32_t index;
    pd_Compactu128_t cap;
    pd_Compactu32_t first_period;
    pd_Compactu32_t last_period;
    pd_Compactu32_t end;
    pd_OptionMultiSigner_V11_t verifier;
} pd_crowdloan_edit_V11_t;

#define PD_CALL_CROWDLOAN_ADD_MEMO_V11 6
typedef struct {
    pd_ParaId_V11_t index;
    pd_Vecu8_t memo;
} pd_crowdloan_add_memo_V11_t;

#define PD_CALL_CROWDLOAN_POKE_V11 7
typedef struct {
    pd_ParaId_V11_t index;
} pd_crowdloan_poke_V11_t;

#define PD_CALL_CROWDLOAN_CONTRIBUTE_ALL_V11 8
typedef struct {
    pd_Compactu32_t index;
    pd_OptionMultiSignature_V11_t signature;
} pd_crowdloan_contribute_all_V11_t;

#ifdef SUBSTRATE_PARSER_FULL

#define PD_CALL_TIMESTAMP_SET_V11 0
typedef struct {
    pd_Compactu64_t now;
} pd_timestamp_set_V11_t;

#define PD_CALL_INDICES_CLAIM_V11 0
typedef struct {
    pd_AccountIndex_V11_t index;
} pd_indices_claim_V11_t;

#define PD_CALL_INDICES_TRANSFER_V11 1
typedef struct {
    pd_AccountId_V11_t new_;
    pd_AccountIndex_V11_t index;
} pd_indices_transfer_V11_t;

#define PD_CALL_INDICES_FREE_V11 2
typedef struct {
    pd_AccountIndex_V11_t index;
} pd_indices_free_V11_t;

#define PD_CALL_INDICES_FORCE_TRANSFER_V11 3
typedef struct {
    pd_AccountId_V11_t new_;
    pd_AccountIndex_V11_t index;
    pd_bool_t freeze;
} pd_indices_force_transfer_V11_t;

#define PD_CALL_INDICES_FREEZE_V11 4
typedef struct {
    pd_AccountIndex_V11_t index;
} pd_indices_freeze_V11_t;

#define PD_CALL_BALANCES_FORCE_UNRESERVE_V11 5
typedef struct {
    pd_LookupasStaticLookupSource_V11_t who;
    pd_Balance_t amount;
} pd_balances_force_unreserve_V11_t;

#define PD_CALL_STAKING_SET_VALIDATOR_COUNT_V11 9
typedef struct {
    pd_Compactu32_t new_;
} pd_staking_set_validator_count_V11_t;

#define PD_CALL_STAKING_INCREASE_VALIDATOR_COUNT_V11 10
typedef struct {
    pd_Compactu32_t additional;
} pd_staking_increase_validator_count_V11_t;

#define PD_CALL_STAKING_FORCE_NO_ERAS_V11 12
typedef struct {
} pd_staking_force_no_eras_V11_t;

#define PD_CALL_STAKING_FORCE_NEW_ERA_V11 13
typedef struct {
} pd_staking_force_new_era_V11_t;

#define PD_CALL_STAKING_FORCE_UNSTAKE_V11 15
typedef struct {
    pd_AccountId_V11_t stash;
    pd_u32_t num_slashing_spans;
} pd_staking_force_unstake_V11_t;

#define PD_CALL_STAKING_FORCE_NEW_ERA_ALWAYS_V11 16
typedef struct {
} pd_staking_force_new_era_always_V11_t;

#define PD_CALL_STAKING_SET_HISTORY_DEPTH_V11 20
typedef struct {
    pd_Compactu32_t new_history_depth;
    pd_Compactu32_t era_items_deleted;
} pd_staking_set_history_depth_V11_t;

#define PD_CALL_STAKING_REAP_STASH_V11 21
typedef struct {
    pd_AccountId_V11_t stash;
    pd_u32_t num_slashing_spans;
} pd_staking_reap_stash_V11_t;

#define PD_CALL_STAKING_KICK_V11 22
typedef struct {
    pd_VecLookupasStaticLookupSource_V11_t who;
} pd_staking_kick_V11_t;

#define PD_CALL_STAKING_CHILL_OTHER_V11 24
typedef struct {
    pd_AccountId_V11_t controller;
} pd_staking_chill_other_V11_t;

#define PD_CALL_STAKING_FORCE_APPLY_MIN_COMMISSION_V11 25
typedef struct {
    pd_AccountId_V11_t validator_stash;
} pd_staking_force_apply_min_commission_V11_t;

#define PD_CALL_GRANDPA_NOTE_STALLED_V11 2
typedef struct {
    pd_BlockNumber_t delay;
    pd_BlockNumber_t best_finalized_block_number;
} pd_grandpa_note_stalled_V11_t;

#define PD_CALL_DEMOCRACY_PROPOSE_V11 0
typedef struct {
    pd_Hash_t proposal_hash;
    pd_CompactBalance_t amount;
} pd_democracy_propose_V11_t;

#define PD_CALL_DEMOCRACY_SECOND_V11 1
typedef struct {
    pd_Compactu32_t proposal;
    pd_Compactu32_t seconds_upper_bound;
} pd_democracy_second_V11_t;

#define PD_CALL_DEMOCRACY_VOTE_V11 2
typedef struct {
    pd_Compactu32_t ref_index;
    pd_AccountVote_V11_t vote;
} pd_democracy_vote_V11_t;

#define PD_CALL_DEMOCRACY_EMERGENCY_CANCEL_V11 3
typedef struct {
    pd_ReferendumIndex_V11_t ref_index;
} pd_democracy_emergency_cancel_V11_t;

#define PD_CALL_DEMOCRACY_EXTERNAL_PROPOSE_V11 4
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_external_propose_V11_t;

#define PD_CALL_DEMOCRACY_EXTERNAL_PROPOSE_MAJORITY_V11 5
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_external_propose_majority_V11_t;

#define PD_CALL_DEMOCRACY_EXTERNAL_PROPOSE_DEFAULT_V11 6
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_external_propose_default_V11_t;

#define PD_CALL_DEMOCRACY_FAST_TRACK_V11 7
typedef struct {
    pd_Hash_t proposal_hash;
    pd_BlockNumber_t voting_period;
    pd_BlockNumber_t delay;
} pd_democracy_fast_track_V11_t;

#define PD_CALL_DEMOCRACY_VETO_EXTERNAL_V11 8
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_veto_external_V11_t;

#define PD_CALL_DEMOCRACY_CANCEL_REFERENDUM_V11 9
typedef struct {
    pd_Compactu32_t ref_index;
} pd_democracy_cancel_referendum_V11_t;

#define PD_CALL_DEMOCRACY_CANCEL_QUEUED_V11 10
typedef struct {
    pd_ReferendumIndex_V11_t which;
} pd_democracy_cancel_queued_V11_t;

#define PD_CALL_DEMOCRACY_DELEGATE_V11 11
typedef struct {
    pd_AccountId_V11_t to;
    pd_Conviction_V11_t conviction;
    pd_Balance_t balance;
} pd_democracy_delegate_V11_t;

#define PD_CALL_DEMOCRACY_UNDELEGATE_V11 12
typedef struct {
} pd_democracy_undelegate_V11_t;

#define PD_CALL_DEMOCRACY_CLEAR_PUBLIC_PROPOSALS_V11 13
typedef struct {
} pd_democracy_clear_public_proposals_V11_t;

#define PD_CALL_DEMOCRACY_NOTE_PREIMAGE_V11 14
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_preimage_V11_t;

#define PD_CALL_DEMOCRACY_NOTE_PREIMAGE_OPERATIONAL_V11 15
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_preimage_operational_V11_t;

#define PD_CALL_DEMOCRACY_NOTE_IMMINENT_PREIMAGE_V11 16
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_imminent_preimage_V11_t;

#define PD_CALL_DEMOCRACY_NOTE_IMMINENT_PREIMAGE_OPERATIONAL_V11 17
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_imminent_preimage_operational_V11_t;

#define PD_CALL_DEMOCRACY_REAP_PREIMAGE_V11 18
typedef struct {
    pd_Hash_t proposal_hash;
    pd_Compactu32_t proposal_len_upper_bound;
} pd_democracy_reap_preimage_V11_t;

#define PD_CALL_DEMOCRACY_UNLOCK_V11 19
typedef struct {
    pd_AccountId_V11_t target;
} pd_democracy_unlock_V11_t;

#define PD_CALL_DEMOCRACY_REMOVE_VOTE_V11 20
typedef struct {
    pd_ReferendumIndex_V11_t index;
} pd_democracy_remove_vote_V11_t;

#define PD_CALL_DEMOCRACY_REMOVE_OTHER_VOTE_V11 21
typedef struct {
    pd_AccountId_V11_t target;
    pd_ReferendumIndex_V11_t index;
} pd_democracy_remove_other_vote_V11_t;

#define PD_CALL_DEMOCRACY_ENACT_PROPOSAL_V11 22
typedef struct {
    pd_Hash_t proposal_hash;
    pd_ReferendumIndex_V11_t index;
} pd_democracy_enact_proposal_V11_t;

#define PD_CALL_DEMOCRACY_CANCEL_PROPOSAL_V11 24
typedef struct {
    pd_Compactu32_t prop_index;
} pd_democracy_cancel_proposal_V11_t;

#define PD_CALL_COUNCIL_SET_MEMBERS_V11 0
typedef struct {
    pd_VecAccountId_V11_t new_members;
    pd_OptionAccountId_V11_t prime;
    pd_MemberCount_V11_t old_count;
} pd_council_set_members_V11_t;

#define PD_CALL_COUNCIL_EXECUTE_V11 1
typedef struct {
    pd_Proposal_t proposal;
    pd_Compactu32_t length_bound;
} pd_council_execute_V11_t;

#define PD_CALL_COUNCIL_PROPOSE_V11 2
typedef struct {
    pd_Compactu32_t threshold;
    pd_Proposal_t proposal;
    pd_Compactu32_t length_bound;
} pd_council_propose_V11_t;

#define PD_CALL_COUNCIL_VOTE_V11 3
typedef struct {
    pd_Hash_t proposal;
    pd_Compactu32_t index;
    pd_bool_t approve;
} pd_council_vote_V11_t;

#define PD_CALL_COUNCIL_CLOSE_V11 4
typedef struct {
    pd_Hash_t proposal_hash;
    pd_Compactu32_t index;
    pd_Compactu64_t proposal_weight_bound;
    pd_Compactu32_t length_bound;
} pd_council_close_V11_t;

#define PD_CALL_COUNCIL_DISAPPROVE_PROPOSAL_V11 5
typedef struct {
    pd_Hash_t proposal_hash;
} pd_council_disapprove_proposal_V11_t;

#define PD_CALL_TECHNICALCOMMITTEE_DISAPPROVE_PROPOSAL_V11 5
typedef struct {
    pd_Hash_t proposal_hash;
} pd_technicalcommittee_disapprove_proposal_V11_t;

#define PD_CALL_PHRAGMENELECTION_REMOVE_VOTER_V11 1
typedef struct {
} pd_phragmenelection_remove_voter_V11_t;

#define PD_CALL_PHRAGMENELECTION_SUBMIT_CANDIDACY_V11 2
typedef struct {
    pd_Compactu32_t candidate_count;
} pd_phragmenelection_submit_candidacy_V11_t;

#define PD_CALL_PHRAGMENELECTION_REMOVE_MEMBER_V11 4
typedef struct {
    pd_LookupasStaticLookupSource_V11_t who;
    pd_bool_t has_replacement;
} pd_phragmenelection_remove_member_V11_t;

#define PD_CALL_PHRAGMENELECTION_CLEAN_DEFUNCT_VOTERS_V11 5
typedef struct {
    pd_u32_t num_voters;
    pd_u32_t num_defunct;
} pd_phragmenelection_clean_defunct_voters_V11_t;

#define PD_CALL_TECHNICALMEMBERSHIP_ADD_MEMBER_V11 0
typedef struct {
    pd_AccountId_V11_t who;
} pd_technicalmembership_add_member_V11_t;

#define PD_CALL_TECHNICALMEMBERSHIP_REMOVE_MEMBER_V11 1
typedef struct {
    pd_AccountId_V11_t who;
} pd_technicalmembership_remove_member_V11_t;

#define PD_CALL_TECHNICALMEMBERSHIP_SWAP_MEMBER_V11 2
typedef struct {
    pd_AccountId_V11_t remove;
    pd_AccountId_V11_t add;
} pd_technicalmembership_swap_member_V11_t;

#define PD_CALL_TECHNICALMEMBERSHIP_RESET_MEMBERS_V11 3
typedef struct {
    pd_VecAccountId_V11_t members;
} pd_technicalmembership_reset_members_V11_t;

#define PD_CALL_TECHNICALMEMBERSHIP_CHANGE_KEY_V11 4
typedef struct {
    pd_AccountId_V11_t new_;
} pd_technicalmembership_change_key_V11_t;

#define PD_CALL_TECHNICALMEMBERSHIP_SET_PRIME_V11 5
typedef struct {
    pd_AccountId_V11_t who;
} pd_technicalmembership_set_prime_V11_t;

#define PD_CALL_TECHNICALMEMBERSHIP_CLEAR_PRIME_V11 6
typedef struct {
} pd_technicalmembership_clear_prime_V11_t;

#define PD_CALL_TREASURY_PROPOSE_SPEND_V11 0
typedef struct {
    pd_CompactBalance_t amount;
    pd_LookupasStaticLookupSource_V11_t beneficiary;
} pd_treasury_propose_spend_V11_t;

#define PD_CALL_TREASURY_REJECT_PROPOSAL_V11 1
typedef struct {
    pd_Compactu32_t proposal_id;
} pd_treasury_reject_proposal_V11_t;

#define PD_CALL_TREASURY_APPROVE_PROPOSAL_V11 2
typedef struct {
    pd_Compactu32_t proposal_id;
} pd_treasury_approve_proposal_V11_t;

#define PD_CALL_TREASURY_REMOVE_APPROVAL_V11 3
typedef struct {
    pd_Compactu32_t proposal_id;
} pd_treasury_remove_approval_V11_t;

#define PD_CALL_CLAIMS_CLAIM_V11 0
typedef struct {
    pd_AccountId_V11_t dest;
    pd_EcdsaSignature_V11_t ethereum_signature;
} pd_claims_claim_V11_t;

#define PD_CALL_CLAIMS_CLAIM_ATTEST_V11 2
typedef struct {
    pd_AccountId_V11_t dest;
    pd_EcdsaSignature_V11_t ethereum_signature;
    pd_Bytes_t statement;
} pd_claims_claim_attest_V11_t;

#define PD_CALL_CLAIMS_ATTEST_V11 3
typedef struct {
    pd_Bytes_t statement;
} pd_claims_attest_V11_t;

#define PD_CALL_CLAIMS_MOVE_CLAIM_V11 4
typedef struct {
    pd_EthereumAddress_V11_t old;
    pd_EthereumAddress_V11_t new_;
    pd_OptionAccountId_V11_t maybe_preclaim;
} pd_claims_move_claim_V11_t;

#define PD_CALL_IDENTITY_ADD_REGISTRAR_V11 0
typedef struct {
    pd_AccountId_V11_t account;
} pd_identity_add_registrar_V11_t;

#define PD_CALL_IDENTITY_CLEAR_IDENTITY_V11 3
typedef struct {
} pd_identity_clear_identity_V11_t;

#define PD_CALL_IDENTITY_REQUEST_JUDGEMENT_V11 4
typedef struct {
    pd_Compactu32_t reg_index;
    pd_Compactu128_t max_fee;
} pd_identity_request_judgement_V11_t;

#define PD_CALL_IDENTITY_CANCEL_REQUEST_V11 5
typedef struct {
    pd_RegistrarIndex_V11_t reg_index;
} pd_identity_cancel_request_V11_t;

#define PD_CALL_IDENTITY_SET_FEE_V11 6
typedef struct {
    pd_Compactu32_t index;
    pd_Compactu128_t fee;
} pd_identity_set_fee_V11_t;

#define PD_CALL_IDENTITY_SET_ACCOUNT_ID_V11 7
typedef struct {
    pd_Compactu32_t index;
    pd_AccountId_V11_t new_;
} pd_identity_set_account_id_V11_t;

#define PD_CALL_IDENTITY_KILL_IDENTITY_V11 10
typedef struct {
    pd_LookupasStaticLookupSource_V11_t target;
} pd_identity_kill_identity_V11_t;

#define PD_CALL_IDENTITY_REMOVE_SUB_V11 13
typedef struct {
    pd_LookupasStaticLookupSource_V11_t sub;
} pd_identity_remove_sub_V11_t;

#define PD_CALL_IDENTITY_QUIT_SUB_V11 14
typedef struct {
} pd_identity_quit_sub_V11_t;

#define PD_CALL_SOCIETY_BID_V11 0
typedef struct {
    pd_BalanceOf_t amount;
} pd_society_bid_V11_t;

#define PD_CALL_SOCIETY_UNBID_V11 1
typedef struct {
    pd_u32_t pos;
} pd_society_unbid_V11_t;

#define PD_CALL_SOCIETY_VOUCH_V11 2
typedef struct {
    pd_AccountId_V11_t who;
    pd_BalanceOf_t amount;
    pd_BalanceOf_t tip;
} pd_society_vouch_V11_t;

#define PD_CALL_SOCIETY_UNVOUCH_V11 3
typedef struct {
    pd_u32_t pos;
} pd_society_unvouch_V11_t;

#define PD_CALL_SOCIETY_VOTE_V11 4
typedef struct {
    pd_LookupasStaticLookupSource_V11_t candidate;
    pd_bool_t approve;
} pd_society_vote_V11_t;

#define PD_CALL_SOCIETY_DEFENDER_VOTE_V11 5
typedef struct {
    pd_bool_t approve;
} pd_society_defender_vote_V11_t;

#define PD_CALL_SOCIETY_PAYOUT_V11 6
typedef struct {
} pd_society_payout_V11_t;

#define PD_CALL_SOCIETY_FOUND_V11 7
typedef struct {
    pd_AccountId_V11_t founder;
    pd_u32_t max_members;
    pd_Bytes_t rules;
} pd_society_found_V11_t;

#define PD_CALL_SOCIETY_UNFOUND_V11 8
typedef struct {
} pd_society_unfound_V11_t;

#define PD_CALL_SOCIETY_JUDGE_SUSPENDED_MEMBER_V11 9
typedef struct {
    pd_AccountId_V11_t who;
    pd_bool_t forgive;
} pd_society_judge_suspended_member_V11_t;

#define PD_CALL_SOCIETY_SET_MAX_MEMBERS_V11 11
typedef struct {
    pd_u32_t max;
} pd_society_set_max_members_V11_t;

#define PD_CALL_RECOVERY_SET_RECOVERED_V11 1
typedef struct {
    pd_AccountId_V11_t lost;
    pd_AccountId_V11_t rescuer;
} pd_recovery_set_recovered_V11_t;

#define PD_CALL_RECOVERY_INITIATE_RECOVERY_V11 3
typedef struct {
    pd_AccountId_V11_t account;
} pd_recovery_initiate_recovery_V11_t;

#define PD_CALL_RECOVERY_VOUCH_RECOVERY_V11 4
typedef struct {
    pd_AccountId_V11_t lost;
    pd_AccountId_V11_t rescuer;
} pd_recovery_vouch_recovery_V11_t;

#define PD_CALL_RECOVERY_CLAIM_RECOVERY_V11 5
typedef struct {
    pd_AccountId_V11_t account;
} pd_recovery_claim_recovery_V11_t;

#define PD_CALL_RECOVERY_CLOSE_RECOVERY_V11 6
typedef struct {
    pd_AccountId_V11_t rescuer;
} pd_recovery_close_recovery_V11_t;

#define PD_CALL_RECOVERY_REMOVE_RECOVERY_V11 7
typedef struct {
} pd_recovery_remove_recovery_V11_t;

#define PD_CALL_RECOVERY_CANCEL_RECOVERED_V11 8
typedef struct {
    pd_AccountId_V11_t account;
} pd_recovery_cancel_recovered_V11_t;

#define PD_CALL_VESTING_VEST_V11 0
typedef struct {
} pd_vesting_vest_V11_t;

#define PD_CALL_VESTING_VEST_OTHER_V11 1
typedef struct {
    pd_LookupasStaticLookupSource_V11_t target;
} pd_vesting_vest_other_V11_t;

#define PD_CALL_VESTING_MERGE_SCHEDULES_V11 4
typedef struct {
    pd_u32_t schedule1_index;
    pd_u32_t schedule2_index;
} pd_vesting_merge_schedules_V11_t;

#define PD_CALL_PROXY_ADD_PROXY_V11 1
typedef struct {
    pd_AccountId_V11_t delegate;
    pd_ProxyType_V11_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_add_proxy_V11_t;

#define PD_CALL_PROXY_REMOVE_PROXY_V11 2
typedef struct {
    pd_AccountId_V11_t delegate;
    pd_ProxyType_V11_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_remove_proxy_V11_t;

#define PD_CALL_PROXY_REMOVE_PROXIES_V11 3
typedef struct {
} pd_proxy_remove_proxies_V11_t;

#define PD_CALL_PROXY_ANONYMOUS_V11 4
typedef struct {
    pd_ProxyType_V11_t proxy_type;
    pd_BlockNumber_t delay;
    pd_u16_t index;
} pd_proxy_anonymous_V11_t;

#define PD_CALL_PROXY_KILL_ANONYMOUS_V11 5
typedef struct {
    pd_AccountId_V11_t spawner;
    pd_ProxyType_V11_t proxy_type;
    pd_u16_t index;
    pd_Compactu32_t height;
    pd_Compactu32_t ext_index;
} pd_proxy_kill_anonymous_V11_t;

#define PD_CALL_PROXY_PROXY_ANNOUNCED_V11 9
typedef struct {
    pd_AccountId_V11_t delegate;
    pd_AccountId_V11_t real;
    pd_OptionProxyType_V11_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_announced_V11_t;

#define PD_CALL_PREIMAGE_NOTE_PREIMAGE_V11 0
typedef struct {
    pd_Vecu8_t bytes;
} pd_preimage_note_preimage_V11_t;

#define PD_CALL_PREIMAGE_UNNOTE_PREIMAGE_V11 1
typedef struct {
    pd_Hash_t hash;
} pd_preimage_unnote_preimage_V11_t;

#define PD_CALL_PREIMAGE_REQUEST_PREIMAGE_V11 2
typedef struct {
    pd_Hash_t hash;
} pd_preimage_request_preimage_V11_t;

#define PD_CALL_PREIMAGE_UNREQUEST_PREIMAGE_V11 3
typedef struct {
    pd_Hash_t hash;
} pd_preimage_unrequest_preimage_V11_t;

#define PD_CALL_BOUNTIES_PROPOSE_BOUNTY_V11 0
typedef struct {
    pd_CompactBalance_t amount;
    pd_Bytes_t description;
} pd_bounties_propose_bounty_V11_t;

#define PD_CALL_BOUNTIES_APPROVE_BOUNTY_V11 1
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_approve_bounty_V11_t;

#define PD_CALL_BOUNTIES_PROPOSE_CURATOR_V11 2
typedef struct {
    pd_Compactu32_t bounty_id;
    pd_LookupasStaticLookupSource_V11_t curator;
    pd_CompactBalance_t fee;
} pd_bounties_propose_curator_V11_t;

#define PD_CALL_BOUNTIES_UNASSIGN_CURATOR_V11 3
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_unassign_curator_V11_t;

#define PD_CALL_BOUNTIES_ACCEPT_CURATOR_V11 4
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_accept_curator_V11_t;

#define PD_CALL_BOUNTIES_AWARD_BOUNTY_V11 5
typedef struct {
    pd_Compactu32_t bounty_id;
    pd_LookupasStaticLookupSource_V11_t beneficiary;
} pd_bounties_award_bounty_V11_t;

#define PD_CALL_BOUNTIES_CLAIM_BOUNTY_V11 6
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_claim_bounty_V11_t;

#define PD_CALL_BOUNTIES_CLOSE_BOUNTY_V11 7
typedef struct {
    pd_Compactu32_t bounty_id;
} pd_bounties_close_bounty_V11_t;

#define PD_CALL_BOUNTIES_EXTEND_BOUNTY_EXPIRY_V11 8
typedef struct {
    pd_Compactu32_t bounty_id;
    pd_Bytes_t remark;
} pd_bounties_extend_bounty_expiry_V11_t;

#define PD_CALL_CHILDBOUNTIES_ADD_CHILD_BOUNTY_V11 0
typedef struct {
    pd_Compactu32_t parent_bounty_id;
    pd_CompactBalance_t amount;
    pd_Vecu8_t description;
} pd_childbounties_add_child_bounty_V11_t;

#define PD_CALL_CHILDBOUNTIES_PROPOSE_CURATOR_V11 1
typedef struct {
    pd_Compactu32_t parent_bounty_id;
    pd_Compactu32_t child_bounty_id;
    pd_LookupasStaticLookupSource_V11_t curator;
    pd_CompactBalance_t fee;
} pd_childbounties_propose_curator_V11_t;

#define PD_CALL_CHILDBOUNTIES_ACCEPT_CURATOR_V11 2
typedef struct {
    pd_Compactu32_t parent_bounty_id;
    pd_Compactu32_t child_bounty_id;
} pd_childbounties_accept_curator_V11_t;

#define PD_CALL_CHILDBOUNTIES_UNASSIGN_CURATOR_V11 3
typedef struct {
    pd_Compactu32_t parent_bounty_id;
    pd_Compactu32_t child_bounty_id;
} pd_childbounties_unassign_curator_V11_t;

#define PD_CALL_CHILDBOUNTIES_AWARD_CHILD_BOUNTY_V11 4
typedef struct {
    pd_Compactu32_t parent_bounty_id;
    pd_Compactu32_t child_bounty_id;
    pd_LookupasStaticLookupSource_V11_t beneficiary;
} pd_childbounties_award_child_bounty_V11_t;

#define PD_CALL_CHILDBOUNTIES_CLAIM_CHILD_BOUNTY_V11 5
typedef struct {
    pd_Compactu32_t parent_bounty_id;
    pd_Compactu32_t child_bounty_id;
} pd_childbounties_claim_child_bounty_V11_t;

#define PD_CALL_CHILDBOUNTIES_CLOSE_CHILD_BOUNTY_V11 6
typedef struct {
    pd_Compactu32_t parent_bounty_id;
    pd_Compactu32_t child_bounty_id;
} pd_childbounties_close_child_bounty_V11_t;

#define PD_CALL_TIPS_REPORT_AWESOME_V11 0
typedef struct {
    pd_Bytes_t reason;
    pd_AccountId_V11_t who;
} pd_tips_report_awesome_V11_t;

#define PD_CALL_TIPS_RETRACT_TIP_V11 1
typedef struct {
    pd_Hash_t hash;
} pd_tips_retract_tip_V11_t;

#define PD_CALL_TIPS_TIP_NEW_V11 2
typedef struct {
    pd_Bytes_t reason;
    pd_AccountId_V11_t who;
    pd_Compactu128_t tip_value;
} pd_tips_tip_new_V11_t;

#define PD_CALL_TIPS_TIP_V11 3
typedef struct {
    pd_Hash_t hash;
    pd_Compactu128_t tip_value;
} pd_tips_tip_V11_t;

#define PD_CALL_TIPS_CLOSE_TIP_V11 4
typedef struct {
    pd_Hash_t hash;
} pd_tips_close_tip_V11_t;

#define PD_CALL_TIPS_SLASH_TIP_V11 5
typedef struct {
    pd_Hash_t hash;
} pd_tips_slash_tip_V11_t;

#define PD_CALL_ELECTIONPROVIDERMULTIPHASE_GOVERNANCE_FALLBACK_V11 4
typedef struct {
    pd_Optionu32_t maybe_max_voters;
    pd_Optionu32_t maybe_max_targets;
} pd_electionprovidermultiphase_governance_fallback_V11_t;

#define PD_CALL_GILT_PLACE_BID_V11 0
typedef struct {
    pd_CompactBalance_t amount;
    pd_u32_t duration;
} pd_gilt_place_bid_V11_t;

#define PD_CALL_GILT_RETRACT_BID_V11 1
typedef struct {
    pd_CompactBalance_t amount;
    pd_u32_t duration;
} pd_gilt_retract_bid_V11_t;

#define PD_CALL_GILT_SET_TARGET_V11 2
typedef struct {
    pd_Compactu64_t target;
} pd_gilt_set_target_V11_t;

#define PD_CALL_GILT_THAW_V11 3
typedef struct {
    pd_Compactu32_t index;
} pd_gilt_thaw_V11_t;

#define PD_CALL_BAGSLIST_REBAG_V11 0
typedef struct {
    pd_AccountId_V11_t dislocated;
} pd_bagslist_rebag_V11_t;

#define PD_CALL_BAGSLIST_PUT_IN_FRONT_OF_V11 1
typedef struct {
    pd_AccountId_V11_t lighter;
} pd_bagslist_put_in_front_of_V11_t;

#define PD_CALL_CONFIGURATION_SET_VALIDATION_UPGRADE_COOLDOWN_V11 0
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_validation_upgrade_cooldown_V11_t;

#define PD_CALL_CONFIGURATION_SET_VALIDATION_UPGRADE_DELAY_V11 1
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_validation_upgrade_delay_V11_t;

#define PD_CALL_CONFIGURATION_SET_CODE_RETENTION_PERIOD_V11 2
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_code_retention_period_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_CODE_SIZE_V11 3
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_code_size_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_POV_SIZE_V11 4
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_pov_size_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_HEAD_DATA_SIZE_V11 5
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_head_data_size_V11_t;

#define PD_CALL_CONFIGURATION_SET_PARATHREAD_CORES_V11 6
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_parathread_cores_V11_t;

#define PD_CALL_CONFIGURATION_SET_PARATHREAD_RETRIES_V11 7
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_parathread_retries_V11_t;

#define PD_CALL_CONFIGURATION_SET_GROUP_ROTATION_FREQUENCY_V11 8
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_group_rotation_frequency_V11_t;

#define PD_CALL_CONFIGURATION_SET_CHAIN_AVAILABILITY_PERIOD_V11 9
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_chain_availability_period_V11_t;

#define PD_CALL_CONFIGURATION_SET_THREAD_AVAILABILITY_PERIOD_V11 10
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_thread_availability_period_V11_t;

#define PD_CALL_CONFIGURATION_SET_SCHEDULING_LOOKAHEAD_V11 11
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_scheduling_lookahead_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_VALIDATORS_PER_CORE_V11 12
typedef struct {
    pd_Optionu32_t new_;
} pd_configuration_set_max_validators_per_core_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_VALIDATORS_V11 13
typedef struct {
    pd_Optionu32_t new_;
} pd_configuration_set_max_validators_V11_t;

#define PD_CALL_CONFIGURATION_SET_DISPUTE_PERIOD_V11 14
typedef struct {
    pd_SessionIndex_V11_t new_;
} pd_configuration_set_dispute_period_V11_t;

#define PD_CALL_CONFIGURATION_SET_DISPUTE_POST_CONCLUSION_ACCEPTANCE_PERIOD_V11 15
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_dispute_post_conclusion_acceptance_period_V11_t;

#define PD_CALL_CONFIGURATION_SET_DISPUTE_MAX_SPAM_SLOTS_V11 16
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_dispute_max_spam_slots_V11_t;

#define PD_CALL_CONFIGURATION_SET_DISPUTE_CONCLUSION_BY_TIME_OUT_PERIOD_V11 17
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_dispute_conclusion_by_time_out_period_V11_t;

#define PD_CALL_CONFIGURATION_SET_NO_SHOW_SLOTS_V11 18
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_no_show_slots_V11_t;

#define PD_CALL_CONFIGURATION_SET_N_DELAY_TRANCHES_V11 19
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_n_delay_tranches_V11_t;

#define PD_CALL_CONFIGURATION_SET_ZEROTH_DELAY_TRANCHE_WIDTH_V11 20
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_zeroth_delay_tranche_width_V11_t;

#define PD_CALL_CONFIGURATION_SET_NEEDED_APPROVALS_V11 21
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_needed_approvals_V11_t;

#define PD_CALL_CONFIGURATION_SET_RELAY_VRF_MODULO_SAMPLES_V11 22
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_relay_vrf_modulo_samples_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_UPWARD_QUEUE_COUNT_V11 23
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_upward_queue_count_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_UPWARD_QUEUE_SIZE_V11 24
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_upward_queue_size_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_DOWNWARD_MESSAGE_SIZE_V11 25
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_downward_message_size_V11_t;

#define PD_CALL_CONFIGURATION_SET_UMP_SERVICE_TOTAL_WEIGHT_V11 26
typedef struct {
    pd_Weight_V11_t new_;
} pd_configuration_set_ump_service_total_weight_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_UPWARD_MESSAGE_SIZE_V11 27
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_upward_message_size_V11_t;

#define PD_CALL_CONFIGURATION_SET_MAX_UPWARD_MESSAGE_NUM_PER_CANDIDATE_V11 28
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_max_upward_message_num_per_candidate_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_OPEN_REQUEST_TTL_V11 29
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_open_request_ttl_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_SENDER_DEPOSIT_V11 30
typedef struct {
    pd_Balance_t new_;
} pd_configuration_set_hrmp_sender_deposit_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_RECIPIENT_DEPOSIT_V11 31
typedef struct {
    pd_Balance_t new_;
} pd_configuration_set_hrmp_recipient_deposit_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_CHANNEL_MAX_CAPACITY_V11 32
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_channel_max_capacity_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_CHANNEL_MAX_TOTAL_SIZE_V11 33
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_channel_max_total_size_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_PARACHAIN_INBOUND_CHANNELS_V11 34
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_parachain_inbound_channels_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_PARATHREAD_INBOUND_CHANNELS_V11 35
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_parathread_inbound_channels_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_CHANNEL_MAX_MESSAGE_SIZE_V11 36
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_channel_max_message_size_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_PARACHAIN_OUTBOUND_CHANNELS_V11 37
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_parachain_outbound_channels_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_PARATHREAD_OUTBOUND_CHANNELS_V11 38
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_parathread_outbound_channels_V11_t;

#define PD_CALL_CONFIGURATION_SET_HRMP_MAX_MESSAGE_NUM_PER_CANDIDATE_V11 39
typedef struct {
    pd_u32_t new_;
} pd_configuration_set_hrmp_max_message_num_per_candidate_V11_t;

#define PD_CALL_CONFIGURATION_SET_UMP_MAX_INDIVIDUAL_WEIGHT_V11 40
typedef struct {
    pd_Weight_V11_t new_;
} pd_configuration_set_ump_max_individual_weight_V11_t;

#define PD_CALL_CONFIGURATION_SET_PVF_CHECKING_ENABLED_V11 41
typedef struct {
    pd_bool_t new_;
} pd_configuration_set_pvf_checking_enabled_V11_t;

#define PD_CALL_CONFIGURATION_SET_PVF_VOTING_TTL_V11 42
typedef struct {
    pd_SessionIndex_V11_t new_;
} pd_configuration_set_pvf_voting_ttl_V11_t;

#define PD_CALL_CONFIGURATION_SET_MINIMUM_VALIDATION_UPGRADE_DELAY_V11 43
typedef struct {
    pd_BlockNumber_t new_;
} pd_configuration_set_minimum_validation_upgrade_delay_V11_t;

#define PD_CALL_CONFIGURATION_SET_BYPASS_CONSISTENCY_CHECK_V11 44
typedef struct {
    pd_bool_t new_;
} pd_configuration_set_bypass_consistency_check_V11_t;

#define PD_CALL_INITIALIZER_FORCE_APPROVE_V11 0
typedef struct {
    pd_BlockNumber_t up_to;
} pd_initializer_force_approve_V11_t;

#define PD_CALL_HRMP_FORCE_PROCESS_HRMP_OPEN_V11 4
typedef struct {
    pd_u32_t channels;
} pd_hrmp_force_process_hrmp_open_V11_t;

#define PD_CALL_HRMP_FORCE_PROCESS_HRMP_CLOSE_V11 5
typedef struct {
    pd_u32_t channels;
} pd_hrmp_force_process_hrmp_close_V11_t;

#define PD_CALL_PARASDISPUTES_FORCE_UNFREEZE_V11 0
typedef struct {
} pd_parasdisputes_force_unfreeze_V11_t;

#define PD_CALL_REGISTRAR_RESERVE_V11 5
typedef struct {
} pd_registrar_reserve_V11_t;

#define PD_CALL_AUCTIONS_NEW_AUCTION_V11 0
typedef struct {
    pd_Compactu32_t duration;
    pd_Compactu32_t lease_period_index;
} pd_auctions_new_auction_V11_t;

#define PD_CALL_AUCTIONS_BID_V11 1
typedef struct {
    pd_Compactu32_t para;
    pd_Compactu32_t auction_index;
    pd_Compactu32_t first_slot;
    pd_Compactu32_t last_slot;
    pd_CompactBalance_t amount;
} pd_auctions_bid_V11_t;

#define PD_CALL_AUCTIONS_CANCEL_AUCTION_V11 2
typedef struct {
} pd_auctions_cancel_auction_V11_t;

#endif

typedef union {
    pd_balances_transfer_all_V11_t balances_transfer_all_V11;
    pd_staking_bond_V11_t staking_bond_V11;
    pd_staking_bond_extra_V11_t staking_bond_extra_V11;
    pd_staking_unbond_V11_t staking_unbond_V11;
    pd_staking_withdraw_unbonded_V11_t staking_withdraw_unbonded_V11;
    pd_staking_validate_V11_t staking_validate_V11;
    pd_staking_nominate_V11_t staking_nominate_V11;
    pd_staking_chill_V11_t staking_chill_V11;
    pd_staking_set_payee_V11_t staking_set_payee_V11;
    pd_staking_set_controller_V11_t staking_set_controller_V11;
    pd_staking_payout_stakers_V11_t staking_payout_stakers_V11;
    pd_staking_rebond_V11_t staking_rebond_V11;
    pd_session_set_keys_V11_t session_set_keys_V11;
    pd_session_purge_keys_V11_t session_purge_keys_V11;
    pd_utility_batch_V11_t utility_batch_V11;
    pd_utility_batch_all_V11_t utility_batch_all_V11;
    pd_utility_force_batch_V11_t utility_force_batch_V11;
    pd_crowdloan_create_V11_t crowdloan_create_V11;
    pd_crowdloan_contribute_V11_t crowdloan_contribute_V11;
    pd_crowdloan_withdraw_V11_t crowdloan_withdraw_V11;
    pd_crowdloan_refund_V11_t crowdloan_refund_V11;
    pd_crowdloan_dissolve_V11_t crowdloan_dissolve_V11;
    pd_crowdloan_edit_V11_t crowdloan_edit_V11;
    pd_crowdloan_add_memo_V11_t crowdloan_add_memo_V11;
    pd_crowdloan_poke_V11_t crowdloan_poke_V11;
    pd_crowdloan_contribute_all_V11_t crowdloan_contribute_all_V11;
#ifdef SUBSTRATE_PARSER_FULL
    pd_timestamp_set_V11_t timestamp_set_V11;
    pd_indices_claim_V11_t indices_claim_V11;
    pd_indices_transfer_V11_t indices_transfer_V11;
    pd_indices_free_V11_t indices_free_V11;
    pd_indices_force_transfer_V11_t indices_force_transfer_V11;
    pd_indices_freeze_V11_t indices_freeze_V11;
    pd_balances_force_unreserve_V11_t balances_force_unreserve_V11;
    pd_staking_set_validator_count_V11_t staking_set_validator_count_V11;
    pd_staking_increase_validator_count_V11_t staking_increase_validator_count_V11;
    pd_staking_force_no_eras_V11_t staking_force_no_eras_V11;
    pd_staking_force_new_era_V11_t staking_force_new_era_V11;
    pd_staking_force_unstake_V11_t staking_force_unstake_V11;
    pd_staking_force_new_era_always_V11_t staking_force_new_era_always_V11;
    pd_staking_set_history_depth_V11_t staking_set_history_depth_V11;
    pd_staking_reap_stash_V11_t staking_reap_stash_V11;
    pd_staking_kick_V11_t staking_kick_V11;
    pd_staking_chill_other_V11_t staking_chill_other_V11;
    pd_staking_force_apply_min_commission_V11_t staking_force_apply_min_commission_V11;
    pd_grandpa_note_stalled_V11_t grandpa_note_stalled_V11;
    pd_democracy_propose_V11_t democracy_propose_V11;
    pd_democracy_second_V11_t democracy_second_V11;
    pd_democracy_vote_V11_t democracy_vote_V11;
    pd_democracy_emergency_cancel_V11_t democracy_emergency_cancel_V11;
    pd_democracy_external_propose_V11_t democracy_external_propose_V11;
    pd_democracy_external_propose_majority_V11_t democracy_external_propose_majority_V11;
    pd_democracy_external_propose_default_V11_t democracy_external_propose_default_V11;
    pd_democracy_fast_track_V11_t democracy_fast_track_V11;
    pd_democracy_veto_external_V11_t democracy_veto_external_V11;
    pd_democracy_cancel_referendum_V11_t democracy_cancel_referendum_V11;
    pd_democracy_cancel_queued_V11_t democracy_cancel_queued_V11;
    pd_democracy_delegate_V11_t democracy_delegate_V11;
    pd_democracy_undelegate_V11_t democracy_undelegate_V11;
    pd_democracy_clear_public_proposals_V11_t democracy_clear_public_proposals_V11;
    pd_democracy_note_preimage_V11_t democracy_note_preimage_V11;
    pd_democracy_note_preimage_operational_V11_t democracy_note_preimage_operational_V11;
    pd_democracy_note_imminent_preimage_V11_t democracy_note_imminent_preimage_V11;
    pd_democracy_note_imminent_preimage_operational_V11_t democracy_note_imminent_preimage_operational_V11;
    pd_democracy_reap_preimage_V11_t democracy_reap_preimage_V11;
    pd_democracy_unlock_V11_t democracy_unlock_V11;
    pd_democracy_remove_vote_V11_t democracy_remove_vote_V11;
    pd_democracy_remove_other_vote_V11_t democracy_remove_other_vote_V11;
    pd_democracy_enact_proposal_V11_t democracy_enact_proposal_V11;
    pd_democracy_cancel_proposal_V11_t democracy_cancel_proposal_V11;
    pd_council_set_members_V11_t council_set_members_V11;
    pd_council_execute_V11_t council_execute_V11;
    pd_council_propose_V11_t council_propose_V11;
    pd_council_vote_V11_t council_vote_V11;
    pd_council_close_V11_t council_close_V11;
    pd_council_disapprove_proposal_V11_t council_disapprove_proposal_V11;
    pd_technicalcommittee_disapprove_proposal_V11_t technicalcommittee_disapprove_proposal_V11;
    pd_phragmenelection_remove_voter_V11_t phragmenelection_remove_voter_V11;
    pd_phragmenelection_submit_candidacy_V11_t phragmenelection_submit_candidacy_V11;
    pd_phragmenelection_remove_member_V11_t phragmenelection_remove_member_V11;
    pd_phragmenelection_clean_defunct_voters_V11_t phragmenelection_clean_defunct_voters_V11;
    pd_technicalmembership_add_member_V11_t technicalmembership_add_member_V11;
    pd_technicalmembership_remove_member_V11_t technicalmembership_remove_member_V11;
    pd_technicalmembership_swap_member_V11_t technicalmembership_swap_member_V11;
    pd_technicalmembership_reset_members_V11_t technicalmembership_reset_members_V11;
    pd_technicalmembership_change_key_V11_t technicalmembership_change_key_V11;
    pd_technicalmembership_set_prime_V11_t technicalmembership_set_prime_V11;
    pd_technicalmembership_clear_prime_V11_t technicalmembership_clear_prime_V11;
    pd_treasury_propose_spend_V11_t treasury_propose_spend_V11;
    pd_treasury_reject_proposal_V11_t treasury_reject_proposal_V11;
    pd_treasury_approve_proposal_V11_t treasury_approve_proposal_V11;
    pd_treasury_remove_approval_V11_t treasury_remove_approval_V11;
    pd_claims_claim_V11_t claims_claim_V11;
    pd_claims_claim_attest_V11_t claims_claim_attest_V11;
    pd_claims_attest_V11_t claims_attest_V11;
    pd_claims_move_claim_V11_t claims_move_claim_V11;
    pd_identity_add_registrar_V11_t identity_add_registrar_V11;
    pd_identity_clear_identity_V11_t identity_clear_identity_V11;
    pd_identity_request_judgement_V11_t identity_request_judgement_V11;
    pd_identity_cancel_request_V11_t identity_cancel_request_V11;
    pd_identity_set_fee_V11_t identity_set_fee_V11;
    pd_identity_set_account_id_V11_t identity_set_account_id_V11;
    pd_identity_kill_identity_V11_t identity_kill_identity_V11;
    pd_identity_remove_sub_V11_t identity_remove_sub_V11;
    pd_identity_quit_sub_V11_t identity_quit_sub_V11;
    pd_society_bid_V11_t society_bid_V11;
    pd_society_unbid_V11_t society_unbid_V11;
    pd_society_vouch_V11_t society_vouch_V11;
    pd_society_unvouch_V11_t society_unvouch_V11;
    pd_society_vote_V11_t society_vote_V11;
    pd_society_defender_vote_V11_t society_defender_vote_V11;
    pd_society_payout_V11_t society_payout_V11;
    pd_society_found_V11_t society_found_V11;
    pd_society_unfound_V11_t society_unfound_V11;
    pd_society_judge_suspended_member_V11_t society_judge_suspended_member_V11;
    pd_society_set_max_members_V11_t society_set_max_members_V11;
    pd_recovery_set_recovered_V11_t recovery_set_recovered_V11;
    pd_recovery_initiate_recovery_V11_t recovery_initiate_recovery_V11;
    pd_recovery_vouch_recovery_V11_t recovery_vouch_recovery_V11;
    pd_recovery_claim_recovery_V11_t recovery_claim_recovery_V11;
    pd_recovery_close_recovery_V11_t recovery_close_recovery_V11;
    pd_recovery_remove_recovery_V11_t recovery_remove_recovery_V11;
    pd_recovery_cancel_recovered_V11_t recovery_cancel_recovered_V11;
    pd_vesting_vest_V11_t vesting_vest_V11;
    pd_vesting_vest_other_V11_t vesting_vest_other_V11;
    pd_vesting_merge_schedules_V11_t vesting_merge_schedules_V11;
    pd_proxy_add_proxy_V11_t proxy_add_proxy_V11;
    pd_proxy_remove_proxy_V11_t proxy_remove_proxy_V11;
    pd_proxy_remove_proxies_V11_t proxy_remove_proxies_V11;
    pd_proxy_anonymous_V11_t proxy_anonymous_V11;
    pd_proxy_kill_anonymous_V11_t proxy_kill_anonymous_V11;
    pd_proxy_proxy_announced_V11_t proxy_proxy_announced_V11;
    pd_preimage_note_preimage_V11_t preimage_note_preimage_V11;
    pd_preimage_unnote_preimage_V11_t preimage_unnote_preimage_V11;
    pd_preimage_request_preimage_V11_t preimage_request_preimage_V11;
    pd_preimage_unrequest_preimage_V11_t preimage_unrequest_preimage_V11;
    pd_bounties_propose_bounty_V11_t bounties_propose_bounty_V11;
    pd_bounties_approve_bounty_V11_t bounties_approve_bounty_V11;
    pd_bounties_propose_curator_V11_t bounties_propose_curator_V11;
    pd_bounties_unassign_curator_V11_t bounties_unassign_curator_V11;
    pd_bounties_accept_curator_V11_t bounties_accept_curator_V11;
    pd_bounties_award_bounty_V11_t bounties_award_bounty_V11;
    pd_bounties_claim_bounty_V11_t bounties_claim_bounty_V11;
    pd_bounties_close_bounty_V11_t bounties_close_bounty_V11;
    pd_bounties_extend_bounty_expiry_V11_t bounties_extend_bounty_expiry_V11;
    pd_childbounties_add_child_bounty_V11_t childbounties_add_child_bounty_V11;
    pd_childbounties_propose_curator_V11_t childbounties_propose_curator_V11;
    pd_childbounties_accept_curator_V11_t childbounties_accept_curator_V11;
    pd_childbounties_unassign_curator_V11_t childbounties_unassign_curator_V11;
    pd_childbounties_award_child_bounty_V11_t childbounties_award_child_bounty_V11;
    pd_childbounties_claim_child_bounty_V11_t childbounties_claim_child_bounty_V11;
    pd_childbounties_close_child_bounty_V11_t childbounties_close_child_bounty_V11;
    pd_tips_report_awesome_V11_t tips_report_awesome_V11;
    pd_tips_retract_tip_V11_t tips_retract_tip_V11;
    pd_tips_tip_new_V11_t tips_tip_new_V11;
    pd_tips_tip_V11_t tips_tip_V11;
    pd_tips_close_tip_V11_t tips_close_tip_V11;
    pd_tips_slash_tip_V11_t tips_slash_tip_V11;
    pd_electionprovidermultiphase_governance_fallback_V11_t electionprovidermultiphase_governance_fallback_V11;
    pd_gilt_place_bid_V11_t gilt_place_bid_V11;
    pd_gilt_retract_bid_V11_t gilt_retract_bid_V11;
    pd_gilt_set_target_V11_t gilt_set_target_V11;
    pd_gilt_thaw_V11_t gilt_thaw_V11;
    pd_bagslist_rebag_V11_t bagslist_rebag_V11;
    pd_bagslist_put_in_front_of_V11_t bagslist_put_in_front_of_V11;
    pd_configuration_set_validation_upgrade_cooldown_V11_t configuration_set_validation_upgrade_cooldown_V11;
    pd_configuration_set_validation_upgrade_delay_V11_t configuration_set_validation_upgrade_delay_V11;
    pd_configuration_set_code_retention_period_V11_t configuration_set_code_retention_period_V11;
    pd_configuration_set_max_code_size_V11_t configuration_set_max_code_size_V11;
    pd_configuration_set_max_pov_size_V11_t configuration_set_max_pov_size_V11;
    pd_configuration_set_max_head_data_size_V11_t configuration_set_max_head_data_size_V11;
    pd_configuration_set_parathread_cores_V11_t configuration_set_parathread_cores_V11;
    pd_configuration_set_parathread_retries_V11_t configuration_set_parathread_retries_V11;
    pd_configuration_set_group_rotation_frequency_V11_t configuration_set_group_rotation_frequency_V11;
    pd_configuration_set_chain_availability_period_V11_t configuration_set_chain_availability_period_V11;
    pd_configuration_set_thread_availability_period_V11_t configuration_set_thread_availability_period_V11;
    pd_configuration_set_scheduling_lookahead_V11_t configuration_set_scheduling_lookahead_V11;
    pd_configuration_set_max_validators_per_core_V11_t configuration_set_max_validators_per_core_V11;
    pd_configuration_set_max_validators_V11_t configuration_set_max_validators_V11;
    pd_configuration_set_dispute_period_V11_t configuration_set_dispute_period_V11;
    pd_configuration_set_dispute_post_conclusion_acceptance_period_V11_t configuration_set_dispute_post_conclusion_acceptance_period_V11;
    pd_configuration_set_dispute_max_spam_slots_V11_t configuration_set_dispute_max_spam_slots_V11;
    pd_configuration_set_dispute_conclusion_by_time_out_period_V11_t configuration_set_dispute_conclusion_by_time_out_period_V11;
    pd_configuration_set_no_show_slots_V11_t configuration_set_no_show_slots_V11;
    pd_configuration_set_n_delay_tranches_V11_t configuration_set_n_delay_tranches_V11;
    pd_configuration_set_zeroth_delay_tranche_width_V11_t configuration_set_zeroth_delay_tranche_width_V11;
    pd_configuration_set_needed_approvals_V11_t configuration_set_needed_approvals_V11;
    pd_configuration_set_relay_vrf_modulo_samples_V11_t configuration_set_relay_vrf_modulo_samples_V11;
    pd_configuration_set_max_upward_queue_count_V11_t configuration_set_max_upward_queue_count_V11;
    pd_configuration_set_max_upward_queue_size_V11_t configuration_set_max_upward_queue_size_V11;
    pd_configuration_set_max_downward_message_size_V11_t configuration_set_max_downward_message_size_V11;
    pd_configuration_set_ump_service_total_weight_V11_t configuration_set_ump_service_total_weight_V11;
    pd_configuration_set_max_upward_message_size_V11_t configuration_set_max_upward_message_size_V11;
    pd_configuration_set_max_upward_message_num_per_candidate_V11_t configuration_set_max_upward_message_num_per_candidate_V11;
    pd_configuration_set_hrmp_open_request_ttl_V11_t configuration_set_hrmp_open_request_ttl_V11;
    pd_configuration_set_hrmp_sender_deposit_V11_t configuration_set_hrmp_sender_deposit_V11;
    pd_configuration_set_hrmp_recipient_deposit_V11_t configuration_set_hrmp_recipient_deposit_V11;
    pd_configuration_set_hrmp_channel_max_capacity_V11_t configuration_set_hrmp_channel_max_capacity_V11;
    pd_configuration_set_hrmp_channel_max_total_size_V11_t configuration_set_hrmp_channel_max_total_size_V11;
    pd_configuration_set_hrmp_max_parachain_inbound_channels_V11_t configuration_set_hrmp_max_parachain_inbound_channels_V11;
    pd_configuration_set_hrmp_max_parathread_inbound_channels_V11_t configuration_set_hrmp_max_parathread_inbound_channels_V11;
    pd_configuration_set_hrmp_channel_max_message_size_V11_t configuration_set_hrmp_channel_max_message_size_V11;
    pd_configuration_set_hrmp_max_parachain_outbound_channels_V11_t configuration_set_hrmp_max_parachain_outbound_channels_V11;
    pd_configuration_set_hrmp_max_parathread_outbound_channels_V11_t configuration_set_hrmp_max_parathread_outbound_channels_V11;
    pd_configuration_set_hrmp_max_message_num_per_candidate_V11_t configuration_set_hrmp_max_message_num_per_candidate_V11;
    pd_configuration_set_ump_max_individual_weight_V11_t configuration_set_ump_max_individual_weight_V11;
    pd_configuration_set_pvf_checking_enabled_V11_t configuration_set_pvf_checking_enabled_V11;
    pd_configuration_set_pvf_voting_ttl_V11_t configuration_set_pvf_voting_ttl_V11;
    pd_configuration_set_minimum_validation_upgrade_delay_V11_t configuration_set_minimum_validation_upgrade_delay_V11;
    pd_configuration_set_bypass_consistency_check_V11_t configuration_set_bypass_consistency_check_V11;
    pd_initializer_force_approve_V11_t initializer_force_approve_V11;
    pd_hrmp_force_process_hrmp_open_V11_t hrmp_force_process_hrmp_open_V11;
    pd_hrmp_force_process_hrmp_close_V11_t hrmp_force_process_hrmp_close_V11;
    pd_parasdisputes_force_unfreeze_V11_t parasdisputes_force_unfreeze_V11;
    pd_registrar_reserve_V11_t registrar_reserve_V11;
    pd_auctions_new_auction_V11_t auctions_new_auction_V11;
    pd_auctions_bid_V11_t auctions_bid_V11;
    pd_auctions_cancel_auction_V11_t auctions_cancel_auction_V11;
#endif
} pd_MethodBasic_V11_t;

#define PD_CALL_BALANCES_TRANSFER_V11 0
typedef struct {
    pd_LookupasStaticLookupSource_V11_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_V11_t;

#define PD_CALL_BALANCES_FORCE_TRANSFER_V11 2
typedef struct {
    pd_LookupasStaticLookupSource_V11_t source;
    pd_LookupasStaticLookupSource_V11_t dest;
    pd_CompactBalance_t amount;
} pd_balances_force_transfer_V11_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V11 3
typedef struct {
    pd_LookupasStaticLookupSource_V11_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_keep_alive_V11_t;

#ifdef SUBSTRATE_PARSER_FULL
#define PD_CALL_SYSTEM_FILL_BLOCK_V11 0
typedef struct {
    pd_Perbill_V11_t ratio;
} pd_system_fill_block_V11_t;

#define PD_CALL_SYSTEM_REMARK_V11 1
typedef struct {
    pd_Vecu8_t remark;
} pd_system_remark_V11_t;

#define PD_CALL_SYSTEM_SET_HEAP_PAGES_V11 2
typedef struct {
    pd_u64_t pages;
} pd_system_set_heap_pages_V11_t;

#define PD_CALL_SYSTEM_SET_CODE_V11 3
typedef struct {
    pd_Vecu8_t code;
} pd_system_set_code_V11_t;

#define PD_CALL_SYSTEM_SET_CODE_WITHOUT_CHECKS_V11 4
typedef struct {
    pd_Vecu8_t code;
} pd_system_set_code_without_checks_V11_t;

#define PD_CALL_SYSTEM_REMARK_WITH_EVENT_V11 8
typedef struct {
    pd_Vecu8_t remark;
} pd_system_remark_with_event_V11_t;

#define PD_CALL_BALANCES_SET_BALANCE_V11 1
typedef struct {
    pd_LookupasStaticLookupSource_V11_t who;
    pd_CompactBalance_t new_free;
    pd_CompactBalance_t new_reserved;
} pd_balances_set_balance_V11_t;

#define PD_CALL_PROXY_PROXY_V11 0
typedef struct {
    pd_AccountId_V11_t real;
    pd_OptionProxyType_V11_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_V11_t;

#define PD_CALL_MULTISIG_AS_MULTI_THRESHOLD_1_V11 0
typedef struct {
    pd_VecAccountId_V11_t other_signatories;
    pd_Call_t call;
} pd_multisig_as_multi_threshold_1_V11_t;

#define PD_CALL_MULTISIG_AS_MULTI_V11 1
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V11_t other_signatories;
    pd_OptionTimepoint_V11_t maybe_timepoint;
    pd_OpaqueCall_V11_t call;
    pd_bool_t store_call;
    pd_Weight_V11_t max_weight;
} pd_multisig_as_multi_V11_t;

#define PD_CALL_MULTISIG_APPROVE_AS_MULTI_V11 2
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V11_t other_signatories;
    pd_OptionTimepoint_V11_t maybe_timepoint;
    pd_H256_t call_hash;
    pd_Weight_V11_t max_weight;
} pd_multisig_approve_as_multi_V11_t;

#define PD_CALL_MULTISIG_CANCEL_AS_MULTI_V11 3
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V11_t other_signatories;
    pd_Timepoint_V11_t timepoint;
    pd_H256_t call_hash;
} pd_multisig_cancel_as_multi_V11_t;

#endif

typedef union {
    pd_balances_transfer_V11_t balances_transfer_V11;
    pd_balances_force_transfer_V11_t balances_force_transfer_V11;
    pd_balances_transfer_keep_alive_V11_t balances_transfer_keep_alive_V11;
#ifdef SUBSTRATE_PARSER_FULL
    pd_system_fill_block_V11_t system_fill_block_V11;
    pd_system_remark_V11_t system_remark_V11;
    pd_system_set_heap_pages_V11_t system_set_heap_pages_V11;
    pd_system_set_code_V11_t system_set_code_V11;
    pd_system_set_code_without_checks_V11_t system_set_code_without_checks_V11;
    pd_system_remark_with_event_V11_t system_remark_with_event_V11;
    pd_balances_set_balance_V11_t balances_set_balance_V11;
    pd_proxy_proxy_V11_t proxy_proxy_V11;
    pd_multisig_as_multi_threshold_1_V11_t multisig_as_multi_threshold_1_V11;
    pd_multisig_as_multi_V11_t multisig_as_multi_V11;
    pd_multisig_approve_as_multi_V11_t multisig_approve_as_multi_V11;
    pd_multisig_cancel_as_multi_V11_t multisig_cancel_as_multi_V11;
#endif
} pd_MethodNested_V11_t;

typedef union {
    pd_MethodBasic_V11_t basic;
    pd_MethodNested_V11_t nested;
} pd_Method_V11_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
