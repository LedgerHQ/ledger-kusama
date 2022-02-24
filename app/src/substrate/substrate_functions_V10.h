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
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "parser_common.h"
#include "substrate_methods_V10.h"
#include "substrate_types_V10.h"
#include <stddef.h>
#include <stdint.h>

// Read functions
parser_error_t _readAccountId_V10(parser_context_t* c, pd_AccountId_V10_t* v);
parser_error_t _readAccountIndex_V10(parser_context_t* c, pd_AccountIndex_V10_t* v);
parser_error_t _readAccountVoteBalanceOf_V10(parser_context_t* c, pd_AccountVoteBalanceOf_V10_t* v);
parser_error_t _readAuthorityIdasRuntimeAppPublicSignature_V10(parser_context_t* c, pd_AuthorityIdasRuntimeAppPublicSignature_V10_t* v);
parser_error_t _readBoxCallOrHashOfT_V10(parser_context_t* c, pd_BoxCallOrHashOfT_V10_t* v);
parser_error_t _readBoxEquivocationProofHashBlockNumber_V10(parser_context_t* c, pd_BoxEquivocationProofHashBlockNumber_V10_t* v);
parser_error_t _readBoxEquivocationProofHeader_V10(parser_context_t* c, pd_BoxEquivocationProofHeader_V10_t* v);
parser_error_t _readBoxIdentityInfoMaxAdditionalFields_V10(parser_context_t* c, pd_BoxIdentityInfoMaxAdditionalFields_V10_t* v);
parser_error_t _readBoxMultiLocation_V10(parser_context_t* c, pd_BoxMultiLocation_V10_t* v);
parser_error_t _readBoxPalletsOrigin_V10(parser_context_t* c, pd_BoxPalletsOrigin_V10_t* v);
parser_error_t _readBoxRawSolutionSolutionOfT_V10(parser_context_t* c, pd_BoxRawSolutionSolutionOfT_V10_t* v);
parser_error_t _readBoxTasConfigIProposal_V10(parser_context_t* c, pd_BoxTasConfigIProposal_V10_t* v);
parser_error_t _readBoxVersionedMultiAssets_V10(parser_context_t* c, pd_BoxVersionedMultiAssets_V10_t* v);
parser_error_t _readBoxVersionedMultiLocation_V10(parser_context_t* c, pd_BoxVersionedMultiLocation_V10_t* v);
parser_error_t _readBoxVersionedXcmTasSysConfigCall_V10(parser_context_t* c, pd_BoxVersionedXcmTasSysConfigCall_V10_t* v);
parser_error_t _readBoxVersionedXcmTuple_V10(parser_context_t* c, pd_BoxVersionedXcmTuple_V10_t* v);
parser_error_t _readCallHashOf_V10(parser_context_t* c, pd_CallHashOf_V10_t* v);
parser_error_t _readCompactAccountIndex_V10(parser_context_t* c, pd_CompactAccountIndex_V10_t* v);
parser_error_t _readCompactPerBill_V10(parser_context_t* c, pd_CompactPerBill_V10_t* v);
parser_error_t _readConviction_V10(parser_context_t* c, pd_Conviction_V10_t* v);
parser_error_t _readEcdsaSignature_V10(parser_context_t* c, pd_EcdsaSignature_V10_t* v);
parser_error_t _readElectionScore_V10(parser_context_t* c, pd_ElectionScore_V10_t* v);
parser_error_t _readEraIndex_V10(parser_context_t* c, pd_EraIndex_V10_t* v);
parser_error_t _readEthereumAddress_V10(parser_context_t* c, pd_EthereumAddress_V10_t* v);
parser_error_t _readHeadData_V10(parser_context_t* c, pd_HeadData_V10_t* v);
parser_error_t _readHeartbeatBlockNumber_V10(parser_context_t* c, pd_HeartbeatBlockNumber_V10_t* v);
parser_error_t _readHrmpChannelId_V10(parser_context_t* c, pd_HrmpChannelId_V10_t* v);
parser_error_t _readIdentityFields_V10(parser_context_t* c, pd_IdentityFields_V10_t* v);
parser_error_t _readJudgementBalanceOfT_V10(parser_context_t* c, pd_JudgementBalanceOfT_V10_t* v);
parser_error_t _readJudgement_V10(parser_context_t* c, pd_Judgement_V10_t* v);
parser_error_t _readKeyOwnerProof_V10(parser_context_t* c, pd_KeyOwnerProof_V10_t* v);
parser_error_t _readKeyValue_V10(parser_context_t* c, pd_KeyValue_V10_t* v);
parser_error_t _readKey_V10(parser_context_t* c, pd_Key_V10_t* v);
parser_error_t _readKeys_V10(parser_context_t* c, pd_Keys_V10_t* v);
parser_error_t _readLeasePeriodOfT_V10(parser_context_t* c, pd_LeasePeriodOfT_V10_t* v);
parser_error_t _readLookupasStaticLookupSource_V10(parser_context_t* c, pd_LookupasStaticLookupSource_V10_t* v);
parser_error_t _readMemberCount_V10(parser_context_t* c, pd_MemberCount_V10_t* v);
parser_error_t _readMultiSignature_V10(parser_context_t* c, pd_MultiSignature_V10_t* v);
parser_error_t _readMultiSigner_V10(parser_context_t* c, pd_MultiSigner_V10_t* v);
parser_error_t _readNextConfigDescriptor_V10(parser_context_t* c, pd_NextConfigDescriptor_V10_t* v);
parser_error_t _readOpaqueCall_V10(parser_context_t* c, pd_OpaqueCall_V10_t* v);
parser_error_t _readOptionAccountId_V10(parser_context_t* c, pd_OptionAccountId_V10_t* v);
parser_error_t _readOptionElectionScore_V10(parser_context_t* c, pd_OptionElectionScore_V10_t* v);
parser_error_t _readOptionMultiSignature_V10(parser_context_t* c, pd_OptionMultiSignature_V10_t* v);
parser_error_t _readOptionMultiSigner_V10(parser_context_t* c, pd_OptionMultiSigner_V10_t* v);
parser_error_t _readOptionPercent_V10(parser_context_t* c, pd_OptionPercent_V10_t* v);
parser_error_t _readOptionProxyType_V10(parser_context_t* c, pd_OptionProxyType_V10_t* v);
parser_error_t _readOptionReferendumIndex_V10(parser_context_t* c, pd_OptionReferendumIndex_V10_t* v);
parser_error_t _readOptionStatementKind_V10(parser_context_t* c, pd_OptionStatementKind_V10_t* v);
parser_error_t _readOptionTimepoint_V10(parser_context_t* c, pd_OptionTimepoint_V10_t* v);
parser_error_t _readOptionTupleBalanceOfTBalanceOfTBlockNumber_V10(parser_context_t* c, pd_OptionTupleBalanceOfTBalanceOfTBlockNumber_V10_t* v);
parser_error_t _readOptionXcmVersion_V10(parser_context_t* c, pd_OptionXcmVersion_V10_t* v);
parser_error_t _readOptionschedulePeriodBlockNumber_V10(parser_context_t* c, pd_OptionschedulePeriodBlockNumber_V10_t* v);
parser_error_t _readOverweightIndex_V10(parser_context_t* c, pd_OverweightIndex_V10_t* v);
parser_error_t _readParaId_V10(parser_context_t* c, pd_ParaId_V10_t* v);
parser_error_t _readParachainsInherentDataHeader_V10(parser_context_t* c, pd_ParachainsInherentDataHeader_V10_t* v);
parser_error_t _readPerbill_V10(parser_context_t* c, pd_Perbill_V10_t* v);
parser_error_t _readPercent_V10(parser_context_t* c, pd_Percent_V10_t* v);
parser_error_t _readProxyType_V10(parser_context_t* c, pd_ProxyType_V10_t* v);
parser_error_t _readPvfCheckStatement_V10(parser_context_t* c, pd_PvfCheckStatement_V10_t* v);
parser_error_t _readReferendumIndex_V10(parser_context_t* c, pd_ReferendumIndex_V10_t* v);
parser_error_t _readRegistrarIndex_V10(parser_context_t* c, pd_RegistrarIndex_V10_t* v);
parser_error_t _readRenouncing_V10(parser_context_t* c, pd_Renouncing_V10_t* v);
parser_error_t _readRewardDestination_V10(parser_context_t* c, pd_RewardDestination_V10_t* v);
parser_error_t _readSessionIndex_V10(parser_context_t* c, pd_SessionIndex_V10_t* v);
parser_error_t _readSolutionOrSnapshotSize_V10(parser_context_t* c, pd_SolutionOrSnapshotSize_V10_t* v);
parser_error_t _readStatementKind_V10(parser_context_t* c, pd_StatementKind_V10_t* v);
parser_error_t _readSupportsAccountId_V10(parser_context_t* c, pd_SupportsAccountId_V10_t* v);
parser_error_t _readTimepoint_V10(parser_context_t* c, pd_Timepoint_V10_t* v);
parser_error_t _readTupleAccountIdData_V10(parser_context_t* c, pd_TupleAccountIdData_V10_t* v);
parser_error_t _readTupleBalanceOfTBalanceOfTBlockNumber_V10(parser_context_t* c, pd_TupleBalanceOfTBalanceOfTBlockNumber_V10_t* v);
parser_error_t _readValidationCodeHash_V10(parser_context_t* c, pd_ValidationCodeHash_V10_t* v);
parser_error_t _readValidationCode_V10(parser_context_t* c, pd_ValidationCode_V10_t* v);
parser_error_t _readValidatorPrefs_V10(parser_context_t* c, pd_ValidatorPrefs_V10_t* v);
parser_error_t _readValidatorSignature_V10(parser_context_t* c, pd_ValidatorSignature_V10_t* v);
parser_error_t _readVecAccountId_V10(parser_context_t* c, pd_VecAccountId_V10_t* v);
parser_error_t _readVecKeyValue_V10(parser_context_t* c, pd_VecKeyValue_V10_t* v);
parser_error_t _readVecKey_V10(parser_context_t* c, pd_VecKey_V10_t* v);
parser_error_t _readVecLookupasStaticLookupSource_V10(parser_context_t* c, pd_VecLookupasStaticLookupSource_V10_t* v);
parser_error_t _readVecTupleAccountIdData_V10(parser_context_t* c, pd_VecTupleAccountIdData_V10_t* v);
parser_error_t _readVestingInfoBalanceOfTBlockNumber_V10(parser_context_t* c, pd_VestingInfoBalanceOfTBlockNumber_V10_t* v);
parser_error_t _readWeightLimit_V10(parser_context_t* c, pd_WeightLimit_V10_t* v);
parser_error_t _readWeight_V10(parser_context_t* c, pd_Weight_V10_t* v);
parser_error_t _readXcmVersion_V10(parser_context_t* c, pd_XcmVersion_V10_t* v);
parser_error_t _readschedulePeriodBlockNumber_V10(parser_context_t* c, pd_schedulePeriodBlockNumber_V10_t* v);
parser_error_t _readschedulePriority_V10(parser_context_t* c, pd_schedulePriority_V10_t* v);

