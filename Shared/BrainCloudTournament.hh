//
//  BrainCloudTournament.h
//  BrainCloud
//
//  Created by Bradley Hill on 2017-01-06.
//  Copyright © 2017 BitHeads Inc. All rights reserved.
//

#pragma once

#import <Foundation/Foundation.h>
#import "BrainCloudCompletionBlocks.hh"
#import "BrainCloudLeaderboard.hh"

@interface BrainCloudTournament : NSObject

/**
 * Processes any outstanding rewards for the given player
 *
 * Service Name - tournament
 * Service Operation - CLAIM_TOURNAMENT_REWARD
 *
 * @param leaderboardId The leaderboard for the tournament
 * @param versionId Version of the tournament. Use -1 for the latest version.
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)claimTournamentReward:(NSString *)leaderboardId
                    versionId:(int)versionId
              completionBlock:(BCCompletionBlock)cb
         errorCompletionBlock:(BCErrorCompletionBlock)ecb
                     cbObject:(BCCallbackObject)cbObject;

/**
 * Get tournament status associated with a leaderboard
 *
 * Service Name - tournament
 * Service Operation - GET_TOURNAMENT_STATUS
 *
 * @param leaderboardId The leaderboard for the tournament
 * @param versionId Version of the tournament. Use -1 for the latest version.
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)getTournamentStatus:(NSString *)leaderboardId
                  versionId:(int)versionId
            completionBlock:(BCCompletionBlock)cb
       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                   cbObject:(BCCallbackObject)cbObject;

/**
 * Join the specified tournament.
 * Any entry fees will be automatically collected.
 *
 * Service Name - tournament
 * Service Operation - JOIN_TOURNAMENT
 *
 * @param leaderboardId The leaderboard for the tournament
 * @param tournamentCode Tournament to join
 * @param initialScore Initial score for the user
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)joinTournament:(NSString *)leaderboardId
          tournamentCode:(NSString *)tournamentCode
            initialScore:(int)initialScore
         completionBlock:(BCCompletionBlock)cb
    errorCompletionBlock:(BCErrorCompletionBlock)ecb
                cbObject:(BCCallbackObject)cbObject;

/**
 * Removes player's score from tournament leaderboard
 *
 * Service Name - tournament
 * Service Operation - LEAVE_TOURNAMENT
 *
 * @param leaderboardId The leaderboard for the tournament
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)leaveTournament:(NSString *)leaderboardId
         completionBlock:(BCCompletionBlock)cb
    errorCompletionBlock:(BCErrorCompletionBlock)ecb
                cbObject:(BCCallbackObject)cbObject;

/**
 * Post the users score to the leaderboard
 *
 * Service Name - tournament
 * Service Operation - POST_TOURNAMENT_SCORE
 *
 * @param leaderboardId The leaderboard for the tournament
 * @param score The score to post
 * @param jsonData Optional data attached to the leaderboard entry
 * @param roundStartedTime Time the user started the match resulting in the score being posted in UTC.
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)postTournamentScore:(NSString *)leaderboardId
                      score:(int)score
                   jsonData:(NSString *)jsonData
           roundStartedTime:(NSDate *)roundStartedTime
            completionBlock:(BCCompletionBlock)cb
       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                   cbObject:(BCCallbackObject)cbObject;

/**
 * Post the users score to the leaderboard
 *
 * Service Name - tournament
 * Service Operation - POST_TOURNAMENT_SCORE_WITH_RESULTS
 *
 * @param leaderboardId The leaderboard for the tournament
 * @param score The score to post
 * @param jsonData Optional data attached to the leaderboard entry
 * @param roundStartedTime Time the user started the match resulting in the score being posted in UTC.
 * @param sort Sort key Sort order of page.
 * @param beforeCount The count of number of players before the current player to include.
 * @param afterCount The count of number of players after the current player to include.
 * @param initialScore The initial score for players first joining a tournament
 *						  Usually 0, unless leaderboard is LOW_VALUE
 * @param callback The method to be invoked when the server response is received
 */
- (void)postTournamentScoreWithResults:(NSString *)leaderboardId
                                 score:(int)score
                              jsonData:(NSString *)jsonData
                      roundStartedTime:(NSDate *)roundStartedTime
                             sortOrder:(SortOrder)sortOrder
                           beforeCount:(int)beforeCount
                            afterCount:(int)afterCount
                          initialScore:(int)initialScore
                       completionBlock:(BCCompletionBlock)cb
                  errorCompletionBlock:(BCErrorCompletionBlock)ecb
                              cbObject:(BCCallbackObject)cbObject;

/**
 * Returns the user's expected reward based on the current scores
 *
 * Service Name - tournament
 * Service Operation - VIEW_CURRENT_REWARD
 *
 * @param leaderboardId The leaderboard for the tournament
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)viewCurrentReward:(NSString *)leaderboardId
          completionBlock:(BCCompletionBlock)cb
     errorCompletionBlock:(BCErrorCompletionBlock)ecb
                 cbObject:(BCCallbackObject)cbObject;

/**
 * Returns the user's reward from a finished tournament
 *
 * Service Name - tournament
 * Service Operation - VIEW_REWARD
 *
 * @param leaderboardId The leaderboard for the tournament
 * @param versionId Version of the tournament. Use -1 for the latest version.
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)viewReward:(NSString *)leaderboardId
               versionId:(int)versionId
         completionBlock:(BCCompletionBlock)cb
    errorCompletionBlock:(BCErrorCompletionBlock)ecb
                cbObject:(BCCallbackObject)cbObject;

@end
