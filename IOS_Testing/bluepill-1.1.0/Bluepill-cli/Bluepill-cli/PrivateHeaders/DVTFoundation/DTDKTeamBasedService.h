//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTDKDeveloperPortalService.h"

@class NSString;

@interface DTDKTeamBasedService : DTDKDeveloperPortalService
{
}

+ (id)_service:(id)arg1 requestPropertyList:(id)arg2;
+ (id)_createRequestDictionaryForTeam:(id)arg1 andPlatform:(id)arg2;
+ (id)_createRequestDictionaryForTeam:(id)arg1;
- (void)_success;
- (void)_failure:(id)arg1;
@property(readonly, copy) NSString *subPlatform;
@property(readonly, copy) NSString *platform;
@property(readonly, copy) NSString *teamID;

@end

