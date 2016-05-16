//
//  BrainCloudIdentity.h
//  brainCloudClientObjc
//
//  Created by Hill, Bradley on 2015-08-13.
//  Copyright (c) 2016 bitHeads. All rights reserved.
//

#pragma once

#import <Foundation/Foundation.h>
#import "BrainCloudCompletionBlocks.hh"

@interface BrainCloudIdentity : NSObject

/**
* Attach the user's Facebook credentials to the current profile.
*
* Service Name - Identity
* Service Operation - Attach
*
* @param facebookId The facebook id of the user
* @param authenticationToken The validated token from the Facebook SDK
*   (that will be further validated when sent to the bC service)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Errors to watch for:  SWITCHING_PROFILES - this means that the Facebook identity you provided
* already points to a different profile.  You will likely want to offer the player the
* choice to *SWITCH* to that profile, or *MERGE* the profiles.
*
* To switch profiles, call ClearSavedProfileID() and call AuthenticateFacebook().
*/
- (void)attachFacebookIdentity:(NSString *)facebookId
           authenticationToken:(NSString *)token
               completionBlock:(BCCompletionBlock)cb
          errorCompletionBlock:(BCErrorCompletionBlock)ecb
                      cbObject:(BCCallbackObject)cbObject;

/**
* Merge the profile associated with the provided Facebook credentials with the
* current profile.
*
* Service Name - Identity
* Service Operation - Merge
*
* @param facebookId The facebook id of the user
* @param authenticationToken The validated token from the Facebook SDK
*   (that will be further validated when sent to the bC service)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
*/
- (void)mergeFacebookIdentity:(NSString *)facebookId
          authenticationToken:(NSString *)token
              completionBlock:(BCCompletionBlock)cb
         errorCompletionBlock:(BCErrorCompletionBlock)ecb
                     cbObject:(BCCallbackObject)cbObject;

/**
* Detach the Facebook identity from this profile.
*
* Service Name - Identity
* Service Operation - Detach
*
* @param facebookId The facebook id of the user
* @param continueAnon Proceed even if the profile will revert to anonymous?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and
* disconnecting this identity would result in the profile being anonymous (which means that
* the profile wouldn't be retrievable if the user loses their device)
*/
- (void)detachFacebookIdentity:(NSString *)facebookId
                  continueAnon:(bool)continueAnon
               completionBlock:(BCCompletionBlock)cb
          errorCompletionBlock:(BCErrorCompletionBlock)ecb
                      cbObject:(BCCallbackObject)cbObject;

/**
* Attach a Game Center identity to the current profile.
*
* Service Name - Identity
* Service Operation - Attach
*
* @param gameCenterId The player's game center id  (use the playerID property from the local
*GKPlayer object)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Errors to watch for:  SWITCHING_PROFILES - this means that the Game Center identity you provided
* already points to a different profile.  You will likely want to offer the player the
* choice to *SWITCH* to that profile, or *MERGE* the profiles.
*
* To switch profiles, call ClearSavedProfileID() and call this method again.
*
*/
- (void)attachGameCenterIdentity:(NSString *)gameCenterId
                 completionBlock:(BCCompletionBlock)cb
            errorCompletionBlock:(BCErrorCompletionBlock)ecb
                        cbObject:(BCCallbackObject)cbObject;

/**
* Merge the profile associated with the specified Game Center identity with the current profile.
*
* Service Name - Identity
* Service Operation - Merge
*
* @param gameCenterId The player's game center id  (use the playerID property from the local
*GKPlayer object)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)mergeGameCenterIdentity:(NSString *)gameCenterId
                completionBlock:(BCCompletionBlock)cb
           errorCompletionBlock:(BCErrorCompletionBlock)ecb
                       cbObject:(BCCallbackObject)cbObject;

/**
* Detach the Game Center identity from the current profile.
*
* Service Name - Identity
* Service Operation - Detach
*
* @param gameCenterId The player's game center id  (use the playerID property from the local
*GKPlayer object)
* @param continueAnon Proceed even if the profile will revert to anonymous?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and
* disconnecting this identity would result in the profile being anonymous (which means that
* the profile wouldn't be retrievable if the user loses their device)
*/
- (void)detachGameCenterIdentity:(NSString *)gameCenterId
                    continueAnon:(bool)continueAnon
                 completionBlock:(BCCompletionBlock)cb
            errorCompletionBlock:(BCErrorCompletionBlock)ecb
                        cbObject:(BCCallbackObject)cbObject;

