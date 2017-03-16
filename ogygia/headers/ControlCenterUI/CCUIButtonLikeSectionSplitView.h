/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/CCUIControlCenterSectionView.h>
#import <ControlCenterUI/CCUIControlCenterPushButton.h>

@interface CCUIButtonLikeSectionSplitView : CCUIControlCenterSectionView {

	CGFloat _separatorWidth;
	NSUInteger _mode;
	CCUIControlCenterButton* _leftSection;
	CCUIControlCenterButton* _rightSection;

}

@property (assign,nonatomic) NSUInteger mode;                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) CCUIControlCenterButton * leftSection;               //@synthesize leftSection=_leftSection - In the implementation block
@property (nonatomic,retain) CCUIControlCenterButton * rightSection;              //@synthesize rightSection=_rightSection - In the implementation block
@property (nonatomic,retain) CCUIControlCenterButton * middleSection;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)setMode:(NSUInteger)arg1 ;
-(NSUInteger)mode;
-(void)setLeftSection:(CCUIControlCenterButton *)arg1 ;
-(void)setRightSection:(CCUIControlCenterButton *)arg1 ;
-(CCUIControlCenterButton *)leftSection;
-(CCUIControlCenterButton *)rightSection;
-(void)_updateLabelParameters;
-(void)_updateButtonsCorners;
-(void)_relayout;
-(UIEdgeInsets)_landscapeInsetsForSection;
-(CGRect)_frameForSectionSlot:(int)arg1 ;
-(CCUIControlCenterButton *)_viewForSectionSlot:(int)arg1 ;
- (void)test3Buttons;
@end