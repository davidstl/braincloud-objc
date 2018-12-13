///////////////////////////////////////////////////////////////////
// generated by ./generate_service_op.sh, do not edit manually!
///////////////////////////////////////////////////////////////////

#import "ServiceOperation.hh"
#import "braincloud/ServiceOperation.h"

NSString const *const BrainCloudServiceOperationNone = [NSString stringWithCString:BrainCloud::ServiceOperation::None.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationAuthenticate = [NSString stringWithCString:BrainCloud::ServiceOperation::Authenticate.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationAttach = [NSString stringWithCString:BrainCloud::ServiceOperation::Attach.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationMerge = [NSString stringWithCString:BrainCloud::ServiceOperation::Merge.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDetach = [NSString stringWithCString:BrainCloud::ServiceOperation::Detach.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationResetEmailPassword = [NSString stringWithCString:BrainCloud::ServiceOperation::ResetEmailPassword.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationResetEmailPasswordAdvanced = [NSString stringWithCString:BrainCloud::ServiceOperation::ResetEmailPasswordAdvanced.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationSwitchToChildProfile = [NSString stringWithCString:BrainCloud::ServiceOperation::SwitchToChildProfile.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationSwitchToParentProfile = [NSString stringWithCString:BrainCloud::ServiceOperation::SwitchToParentProfile.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetChildProfiles = [NSString stringWithCString:BrainCloud::ServiceOperation::GetChildProfiles.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationCreate = [NSString stringWithCString:BrainCloud::ServiceOperation::Create.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationCreateWithIndexedId = [NSString stringWithCString:BrainCloud::ServiceOperation::CreateWithIndexedId.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReset = [NSString stringWithCString:BrainCloud::ServiceOperation::Reset.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationRead = [NSString stringWithCString:BrainCloud::ServiceOperation::Read.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadSingleton = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadSingleton.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadByType = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadByType.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationVerify = [NSString stringWithCString:BrainCloud::ServiceOperation::Verify.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadShared = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadShared.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDeregister = [NSString stringWithCString:BrainCloud::ServiceOperation::Deregister.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDeregisterAll = [NSString stringWithCString:BrainCloud::ServiceOperation::DeregisterAll.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationRegister = [NSString stringWithCString:BrainCloud::ServiceOperation::Register.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationSendSimple = [NSString stringWithCString:BrainCloud::ServiceOperation::SendSimple.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationSendRich = [NSString stringWithCString:BrainCloud::ServiceOperation::SendRich.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationTrigger = [NSString stringWithCString:BrainCloud::ServiceOperation::Trigger.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationTriggerMultiple = [NSString stringWithCString:BrainCloud::ServiceOperation::TriggerMultiple.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationTriggerGrantExperience = [NSString stringWithCString:BrainCloud::ServiceOperation::TriggerGrantExperience.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationFullReset = [NSString stringWithCString:BrainCloud::ServiceOperation::FullReset.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDataReset = [NSString stringWithCString:BrainCloud::ServiceOperation::DataReset.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdate = [NSString stringWithCString:BrainCloud::ServiceOperation::Update.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdatePartial = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdatePartial.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateShared = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateShared.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateSingleton = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateSingleton.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateAcl = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateAcl.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateTimeToLive = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateTimeToLive.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDelete = [NSString stringWithCString:BrainCloud::ServiceOperation::Delete.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDeleteSingleton = [NSString stringWithCString:BrainCloud::ServiceOperation::DeleteSingleton.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateSummary = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateSummary.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateSetMinimum = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateSetMinimum.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateIncrementToMaximum = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateIncrementToMaximum.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetFriendProfileInfoForExternalId = [NSString stringWithCString:BrainCloud::ServiceOperation::GetFriendProfileInfoForExternalId.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetExternalIdForProfileId = [NSString stringWithCString:BrainCloud::ServiceOperation::GetExternalIdForProfileId.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadFriendEntity = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadFriendEntity.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadFriendsEntities = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadFriendsEntities.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadFriendsWithApplication = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadFriendsWithApplication.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadFriends = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadFriends.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadFriendsPlayerState = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadFriendsPlayerState.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationFindPlayerByName = [NSString stringWithCString:BrainCloud::ServiceOperation::FindPlayerByName.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetSocialLeaderboard = [NSString stringWithCString:BrainCloud::ServiceOperation::GetSocialLeaderboard.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetMultiSocialLeaderboard = [NSString stringWithCString:BrainCloud::ServiceOperation::GetMultiSocialLeaderboard.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetGlobalLeaderboard = [NSString stringWithCString:BrainCloud::ServiceOperation::GetGlobalLeaderboard.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetGlobalLeaderboardPage = [NSString stringWithCString:BrainCloud::ServiceOperation::GetGlobalLeaderboardPage.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetGlobalLeaderboardView = [NSString stringWithCString:BrainCloud::ServiceOperation::GetGlobalLeaderboardView.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetGlobalLeaderboardVersions = [NSString stringWithCString:BrainCloud::ServiceOperation::GetGlobalLeaderboardVersions.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetCompletedTournament = [NSString stringWithCString:BrainCloud::ServiceOperation::GetCompletedTournament.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationRewardTournament = [NSString stringWithCString:BrainCloud::ServiceOperation::RewardTournament.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationPostScore = [NSString stringWithCString:BrainCloud::ServiceOperation::PostScore.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationPostScoreDynamic = [NSString stringWithCString:BrainCloud::ServiceOperation::PostScoreDynamic.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationInitThirdParty = [NSString stringWithCString:BrainCloud::ServiceOperation::InitThirdParty.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationPostThirdPartyLeaderboardScore = [NSString stringWithCString:BrainCloud::ServiceOperation::PostThirdPartyLeaderboardScore.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationIncrementThirdPartyLeaderboardScore = [NSString stringWithCString:BrainCloud::ServiceOperation::IncrementThirdPartyLeaderboardScore.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationLaunchAchievementUI = [NSString stringWithCString:BrainCloud::ServiceOperation::LaunchAchievementUI.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationPostThirdPartyLeaderboardAchievement = [NSString stringWithCString:BrainCloud::ServiceOperation::PostThirdPartyLeaderboardAchievement.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationIsThirdPartyAchievementComplete = [NSString stringWithCString:BrainCloud::ServiceOperation::IsThirdPartyAchievementComplete.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationResetThirdPartyAchievements = [NSString stringWithCString:BrainCloud::ServiceOperation::ResetThirdPartyAchievements.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationQueryThirdPartyAchievements = [NSString stringWithCString:BrainCloud::ServiceOperation::QueryThirdPartyAchievements.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetInventory = [NSString stringWithCString:BrainCloud::ServiceOperation::GetInventory.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationCashInReceipt = [NSString stringWithCString:BrainCloud::ServiceOperation::CashInReceipt.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationAwardVC = [NSString stringWithCString:BrainCloud::ServiceOperation::AwardVC.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationConsumeVC = [NSString stringWithCString:BrainCloud::ServiceOperation::ConsumeVC.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetPlayerVC = [NSString stringWithCString:BrainCloud::ServiceOperation::GetPlayerVC.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationResetPlayerVC = [NSString stringWithCString:BrainCloud::ServiceOperation::ResetPlayerVC.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationAwardParentVC = [NSString stringWithCString:BrainCloud::ServiceOperation::AwardParentVC.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationConsumeParentVC = [NSString stringWithCString:BrainCloud::ServiceOperation::ConsumeParentVC.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetParentVC = [NSString stringWithCString:BrainCloud::ServiceOperation::GetParentVC.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationResetParentVC = [NSString stringWithCString:BrainCloud::ServiceOperation::ResetParentVC.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationSend = [NSString stringWithCString:BrainCloud::ServiceOperation::Send.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateEventData = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateEventData.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDeleteSent = [NSString stringWithCString:BrainCloud::ServiceOperation::DeleteSent.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDeleteIncoming = [NSString stringWithCString:BrainCloud::ServiceOperation::DeleteIncoming.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetEvents = [NSString stringWithCString:BrainCloud::ServiceOperation::GetEvents.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateIncrement = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateIncrement.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadNextXplevel = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadNextXplevel.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadXpLevels = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadXpLevels.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadSubset = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadSubset.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadForCategory = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadForCategory.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationSetXpPoints = [NSString stringWithCString:BrainCloud::ServiceOperation::SetXpPoints.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationRun = [NSString stringWithCString:BrainCloud::ServiceOperation::Run.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationTweet = [NSString stringWithCString:BrainCloud::ServiceOperation::Tweet.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationAwardAchievements = [NSString stringWithCString:BrainCloud::ServiceOperation::AwardAchievements.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadAchievements = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadAchievements.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadAchievedAchievements = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadAchievedAchievements.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationSetPlayerRating = [NSString stringWithCString:BrainCloud::ServiceOperation::SetPlayerRating.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationResetPlayerRating = [NSString stringWithCString:BrainCloud::ServiceOperation::ResetPlayerRating.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationIncrementPlayerRating = [NSString stringWithCString:BrainCloud::ServiceOperation::IncrementPlayerRating.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDecrementPlayerRating = [NSString stringWithCString:BrainCloud::ServiceOperation::DecrementPlayerRating.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationShieldOn = [NSString stringWithCString:BrainCloud::ServiceOperation::ShieldOn.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationShieldOnFor = [NSString stringWithCString:BrainCloud::ServiceOperation::ShieldOnFor.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationShieldOff = [NSString stringWithCString:BrainCloud::ServiceOperation::ShieldOff.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetShieldExpiry = [NSString stringWithCString:BrainCloud::ServiceOperation::GetShieldExpiry.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationFindPlayers = [NSString stringWithCString:BrainCloud::ServiceOperation::FindPlayers.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationFindPlayersUsingFilter = [NSString stringWithCString:BrainCloud::ServiceOperation::FindPlayersUsingFilter.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationSubmitTurn = [NSString stringWithCString:BrainCloud::ServiceOperation::SubmitTurn.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateMatchSummary = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateMatchSummary.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationAbandon = [NSString stringWithCString:BrainCloud::ServiceOperation::Abandon.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationComplete = [NSString stringWithCString:BrainCloud::ServiceOperation::Complete.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadMatch = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadMatch.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadMatchHistory = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadMatchHistory.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationFindMatches = [NSString stringWithCString:BrainCloud::ServiceOperation::FindMatches.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationFindMatchesCompleted = [NSString stringWithCString:BrainCloud::ServiceOperation::FindMatchesCompleted.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDeleteMatch = [NSString stringWithCString:BrainCloud::ServiceOperation::DeleteMatch.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationLastUploadStatus = [NSString stringWithCString:BrainCloud::ServiceOperation::LastUploadStatus.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadQuests = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadQuests.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadCompletedQuests = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadCompletedQuests.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadInProgressQuests = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadInProgressQuests.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadNotStartedQuests = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadNotStartedQuests.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadQuestsWithStatus = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadQuestsWithStatus.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadQuestsWithBasicPercentage = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadQuestsWithBasicPercentage.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadQuestsWithComplexPercentage = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadQuestsWithComplexPercentage.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadQuestsByCategory = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadQuestsByCategory.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadGameStatisticsByCategory = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadGameStatisticsByCategory.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadPlayerStatisticsByCategory = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadPlayerStatisticsByCategory.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadMilestones = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadMilestones.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadMilestonesByCategory = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadMilestonesByCategory.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationResetMilestones = [NSString stringWithCString:BrainCloud::ServiceOperation::ResetMilestones.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadCompletedMilestones = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadCompletedMilestones.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadInProgressMilestones = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadInProgressMilestones.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationLogout = [NSString stringWithCString:BrainCloud::ServiceOperation::Logout.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateName = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateName.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationStartMatch = [NSString stringWithCString:BrainCloud::ServiceOperation::StartMatch.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationCancelMatch = [NSString stringWithCString:BrainCloud::ServiceOperation::CancelMatch.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationCompleteMatch = [NSString stringWithCString:BrainCloud::ServiceOperation::CompleteMatch.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationEnableMatchMaking = [NSString stringWithCString:BrainCloud::ServiceOperation::EnableMatchMaking.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationStartStream = [NSString stringWithCString:BrainCloud::ServiceOperation::StartStream.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadStream = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadStream.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationEndStream = [NSString stringWithCString:BrainCloud::ServiceOperation::EndStream.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDeleteStream = [NSString stringWithCString:BrainCloud::ServiceOperation::DeleteStream.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationAddEvent = [NSString stringWithCString:BrainCloud::ServiceOperation::AddEvent.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetStreamSummariesForInitiatingPlayer = [NSString stringWithCString:BrainCloud::ServiceOperation::GetStreamSummariesForInitiatingPlayer.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetStreamSummariesForTargetPlayer = [NSString stringWithCString:BrainCloud::ServiceOperation::GetStreamSummariesForTargetPlayer.getValue().c_str() encoding:NSASCIIStringEncoding];

NSString const *const BrainCloudServiceOperationGetRecentStreamsForInitiatingPlayer = [NSString stringWithCString:BrainCloud::ServiceOperation::GetRecentStreamsForInitiatingPlayer.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetRecentStreamsForTargetPlayer = [NSString stringWithCString:BrainCloud::ServiceOperation::GetRecentStreamsForTargetPlayer.getValue().c_str() encoding:NSASCIIStringEncoding];

NSString const *const BrainCloudServiceOperationGetUserInfo = [NSString stringWithCString:BrainCloud::ServiceOperation::GetUserInfo.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationStartSteamTransaction = [NSString stringWithCString:BrainCloud::ServiceOperation::StartSteamTransaction.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationFinalizeSteamTransaction = [NSString stringWithCString:BrainCloud::ServiceOperation::FinalizeSteamTransaction.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationVerifyMicrosoftReceipt = [NSString stringWithCString:BrainCloud::ServiceOperation::VerifyMicrosoftReceipt.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationConfirmGooglePlayPurchase = [NSString stringWithCString:BrainCloud::ServiceOperation::ConfirmGooglePlayPurchase.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationEligiblePromotions = [NSString stringWithCString:BrainCloud::ServiceOperation::EligiblePromotions.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetList = [NSString stringWithCString:BrainCloud::ServiceOperation::GetList.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetListByIndexedId = [NSString stringWithCString:BrainCloud::ServiceOperation::GetListByIndexedId.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetListCount = [NSString stringWithCString:BrainCloud::ServiceOperation::GetListCount.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetPage = [NSString stringWithCString:BrainCloud::ServiceOperation::GetPage.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetPageOffset = [NSString stringWithCString:BrainCloud::ServiceOperation::GetPageOffset.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetAttributes = [NSString stringWithCString:BrainCloud::ServiceOperation::GetAttributes.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateAttributes = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateAttributes.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationRemoveAttributes = [NSString stringWithCString:BrainCloud::ServiceOperation::RemoveAttributes.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdatePlayerPicture = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdatePlayerPicture.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationUpdateContactEmail = [NSString stringWithCString:BrainCloud::ServiceOperation::UpdateContactEmail.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationReadProperties = [NSString stringWithCString:BrainCloud::ServiceOperation::ReadProperties.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetUpdatedFiles = [NSString stringWithCString:BrainCloud::ServiceOperation::GetUpdatedFiles.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetFileList = [NSString stringWithCString:BrainCloud::ServiceOperation::GetFileList.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationScheduleCloudScript = [NSString stringWithCString:BrainCloud::ServiceOperation::ScheduleCloudScript.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationRunParentScript = [NSString stringWithCString:BrainCloud::ServiceOperation::RunParentScript.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationRedeemCode = [NSString stringWithCString:BrainCloud::ServiceOperation::RedeemCode.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationGetRedeemedCodes = [NSString stringWithCString:BrainCloud::ServiceOperation::GetRedeemedCodes.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationCustomPageEvent = [NSString stringWithCString:BrainCloud::ServiceOperation::CustomPageEvent.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationCustomScreenEvent = [NSString stringWithCString:BrainCloud::ServiceOperation::CustomScreenEvent.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationCustomTrackEvent = [NSString stringWithCString:BrainCloud::ServiceOperation::CustomTrackEvent.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationProfanityCheck = [NSString stringWithCString:BrainCloud::ServiceOperation::ProfanityCheck.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationProfanityReplaceText = [NSString stringWithCString:BrainCloud::ServiceOperation::ProfanityReplaceText.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationProfanityIdenitfyBadWords = [NSString stringWithCString:BrainCloud::ServiceOperation::ProfanityIdenitfyBadWords.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationPrepareUserUpload = [NSString stringWithCString:BrainCloud::ServiceOperation::PrepareUserUpload.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationListUserFiles = [NSString stringWithCString:BrainCloud::ServiceOperation::ListUserFiles.getValue().c_str() encoding:NSASCIIStringEncoding];
NSString const *const BrainCloudServiceOperationDeleteUserFiles = [NSString stringWithCString:BrainCloud::ServiceOperation::DeleteUserFiles.getValue().c_str() encoding:NSASCIIStringEncoding];

