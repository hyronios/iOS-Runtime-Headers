/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDrawable, WDAAnchor, WDATextBox;

@interface WDAContent : NSObject <OADClient, OADTextClient> {
    WDAAnchor *mAnchor;
    OADDrawable *mDrawable;
    WDATextBox *mTextBox;
    int mTextType;
}

@property(readonly) WDAAnchor * anchor;

+ (Class)classForType:(unsigned short)arg1;

- (id)anchor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)clearAnchor;
- (id)createAnchor;
- (id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2;
- (void)dealloc;
- (id)drawable;
- (BOOL)floating;
- (BOOL)hasBounds;
- (BOOL)hasText;
- (id)init;
- (bool)isLine;
- (bool)isShape;
- (bool)isTopLevelObject;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDrawable:(id)arg1;
- (void)setTextBox:(id)arg1;
- (void)setTextType:(int)arg1;
- (id)textBox;
- (int)textType;

@end
