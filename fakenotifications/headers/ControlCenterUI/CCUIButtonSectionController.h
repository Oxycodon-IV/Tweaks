/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/CCUIControlCenterSectionViewController.h>
#import <ControlCenterUI/CCUIControlCenterButtonSectionSettings.h>
#import <ControlCenterUI/CCUIButtonControllerDelegate-Protocol.h>
#import <ControlCenterUI/CCUIButtonStackPagingViewDelegate-Protocol.h>

@interface CCUIButtonSectionController : CCUIControlCenterSectionViewController <CCUIButtonControllerDelegate, CCUIButtonStackPagingViewDelegate> {

	NSMutableArray* _modules;
	NSMutableDictionary* _modulesByID;
	NSMutableDictionary* _moduleControllersByID;

}

@property (nonatomic,readonly) CCUIControlCenterButtonSectionSettings * settings; 
+(Class)viewClass;
+(Class)buttonControllerClass;
-(id)init;
// -(void)dealloc;
-(id)view;
-(CCUIControlCenterButtonSectionSettings *)settings;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)_updateSettings;
-(id)sectionIdentifier;
-(void)_reloadModulesFromScratch;
-(id)_allButtonModules;
-(void)_deactivateModule:(id)arg1 ;
-(id)_supportedButtonModuleClasses;
-(void)_addButtonModule:(id)arg1 ;
-(BOOL)_buttonEnabledForIdentifier:(id)arg1 ;
-(void)_activateModule:(id)arg1 ;
-(id)_sortKeyForModule:(id)arg1 ;
-(id)_allButtonControllers;
-(BOOL)buttonControllerShouldUseSmallButtons:(id)arg1 ;
-(void)buttonController:(id)arg1 publishStatusUpdate:(id)arg2 ;
-(id)_controllerForModule:(id)arg1 ;
-(id)_controllerForIdentifier:(id)arg1 ;
-(void)beginSuppressingPunchOutMaskCachingForReason:(id)arg1 ;
-(void)endSuppressingPunchOutMaskCachingForReason:(id)arg1 ;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
@end
