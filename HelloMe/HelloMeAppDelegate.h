//
//  HelloMeAppDelegate.h
//  HelloMe
//
//  Created by Petri Sirkkala on 5.9.2011.
//  Copyright 2011 Koti. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloMeAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end
