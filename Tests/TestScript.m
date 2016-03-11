//
//  TestScript.m
//  brainCloudClientObjc
//
//  Created by Hill, Bradley on 2015-08-10.
//  Copyright (c) 2015 bitHeads. All rights reserved.
//

#include <time.h>
#import "TestFixtureBase.h"

@interface TestScript : TestFixtureBase

@end

@implementation TestScript

NSString *scriptName = @"testScript";
NSString *_childAppId = @"10326";
NSString *_parentLevelName = @"Master";

- (void)setUp { [super setUp]; }

- (void)tearDown { [super tearDown]; }

- (void)testRunScript
{
    [[m_client scriptService] runScript:scriptName
                         jsonScriptData:@""
                        completionBlock:successBlock
                   errorCompletionBlock:failureBlock
                               cbObject:nil];
    [self waitForResult];
}

- (void)testScheduleScriptUTC
{
    NSDateComponents *dayComponent = [[NSDateComponents alloc] init];
    dayComponent.day = 1;

    NSCalendar *theCalendar = [NSCalendar currentCalendar];
    NSDate *nextDate =
        [theCalendar dateByAddingComponents:dayComponent toDate:[NSDate date] options:0];

    [[m_client scriptService] scheduleRunScriptUTC:scriptName
                                    jsonScriptData:@""
                                    startDateInUTC:nextDate
                                   completionBlock:successBlock
                              errorCompletionBlock:failureBlock
                                          cbObject:nil];
    [self waitForResult];
}

- (void)testScheduleScriptMinutes
{
    time_t currentTime = time(0);
    struct tm *timeStruct = localtime(&currentTime);
    timeStruct->tm_mday += 1;

    [[m_client scriptService] scheduleRunScriptMinutes:scriptName
                                        jsonScriptData:@""
                                        minutesFromNow:10
                                       completionBlock:successBlock
                                  errorCompletionBlock:failureBlock
                                              cbObject:nil];
    [self waitForResult];
}

- (void)testRunParentScript
{
    [self goToChildProfile];
    
    [[m_client scriptService] runParentScript:scriptName
                           jsonScriptData:@""
                          parentLevelName:_parentLevelName
                          completionBlock:successBlock
                     errorCompletionBlock:failureBlock
                                 cbObject:nil];
    [self waitForResult];
}

@end