/**
* Attach a Email and Password identity to the current profile.
*
* Service Name - Identity
* Service Operation - Attach
*
* @param email The player's e-mail address
* @param password The player's password
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Errors to watch for:  SWITCHING_PROFILES - this means that the email address you provided
* already points to a different profile.  You will likely want to offer the player the
* choice to *SWITCH* to that profile, or *MERGE* the profiles.
*
* To switch profiles, call ClearSavedProfileID() and then call AuthenticateEmailPassword().
*/
- (void)attachEmailIdentity:(NSString *)email
        authenticationToken:(NSString *)password
            completionBlock:(BCCompletionBlock)cb
       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                   cbObject:(BCCallbackObject)cbObject;

/**
* Merge the profile associated with the provided e=mail with the current profile.
*
* Service Name - Identity
* Service Operation - Merge
*
* @param email The player's e-mail address
* @param password The player's password
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
*/
- (void)mergeEmailIdentity:(NSString *)email
       authenticationToken:(NSString *)password
           completionBlock:(BCCompletionBlock)cb
      errorCompletionBlock:(BCErrorCompletionBlock)ecb
                  cbObject:(BCCallbackObject)cbObject;

/**
* Detach the e-mail identity from the current profile
*
* Service Name - Identity
* Service Operation - Detach
*
* @param email The player's e-mail address
* @param continueAnon Proceed even if the profile will revert to anonymous?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and
* disconnecting this identity would result in the profile being anonymous (which means that
* the profile wouldn't be retrievable if the user loses their device)
*/
- (void)detachEmailIdentity:(NSString *)email
               continueAnon:(bool)continueAnon
            completionBlock:(BCCompletionBlock)cb
       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                   cbObject:(BCCallbackObject)cbObject;

/**
* Attach a Universal (userId + password) identity to the current profile.
*
* Service Name - Identity
* Service Operation - Attach
*
* @param userId The player's userId
* @param password The player's password
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Errors to watch for:  SWITCHING_PROFILES - this means that the email address you provided
* already points to a different profile.  You will likely want to offer the player the
* choice to *SWITCH* to that profile, or *MERGE* the profiles.
*
* To switch profiles, call ClearSavedProfileID() and then call AuthenticateEmailPassword().
*/
- (void)attachUniversalIdentity:(NSString *)userId
            authenticationToken:(NSString *)password
                completionBlock:(BCCompletionBlock)cb
           errorCompletionBlock:(BCErrorCompletionBlock)ecb
                       cbObject:(BCCallbackObject)cbObject;

/**
* Merge the profile associated with the provided userId with the current profile.
*
* Service Name - Identity
* Service Operation - Merge
*
* @param userId The player's userId
* @param password The player's password
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)mergeUniversaIdentity:(NSString *)userId
          authenticationToken:(NSString *)password
              completionBlock:(BCCompletionBlock)cb
         errorCompletionBlock:(BCErrorCompletionBlock)ecb
                     cbObject:(BCCallbackObject)cbObject;

/**
* Detach the universal identity from the current profile
*
* Service Name - Identity
* Service Operation - Detach
*
* @param userId The player's userId
* @param continueAnon Proceed even if the profile will revert to anonymous?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and
* disconnecting this identity would result in the profile being anonymous (which means that
* the profile wouldn't be retrievable if the user loses their device)
*/
- (void)detachUniversalIdentity:(NSString *)userId
                   continueAnon:(bool)continueAnon
                completionBlock:(BCCompletionBlock)cb
           errorCompletionBlock:(BCErrorCompletionBlock)ecb
                       cbObject:(BCCallbackObject)cbObject;

/**
* Attach a Steam (steamId + steamsessionticket) identity to the current profile.
*
* Service Name - Identity
* Service Operation - Attach
*
* @param steamId String representation of 64 bit steam id
* @param sessionticket The player's session ticket (hex encoded)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Errors to watch for:  SWITCHING_PROFILES - this means that the email address you provided
* already points to a different profile.  You will likely want to offer the player the
* choice to *SWITCH* to that profile, or *MERGE* the profiles.
*
* To switch profiles, call ClearSavedProfileID() and then call AuthenticateSteam().
*/
- (void)attachSteamIdentity:(NSString *)steamId
        authenticationToken:(NSString *)sessionTicket
            completionBlock:(BCCompletionBlock)cb
       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                   cbObject:(BCCallbackObject)cbObject;

/**
* Merge the profile associated with the provided steam steamId with the current profile.
*
* Service Name - Identity
* Service Operation - Merge
*
* @param steamId String representation of 64 bit steam id
* @param sessionticket The player's session ticket (hex encoded)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
*/
- (void)mergeSteamIdentity:(NSString *)steamId
       authenticationToken:(NSString *)sessionTicket
           completionBlock:(BCCompletionBlock)cb
      errorCompletionBlock:(BCErrorCompletionBlock)ecb
                  cbObject:(BCCallbackObject)cbObject;

