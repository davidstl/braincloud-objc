//
//  BrainCloudPlayerState.h
//  brainCloudClientObjc
//
//  Created by Hill, Bradley on 2015-08-06.
//  Copyright (c) 2016 bitHeads. All rights reserved.
//

#pragma once

#import <Foundation/Foundation.h>
#import "BrainCloudCompletionBlocks.hh"

@interface BrainCloudPlayerState : NSObject

/**
* Read the state of the currently logged in player.
* This method returns a JSON object describing most of the
* player's data: entities, statistics, level, currency.
* Apps will typically call this method after authenticating to get an
* up-to-date view of the player's data.
*
* Service Name - PlayerState
* Service Operation - Read
*
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)readPlayerState:(BCCompletionBlock)completionBlock
   errorCompletionBlock:(BCErrorCompletionBlock)ecb
               cbObject:(BCCallbackObject)cbObject;

/**
* Completely deletes the player record and all data fully owned
* by the player. After calling this method, the player will need
* to re-authenticate and create a new profile.
* This is mostly used for debugging/qa.
*
* Service Name - PlayerState
* Service Operation - FullReset
*
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)deletePlayer:(BCCompletionBlock)completionBlock
errorCompletionBlock:(BCErrorCompletionBlock)ecb
            cbObject:(BCCallbackObject)cbObject;

/**
* This method will delete *most* data for the currently logged in player.
* Data which is not deleted includes: currency, credentials, and
* purchase transactions. ResetPlayer is different from DeletePlayer in that
* the player record will continue to exist after the reset (so the user
* does not need to re-authenticate).
*
* Service Name - PlayerState
* Service Operation - DataReset
*
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)resetPlayerState:(BCCompletionBlock)completionBlock
    errorCompletionBlock:(BCErrorCompletionBlock)ecb
                cbObject:(BCCallbackObject)cbObject;

/**
* Logs player out of server.
*
* Service Name - PlayerState
* Service Operation - Logout
*
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)logout:(BCCompletionBlock)completionBlock
    errorCompletionBlock:(BCErrorCompletionBlock)ecb
                cbObject:(BCCallbackObject)cbObject;

/**
* Sets the players name.
*
* Service Name - playerState
* Service Operation - UPDATE_NAME
*
* @param playerName The name of the player
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)updatePlayerName:(NSString *)playerName
         completionBlock:(BCCompletionBlock)completionBlock
    errorCompletionBlock:(BCErrorCompletionBlock)ecb
                cbObject:(BCCallbackObject)cbObject;

/**
* Retrieve the player attributes.
*
* Service Name - PlayerState
* Service Operation - GetAttributes
*
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)getAttributes:(BCCompletionBlock)completionBlock
 errorCompletionBlock:(BCErrorCompletionBlock)ecb
             cbObject:(BCCallbackObject)cbObject;

/**
* Update player attributes.
*
* Service Name - PlayerState
* Service Operation - UpdateAttributes
*
* @param jsonAttributes Single layer json string that is a set of key-value pairs
* @param wipeExisting Whether to wipe existing attributes prior to update.
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)updateAttributes:(NSString *)jsonAttributes
            wipeExisting:(bool)wipeExisting
         completionBlock:(BCCompletionBlock)completionBlock
    errorCompletionBlock:(BCErrorCompletionBlock)ecb
                cbObject:(BCCallbackObject)cbObject;

/**
* Remove player attributes.
*
* Service Name - PlayerState
* Service Operation - RemoveAttributes
*
* @param attributeNames NSString array of attribute names.
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)removeAttributes:(NSArray *)attributeNames
         completionBlock:(BCCompletionBlock)completionBlock
    errorCompletionBlock:(BCErrorCompletionBlock)ecb
                cbObject:(BCCallbackObject)cbObject;

/**
 * Remove player attributes.
 *
 * Service Name - PlayerState
 * Service Operation - UPDATE_PICTURE_URL
 *
 * @param pictureUrl URL to apply
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)updatePlayerPictureUrl:(NSString *)pictureUrl
               completionBlock:(BCCompletionBlock)completionBlock
          errorCompletionBlock:(BCErrorCompletionBlock)ecb
                      cbObject:(BCCallbackObject)cbObject;

/**
 * Update the player's contact email.
 * Note this is unrelated to email authentication.
 *
 * Service Name - PlayerState
 * Service Operation - UPDATE_CONTACT_EMAIL
 *
 * @param contactEmail Updated email
 * @param callback The method to be invoked when the server response is received
 */
- (void)updateContactEmail:(NSString *)contactEmail
           completionBlock:(BCCompletionBlock)completionBlock
      errorCompletionBlock:(BCErrorCompletionBlock)ecb
                  cbObject:(BCCallbackObject)cbObject;

/**
* Updates the "friend summary data" associated with the logged in player.
* Some operations will return this summary data. For instance the social
* leaderboards will return the player's score in the leaderboard along
* with the friend summary data. Generally this data is used to provide
* a quick overview of the player without requiring a separate API call
* to read their public stats or entity data.
*
* Note this API call pre-dates the shared player data api (public entity/stats)
* and thus usage for anything outside of social leaderboards should be
* deprecated.
*
* Service Name - PlayerState
* Service Operation - UpdateSummary
*
* @param jsonSummaryData A JSON string defining the summary data.
* For example:
* {
*   "xp":123,
*   "level":12,
*   "highScore":45123
* }
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)updateSummaryFriendData:(NSString *)jsonSummaryData
                completionBlock:(BCCompletionBlock)cb
           errorCompletionBlock:(BCErrorCompletionBlock)ecb
                       cbObject:(BCCallbackObject)cbObject;

@end
