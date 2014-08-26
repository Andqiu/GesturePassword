//
//  GesturePasswordController.h
//  GesturePassword
//
//  Created by hb on 14-8-23.
//  Copyright (c) 2014年 黑と白の印记. All rights reserved.
//



#import <UIKit/UIKit.h>
#import "TentacleView.h"
#import "GesturePasswordView.h"

@interface GesturePasswordController : UIViewController <VerificationDelegate,ResetDelegate,GesturePasswordDelegate>

- (void)clear;

@end
