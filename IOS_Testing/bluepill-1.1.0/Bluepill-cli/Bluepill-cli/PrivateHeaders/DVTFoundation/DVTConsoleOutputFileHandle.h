//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@interface DVTConsoleOutputFileHandle : NSFileHandle
{
    BOOL _shouldEmitColor;
    unsigned long long _terminalWidth;
}

- (void)resetColors;
- (void)printf:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2;

@end

