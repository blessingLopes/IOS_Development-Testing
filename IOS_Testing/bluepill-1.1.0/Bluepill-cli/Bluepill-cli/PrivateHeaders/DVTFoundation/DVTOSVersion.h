//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class NSString;

@interface DVTOSVersion : NSObject
{
    NSString *_displayName;
    unsigned long long _osVersion;
}

@property(readonly) unsigned long long osVersion; // @synthesize osVersion=_osVersion;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
//- (void).cxx_destruct;
- (id)initWithOSVersion:(unsigned long long)arg1 andDisplayName:(id)arg2;

@end

