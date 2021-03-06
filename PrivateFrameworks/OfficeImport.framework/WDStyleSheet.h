/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSMutableDictionary, WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle;

@interface WDStyleSheet : NSObject {
    WDCharacterProperties *mDefaultCharacterProperties;
    WDStyle *mDefaultCharacterStyle;
    WDStyle *mDefaultListStyle;
    WDParagraphProperties *mDefaultParagraphProperties;
    WDStyle *mDefaultParagraphStyle;
    WDStyle *mDefaultTableStyle;
    WDDocument *mDocument;
    NSMutableDictionary *mIdDictionaryForName;
    NSMutableDictionary *mStyleDictionary;
    NSMutableArray *mStylesInOrder;
}

- (void)addStyle:(id)arg1 name:(id)arg2;
- (void)createDefaultStyles;
- (id)createStyleWithId:(id)arg1 type:(int)arg2;
- (id)createStyleWithName:(id)arg1 type:(int)arg2;
- (void)dealloc;
- (id)defaultCharacterProperties;
- (id)defaultCharacterStyle;
- (id)defaultListStyle;
- (id)defaultParagraphProperties;
- (id)defaultParagraphStyle;
- (id)defaultTableStyle;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (void)initializeDefaultProperties;
- (id)paragraphStyleWithStartingName:(id)arg1;
- (void)removeStyleWithId:(id)arg1;
- (void)setDefaultCharacterStyle:(id)arg1;
- (void)setDefaultListStyle:(id)arg1;
- (void)setDefaultParagraphStyle:(id)arg1;
- (void)setDefaultTableStyle:(id)arg1;
- (void)setName:(id)arg1 forId:(id)arg2;
- (int)styleCount;
- (id)styleIdForName:(id)arg1;
- (id)styleNameToId:(id)arg1;
- (id)styleWithId:(id)arg1;
- (id)styleWithName:(id)arg1;
- (id)styles;

@end
