//
//  BrainCloudPushNotification.hh
//  brainCloudClientObjc
//
//  Created by Ryan Homer on 2/5/2015.
//  Copyright (c) 2016 bitHeads. All rights reserved.
//

#pragma once

#import "BrainCloudCompletionBlocks.hh"

@class PlatformObjc;
@interface BrainCloudPushNotification : NSObject

/**
 * Deregisters all device tokens currently registered to the player.
 *
 * @param cb Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)deregisterAllPushNotificationDeviceTokens:(BCCompletionBlock)cb
                             errorCompletionBlock:(BCErrorCompletionBlock)ecb
                                         cbObject:(BCCallbackObject)cbObject;

/**
 * Deregisters the given device token from the server to disable this device
 * from receiving push notifications.
 *
 * @param platform The device platform being deregistered.
 * @param deviceToken The platform-dependant device token needed for push notifications.
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */- (void)deregisterPushNotificationDeviceToken:(PlatformObjc *) platform
                                     deviceToken:(NSString *)deviceToken
                                 completionBlock:(BCCompletionBlock)cb
                            errorCompletionBlock:(BCErrorCompletionBlock)ecb
                                        cbObject:(BCCallbackObject)cbObject;


/**
* Registers the given device token with the server to enable this device
* to receive push notifications.
*
* @param deviceType The type of device
* @param deviceToken The platform-dependant device token needed for push notifications.
*   On IOS, this is obtained using the application:didRegisterForRemoteNotificationsWithDeviceToken callback
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)registerPushNotificationDeviceToken:(PlatformObjc *) platform
                                deviceToken:(NSString *)deviceToken
                            completionBlock:(BCCompletionBlock)cb
                       errorCompletionBlock:(BCErrorCompletionBlock)ecb
                                   cbObject:(BCCallbackObject)cbObject;

/**
 * Registers the given device token with the server to enable this device
 * to receive push notifications.
 *
 * @param deviceType The type of device
 * @param deviceToken The platform-dependant device token needed for push notifications.
 *   On IOS, this is obtained using the application:didRegisterForRemoteNotificationsWithDeviceToken callback
 * @param completionBlock Block to call on return of successful server response
 * @param errorCompletionBlock Block to call on return of unsuccessful server response
 * @param cbObject User object sent to the completion blocks
 */
- (void)registerPushNotificationDeviceTokenData:(PlatformObjc *) platform
                                    deviceToken:(NSData *)deviceToken
                                completionBlock:(BCCompletionBlock)cb
                           errorCompletionBlock:(BCErrorCompletionBlock)ecb
                                       cbObject:(BCCallbackObject)cbObject;

/**
* Sends a simple push notification based on the passed in message.
* NOTE: It is possible to send a push notification to oneself.
*
* @param toPlayerId The braincloud playerId of the user to receive the notification
* @param message Text of the push notification
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)sendSimplePushNotification:(NSString *)toPlayerId
                           message:(NSString *)message
                   completionBlock:(BCCompletionBlock)cb
              errorCompletionBlock:(BCErrorCompletionBlock)ecb
                          cbObject:(BCCallbackObject)cbObject;

/**
* Sends a notification to a user based on a brainCloud portal configured notification template.
* NOTE: It is possible to send a push notification to oneself.
*
* @param toPlayerId The braincloud playerId of the user to receive the notification
* @param notificationTemplateId Id of the notification template
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)sendRichPushNotification:(NSString *)toPlayerId
          notificationTemplateId:(int)notificationTemplateId
                 completionBlock:(BCCompletionBlock)cb
            errorCompletionBlock:(BCErrorCompletionBlock)ecb
                        cbObject:(BCCallbackObject)cbObject;

/**
* Sends a notification to a user based on a brainCloud portal configured notification template.
* Includes JSON defining the substitution params to use with the template.
* See the Portal documentation for more info.
* NOTE: It is possible to send a push notification to oneself.
*
* @param toPlayerId The braincloud playerId of the user to receive the notification
* @param notificationTemplateId Id of the notification template
* @param substitutionJson JSON defining the substitution params to use with the template
* @param completionBlock Block to call on return of successful server response
* @param errorCompletionBlock Block to call on return of unsuccessful server response
* @param cbObject User object sent to the completion blocks
*/
- (void)sendRichPushNotificationWithParams:(NSString *)toPlayerId
                    notificationTemplateId:(int)notificationTemplateId
                          substitutionJson:(NSString*)substitutionJson
                           completionBlock:(BCCompletionBlock)cb
                      errorCompletionBlock:(BCErrorCompletionBlock)ecb
                                  cbObject:(BCCallbackObject)cbObject;

/**
 * Sends a notification to a "group" of user based on a brainCloud portal configured notification template.
 * Includes JSON defining the substitution params to use with the template.
 * See the Portal documentation for more info.
 *
 * @param in_groupId Target group
 * @param in_notificationTemplateId Template to use
 * @param in_substitutionsJson Map of substitution positions to strings
 * @param in_callback The method to be invoked when the server response is received
 */
- (void)sendTemplatedPushNotificationToGroup:(NSString *)groupId
                      notificationTemplateId:(int)notificationTemplateId
                           substitutionsJson:(NSString *)substitutionsJson
                             completionBlock:(BCCompletionBlock)cb
                        errorCompletionBlock:(BCErrorCompletionBlock)ecb
                                    cbObject:(BCCallbackObject)cbObject;

/**
 * Sends a notification to a "group" of user consisting of alert content and custom data.
 * See the Portal documentation for more info.
 *
 * @param in_groupId Target group
 * @param in_alertContentJson Body and title of alert
 * @param in_customDataJson Optional custom data
 * @param in_callback The method to be invoked when the server response is received
 */
- (void)sendNormalizedPushNotificationToGroup:(NSString *)groupId
                             alertContentJson:(NSString *)alertContentJson
                               customDataJson:(NSString *)customDataJson
                              completionBlock:(BCCompletionBlock)cb
                         errorCompletionBlock:(BCErrorCompletionBlock)ecb
                                     cbObject:(BCCallbackObject)cbObject;

@end