/**
* Detach the steam identity from the current profile
*
* Service Name - Identity
* Service Operation - Detach
*
* @param steamId String representation of 64 bit steam id
* @param continueAnon Proceed even if the profile will revert to anonymous?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and
* disconnecting this identity would result in the profile being anonymous (which means that
* the profile wouldn't be retrievable if the user loses their device)
*/
- (void)detachSteamIdentity:(NSString *)steamId
               continueAnon:(bool)continueAnon
            completionBlock:(BCCompletionBlock)cb
       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                   cbObject:(BCCallbackObject)cbObject;

/**
* Attach the user's Google credentials to the current profile.
*
* Service Name - Identity
* Service Operation - Attach
*
* @param googleUserId The Google id of the user
* @param authenticationToken The validated token from the Google SDK
*   (that will be further validated when sent to the bC service)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Errors to watch for:  SWITCHING_PROFILES - this means that the Google identity you provided
* already points to a different profile.  You will likely want to offer the player the
* choice to *SWITCH* to that profile, or *MERGE* the profiles.
*
* To switch profiles, call ClearSavedProfileID() and call AuthenticateGoogle().
*/
- (void)attachGoogleIdentity:(NSString *)googleId
         authenticationToken:(NSString *)token
             completionBlock:(BCCompletionBlock)cb
        errorCompletionBlock:(BCErrorCompletionBlock)ecb
                    cbObject:(BCCallbackObject)cbObject;

/**
* Merge the profile associated with the provided Google credentials with the
* current profile.
*
* Service Name - Identity
* Service Operation - Merge
*
* @param googleId The Google id of the user
* @param authenticationToken The validated token from the Google SDK
*   (that will be further validated when sent to the bC service)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
*/
- (void)mergeGoogleIdentity:(NSString *)googleId
        authenticationToken:(NSString *)token
            completionBlock:(BCCompletionBlock)cb
       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                   cbObject:(BCCallbackObject)cbObject;

/**
* Detach the Google identity from this profile.
*
* Service Name - Identity
* Service Operation - Detach
*
* @param googleId The Google id of the user
* @param continueAnon Proceed even if the profile will revert to anonymous?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and
* disconnecting this identity would result in the profile being anonymous (which means that
* the profile wouldn't be retrievable if the user loses their device)
*/
- (void)detachGoogleIdentity:(NSString *)googleId
                continueAnon:(bool)continueAnon
             completionBlock:(BCCompletionBlock)cb
        errorCompletionBlock:(BCErrorCompletionBlock)ecb
                    cbObject:(BCCallbackObject)cbObject;

/**
* Attach the user's Twitter credentials to the current profile.
*
* Service Name - Identity
* Service Operation - Attach
*
* @param twitterId The Twitter id of the user
* @param authenticationToken The authentication token derrived from the twitter APIs
* @param secret The secret given when attempting to link with Twitter
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Errors to watch for:  SWITCHING_PROFILES - this means that the Twitter identity you provided
* already points to a different profile.  You will likely want to offer the player the
* choice to *SWITCH* to that profile, or *MERGE* the profiles.
*
* To switch profiles, call ClearSavedProfileID() and call AuthenticateTwitter().
*/
- (void)attachTwitterIdentity:(NSString *)twitterId
          authenticationToken:(NSString *)token
                       secret:(NSString *)secret
              completionBlock:(BCCompletionBlock)cb
         errorCompletionBlock:(BCErrorCompletionBlock)ecb
                     cbObject:(BCCallbackObject)cbObject;

/**
* Merge the profile associated with the provided Twitter credentials with the
* current profile.
*
* Service Name - Identity
* Service Operation - Merge
*
* @param twitterId The Twitter id of the user
* @param authenticationToken The authentication token derrived from the twitter APIs
* @param secret The secret given when attempting to link with Twitter
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
*/
- (void)mergeTwitterIdentity:(NSString *)twitterId
         authenticationToken:(NSString *)token
                      secret:(NSString *)secret
             completionBlock:(BCCompletionBlock)cb
        errorCompletionBlock:(BCErrorCompletionBlock)ecb
                    cbObject:(BCCallbackObject)cbObject;

