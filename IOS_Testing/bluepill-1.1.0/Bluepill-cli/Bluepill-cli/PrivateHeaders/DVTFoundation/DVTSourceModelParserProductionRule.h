//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

@class DVTLanguageSpecification, NSArray;

@interface DVTSourceModelParserProductionRule : NSObject
{
    int _rc;
    id _tokenPredictSetBuffer;
    unsigned long long _tokenPredictSetBufferSize;
    id _nodePredictSetBuffer;
    unsigned long long _nodePredictSetBufferSize;
    BOOL _blockScope;
    BOOL _inheritsNodeType;
    BOOL _ignoreToken;
    BOOL _itemIsVolatile;
    BOOL _saveEndToken;
    BOOL _interiorRuleMayHaveTemporaryLexerFlags;
    short _itemSyntaxType;
    int _startToken;
    int _endToken;
    int _altEndToken;
    DVTLanguageSpecification *_startProduction;
    DVTLanguageSpecification *_endProduction;
    DVTLanguageSpecification *_altEndProduction;
    NSArray *_predictSet;
    NSArray *_interiorProductionRules;
    DVTLanguageSpecification *_langSpec;
    long long _itemToken;
    unsigned long long _lexerMode;
    NSArray *_tokenInteriorPredictSet;
    NSArray *_nodeInteriorPredictSet;
}

+ (void)initializeProductionsForLanguageSpecification:(id)arg1;
+ (unsigned long long)indexOfProductionMatchingNode:(id)arg1 inProduction:(id)arg2;
+ (unsigned long long)indexOfProductionMatchingToken:(int)arg1 inProduction:(id)arg2;
+ (int)tokenForSymbol:(id)arg1;
@property(nonatomic) BOOL interiorRuleMayHaveTemporaryLexerFlags; // @synthesize interiorRuleMayHaveTemporaryLexerFlags=_interiorRuleMayHaveTemporaryLexerFlags;
@property(retain, nonatomic) NSArray *nodeInteriorPredictSet; // @synthesize nodeInteriorPredictSet=_nodeInteriorPredictSet;
@property(retain, nonatomic) NSArray *tokenInteriorPredictSet; // @synthesize tokenInteriorPredictSet=_tokenInteriorPredictSet;
@property(nonatomic) unsigned long long lexerMode; // @synthesize lexerMode=_lexerMode;
@property(nonatomic) BOOL saveEndToken; // @synthesize saveEndToken=_saveEndToken;
@property(nonatomic) BOOL itemIsVolatile; // @synthesize itemIsVolatile=_itemIsVolatile;
@property(nonatomic) BOOL ignoreToken; // @synthesize ignoreToken=_ignoreToken;
@property(nonatomic) BOOL inheritsNodeType; // @synthesize inheritsNodeType=_inheritsNodeType;
@property(nonatomic) BOOL blockScope; // @synthesize blockScope=_blockScope;
@property(nonatomic) short itemSyntaxType; // @synthesize itemSyntaxType=_itemSyntaxType;
@property(nonatomic) long long itemToken; // @synthesize itemToken=_itemToken;
@property(readonly, nonatomic) DVTLanguageSpecification *langSpec; // @synthesize langSpec=_langSpec;
@property(retain, nonatomic) NSArray *interiorProductionRules; // @synthesize interiorProductionRules=_interiorProductionRules;
@property(readonly, nonatomic) NSArray *predictSet; // @synthesize predictSet=_predictSet;
@property(nonatomic) DVTLanguageSpecification *altEndProduction; // @synthesize altEndProduction=_altEndProduction;
@property(nonatomic) int altEndToken; // @synthesize altEndToken=_altEndToken;
@property(nonatomic) DVTLanguageSpecification *endProduction; // @synthesize endProduction=_endProduction;
@property(readonly, nonatomic) DVTLanguageSpecification *startProduction; // @synthesize startProduction=_startProduction;
@property(readonly, nonatomic) int endToken; // @synthesize endToken=_endToken;
@property(readonly, nonatomic) int startToken; // @synthesize startToken=_startToken;
//- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)matchEndNode:(id)arg1;
- (BOOL)matchEndToken:(int)arg1;
- (BOOL)matchNode:(id)arg1;
- (BOOL)matchToken:(int)arg1;
@property(readonly, nonatomic) BOOL scopeProduction;
- (id *)_nodePredictSetBuffer;
- (id *)_tokenPredictSetBuffer;
- (void)dealloc;
- (id)initWithStartProduction:(id)arg1 langSpec:(id)arg2;
- (id)initWithStartToken:(int)arg1 endToken:(int)arg2 langSpec:(id)arg3 predictSet:(id)arg4;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