// toString functions
parser_error_t _toStringAccountId_V10(
    const pd_AccountId_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountIndex_V10(
    const pd_AccountIndex_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAccountVoteBalanceOf_V10(
    const pd_AccountVoteBalanceOf_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAuthorityIdasRuntimeAppPublicSignature_V10(
    const pd_AuthorityIdasRuntimeAppPublicSignature_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxCallOrHashOfT_V10(
    const pd_BoxCallOrHashOfT_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxEquivocationProofHashBlockNumber_V10(
    const pd_BoxEquivocationProofHashBlockNumber_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxEquivocationProofHeader_V10(
    const pd_BoxEquivocationProofHeader_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxIdentityInfoMaxAdditionalFields_V10(
    const pd_BoxIdentityInfoMaxAdditionalFields_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxMultiLocation_V10(
    const pd_BoxMultiLocation_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxPalletsOrigin_V10(
    const pd_BoxPalletsOrigin_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxRawSolutionSolutionOfT_V10(
    const pd_BoxRawSolutionSolutionOfT_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxTasConfigIProposal_V10(
    const pd_BoxTasConfigIProposal_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxVersionedMultiAssets_V10(
    const pd_BoxVersionedMultiAssets_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxVersionedMultiLocation_V10(
    const pd_BoxVersionedMultiLocation_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxVersionedXcmTasSysConfigCall_V10(
    const pd_BoxVersionedXcmTasSysConfigCall_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxVersionedXcmTuple_V10(
    const pd_BoxVersionedXcmTuple_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCallHashOf_V10(
    const pd_CallHashOf_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactAccountIndex_V10(
    const pd_CompactAccountIndex_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactPerBill_V10(
    const pd_CompactPerBill_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringConviction_V10(
    const pd_Conviction_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringEcdsaSignature_V10(
    const pd_EcdsaSignature_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringElectionScore_V10(
    const pd_ElectionScore_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringEraIndex_V10(
    const pd_EraIndex_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringEthereumAddress_V10(
    const pd_EthereumAddress_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringHeadData_V10(
    const pd_HeadData_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringHeartbeatBlockNumber_V10(
    const pd_HeartbeatBlockNumber_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringHrmpChannelId_V10(
    const pd_HrmpChannelId_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringIdentityFields_V10(
    const pd_IdentityFields_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringJudgementBalanceOfT_V10(
    const pd_JudgementBalanceOfT_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringJudgement_V10(
    const pd_Judgement_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyOwnerProof_V10(
    const pd_KeyOwnerProof_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyValue_V10(
    const pd_KeyValue_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKey_V10(
    const pd_Key_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeys_V10(
    const pd_Keys_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringLeasePeriodOfT_V10(
    const pd_LeasePeriodOfT_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringLookupasStaticLookupSource_V10(
    const pd_LookupasStaticLookupSource_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMemberCount_V10(
    const pd_MemberCount_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMultiSignature_V10(
    const pd_MultiSignature_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMultiSigner_V10(
    const pd_MultiSigner_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringNextConfigDescriptor_V10(
    const pd_NextConfigDescriptor_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOpaqueCall_V10(
    const pd_OpaqueCall_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionAccountId_V10(
    const pd_OptionAccountId_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionElectionScore_V10(
    const pd_OptionElectionScore_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionMultiSignature_V10(
    const pd_OptionMultiSignature_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionMultiSigner_V10(
    const pd_OptionMultiSigner_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionPercent_V10(
    const pd_OptionPercent_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionProxyType_V10(
    const pd_OptionProxyType_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionReferendumIndex_V10(
    const pd_OptionReferendumIndex_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionStatementKind_V10(
    const pd_OptionStatementKind_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionTimepoint_V10(
    const pd_OptionTimepoint_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionTupleBalanceOfTBalanceOfTBlockNumber_V10(
    const pd_OptionTupleBalanceOfTBalanceOfTBlockNumber_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionXcmVersion_V10(
    const pd_OptionXcmVersion_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionschedulePeriodBlockNumber_V10(
    const pd_OptionschedulePeriodBlockNumber_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOverweightIndex_V10(
    const pd_OverweightIndex_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringParaId_V10(
    const pd_ParaId_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringParachainsInherentDataHeader_V10(
    const pd_ParachainsInherentDataHeader_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPerbill_V10(
    const pd_Perbill_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPercent_V10(
    const pd_Percent_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringProxyType_V10(
    const pd_ProxyType_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPvfCheckStatement_V10(
    const pd_PvfCheckStatement_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringReferendumIndex_V10(
    const pd_ReferendumIndex_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRegistrarIndex_V10(
    const pd_RegistrarIndex_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRenouncing_V10(
    const pd_Renouncing_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringRewardDestination_V10(
    const pd_RewardDestination_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringSessionIndex_V10(
    const pd_SessionIndex_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringSolutionOrSnapshotSize_V10(
    const pd_SolutionOrSnapshotSize_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringStatementKind_V10(
    const pd_StatementKind_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringSupportsAccountId_V10(
    const pd_SupportsAccountId_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTimepoint_V10(
    const pd_Timepoint_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTupleAccountIdData_V10(
    const pd_TupleAccountIdData_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTupleBalanceOfTBalanceOfTBlockNumber_V10(
    const pd_TupleBalanceOfTBalanceOfTBlockNumber_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidationCodeHash_V10(
    const pd_ValidationCodeHash_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidationCode_V10(
    const pd_ValidationCode_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorPrefs_V10(
    const pd_ValidatorPrefs_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringValidatorSignature_V10(
    const pd_ValidatorSignature_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecAccountId_V10(
    const pd_VecAccountId_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKeyValue_V10(
    const pd_VecKeyValue_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKey_V10(
    const pd_VecKey_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecLookupasStaticLookupSource_V10(
    const pd_VecLookupasStaticLookupSource_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecTupleAccountIdData_V10(
    const pd_VecTupleAccountIdData_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVestingInfoBalanceOfTBlockNumber_V10(
    const pd_VestingInfoBalanceOfTBlockNumber_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringWeightLimit_V10(
    const pd_WeightLimit_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringWeight_V10(
    const pd_Weight_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringXcmVersion_V10(
    const pd_XcmVersion_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringschedulePeriodBlockNumber_V10(
    const pd_schedulePeriodBlockNumber_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringschedulePriority_V10(
    const pd_schedulePriority_V10_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

#ifdef __cplusplus
}
#endif
