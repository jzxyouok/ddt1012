//
//  MySharetools.h
//  ddt
//
//  Created by allen on 15/10/15.
//  Copyright (c) 2015年 Light. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MySharetools : NSObject
@property (nonatomic) BOOL isFirstSignupViewController;
@property (nonatomic) BOOL isFromMycenter;
+(MySharetools *)shared;
-(id)getViewControllerWithIdentifier:(NSString *)Identifier andstoryboardName:(NSString *)storyboardname;
+ (void)msgBox:(NSString *)msg;
@end
