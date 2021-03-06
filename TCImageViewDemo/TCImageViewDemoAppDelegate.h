//
//  TCImageViewDemoAppDelegate.h
//  TCImageViewDemo
//
//  Created by Toto Tvalavadze on 2/17/11.
//  Copyright 2011 63BITS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCWebImageView.h"


@interface TCImageViewDemoAppDelegate : NSObject <UIApplicationDelegate, TCImageViewDelegate> {
    
    TCWebImageView *_image;
    UIButton *_button;
    UIButton *_clearCacheButton;
    
    UIProgressView *_progressBar;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;


-(void) buttonTapped: (UIButton *) sender;


@end
