//
//  ApplifierImpactAdViewController.h
//  ApplifierImpact
//
//  Created by bluesun on 11/21/12.
//  Copyright (c) 2012 Applifier. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ApplifierImpactWebView/ApplifierImpactWebAppController.h"
#import "ApplifierImpactVideo/ApplifierImpactVideoViewController.h"
#import "ApplifierImpactProperties/ApplifierImpactConstants.h"

@protocol ApplifierImpactMainViewControllerDelegate <NSObject>

@required
- (void)mainControllerWebViewInitialized;
- (void)mainControllerWillOpen;
- (void)mainControllerDidOpen;
- (void)mainControllerWillClose;
- (void)mainControllerDidClose;
- (void)mainControllerStartedPlayingVideo;
- (void)mainControllerVideoEnded;
- (void)mainControllerWillLeaveApplication;
@end

@interface ApplifierImpactMainViewController : UIViewController <ApplifierImpactVideoControllerDelegate, ApplifierImpactWebAppControllerDelegate>

@property (nonatomic, assign) id<ApplifierImpactMainViewControllerDelegate> delegate;

+ (id)sharedInstance;

- (BOOL)openImpact:(BOOL)animated inState:(ApplifierImpactViewState)state;
- (BOOL)closeImpact:(BOOL)forceMainThread withAnimations:(BOOL)animated;
- (BOOL)mainControllerVisible;
- (void)showPlayerAndPlaySelectedVideo:(BOOL)checkIfWatched;
- (void)openAppStoreWithData:(NSDictionary *)data;

@end
