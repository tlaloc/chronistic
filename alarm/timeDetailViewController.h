//
//  timeDetailViewController.h
//  alarm
//
//  Created by Not Sure on 3/29/13.
//  Copyright (c) 2013 Not Sure. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface timeDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
