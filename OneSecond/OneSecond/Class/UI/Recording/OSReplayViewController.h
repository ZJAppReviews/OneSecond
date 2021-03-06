//
//  OSReplayViewController.h
//  OneSecond
//
//  Created by JHR on 15/10/24.
//  Copyright © 2015年 com.homeboy. All rights reserved.
//

#import "OSRootViewController.h"
#import "DBDateUtils.h"
#import "OSCalendarViewController.h"

@protocol OSReplayViewControllerDelegate <NSObject>

@optional
- (void)changeToCalendarViewController:(OSCalendarViewController *)vc;

@end

@interface OSReplayViewController : OSRootViewController

@property (nonatomic, strong) OSDateModel *dateModel;
@property (nonatomic, assign) NSInteger count;
@property (nonatomic, weak) id<OSReplayViewControllerDelegate> delegate;

@end