/**
* Detach the Twitter identity from this profile.
*
* Service Name - Identity
* Service Operation - Detach
*
* @param twitterId The Twitter id of the user
* @param continueAnon Proceed even if the profile will revert to anonymous?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and
* disconnecting this identity would result in the profile being anonymous (which means that
* the profile wouldn't be retrievable if the user loses their device)
*/
- (void)detachTwitterIdentity:(NSString *)twitterId
                 continueAnon:(bool)continueAnon
              completionBlock:(BCCompletionBlock)cb
         errorCompletionBlock:(BCErrorCompletionBlock)ecb
                     cbObject:(BCCallbackObject)cbObject;

/**
* Attach the user's Parse credentials to the current profile.
*
* Service Name - Identity
* Service Operation - Attach
*
* @param googleUserId The Parse id of the user
* @param authenticationToken The validated token from Parse
*   (that will be further validated when sent to the bC service)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Errors to watch for:  SWITCHING_PROFILES - this means that the Google identity you provided
* already points to a different profile.  You will likely want to offer the player the
* choice to *SWITCH* to that profile, or *MERGE* the profiles.
*
* To switch profiles, call clearSavedProfileID() and call authenticateParse().
*/
- (void)attachParseIdentity:(NSString *)parseId
        authenticationToken:(NSString *)token
            completionBlock:(BCCompletionBlock)cb
       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                   cbObject:(BCCallbackObject)cbObject;

/**
* Merge the profile associated with the provided Parse credentials with the
* current profile.
*
* Service Name - Identity
* Service Operation - Merge
*
* @param googleId The Parse id of the user
* @param authenticationToken The validated token from Parse
*   (that will be further validated when sent to the bC service)
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
*/
- (void)mergeParseIdentity:(NSString *)parseId
       authenticationToken:(NSString *)token
           completionBlock:(BCCompletionBlock)cb
      errorCompletionBlock:(BCErrorCompletionBlock)ecb
                  cbObject:(BCCallbackObject)cbObject;

/**
* Detach the Parse identity from this profile.
*
* Service Name - Identity
* Service Operation - Detach
*
* @param googleId The Parse id of the user
* @param continueAnon Proceed even if the profile will revert to anonymous?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*
* Watch for DOWNGRADING_TO_ANONYMOUS_ERROR - occurs if you set continueAnon to false, and
* disconnecting this identity would result in the profile being anonymous (which means that
* the profile wouldn't be retrievable if the user loses their device)
*/
- (void)detachParseIdentity:(NSString *)parseId
               continueAnon:(bool)continueAnon
            completionBlock:(BCCompletionBlock)cb
       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                   cbObject:(BCCallbackObject)cbObject;

/**
* Switch to a Child Profile
*
* Service Name - Identity
* Service Operation - SWITCH_TO_CHILD_PROFILE
*
* @param childProfileId The profileId of the child profile to switch to
* If null and forceCreate is true a new profile will be created
* @param childGameId The appId of the child game to switch to
* @param forceCreate Should a new profile be created if it does not exist?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)switchToChildProfile:(NSString *)childProfileId
                  childAppId:(NSString *)childAppId
                 forceCreate:(bool)forceCreate
             completionBlock:(BCCompletionBlock)cb
        errorCompletionBlock:(BCErrorCompletionBlock)ecb
                    cbObject:(BCCallbackObject)cbObject;

/**
* Switches to a child profile of an app when only one profile exists
* If multiple profiles exist this returns an error
*
* Service Name - Identity
* Service Operation - SWITCH_TO_CHILD_PROFILE
*
* @param childGameId The App ID of the child game to switch to
* @param forceCreate Should a new profile be created if it does not exist?
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)switchToSingletonChildProfile:(NSString *)childAppId
                 forceCreate:(bool)forceCreate
             completionBlock:(BCCompletionBlock)cb
        errorCompletionBlock:(BCErrorCompletionBlock)ecb
                    cbObject:(BCCallbackObject)cbObject;

/**
* Switch to a Parent Profile
*
* Service Name - Identity
* Service Operation - SWITCH_TO_PARENT_PROFILE
*
* @param parentLevelName The level of the parent to switch to
* If null and forceCreate is true a new profile will be created
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)switchToParentProfile:(NSString *)parentLevelName
              completionBlock:(BCCompletionBlock)cb
         errorCompletionBlock:(BCErrorCompletionBlock)ecb
                     cbObject:(BCCallbackObject)cbObject;

/**
* Returns a list of all child profiles in child Apps
*
* Service Name - Identity
* Service Operation - GET_CHILD_PROFILES
*
* @param includeSummaryData Whether to return the summary friend data along with this call
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)getChildProfiles:(bool)includeSummaryData
         completionBlock:(BCCompletionBlock)cb
    errorCompletionBlock:(BCErrorCompletionBlock)ecb
                cbObject:(BCCallbackObject)cbObject;

@end
