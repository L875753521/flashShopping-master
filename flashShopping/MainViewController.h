//
//  MainViewController.h
//  flashShopping
//
//  Created by Width on 14-1-2.
//  Copyright (c) 2014年 chinawidth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UITabBarController<UINavigationControllerDelegate>
{
    UIButton *_lastSelecteButton ;
}
- (void)showBarItem:(BOOL)show;

@end
