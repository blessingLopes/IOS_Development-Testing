//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTSourceScanner.h"

@class DVTSourceTokens, NSCharacterSet;

@interface DVTKeywordScanner : DVTSourceScanner
{
    NSCharacterSet *_startSet;
    NSCharacterSet *_invertedOtherSet;
    DVTSourceTokens *_keywords;
    struct _NSRange _previousTokenRange;
    BOOL _caseSensitive;
    BOOL _wordBreak;
    BOOL _isSimpleToken;
}

//- (void).cxx_destruct;
- (struct _NSRange)wordRangeInString:(id)arg1 fromIndex:(unsigned long long)arg2;
- (BOOL)canTokenize;
- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (long long)nextToken:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

