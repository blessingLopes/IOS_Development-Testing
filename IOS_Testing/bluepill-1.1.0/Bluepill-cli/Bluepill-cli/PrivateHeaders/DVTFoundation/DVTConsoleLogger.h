//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLogger.h"

@interface DVTConsoleLogger : DVTLogger
{
    unsigned long long _indentLevel;
}

+ (void)initialize;
@property unsigned long long indentLevel; // @synthesize indentLevel=_indentLevel;
- (void)decreaseIndentLevelForAspect:(id)arg1;
- (void)increaseIndentLevelForAspect:(id)arg1;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(int)arg3;

@end

