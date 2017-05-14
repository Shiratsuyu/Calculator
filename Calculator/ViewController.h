//
//  ViewController.h
//  Calculator
//
//  Created by Shiratsuyu on 2017/5/14.
//  Copyright © 2017年 Shiratsuyu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *portraitDisplay;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *allButtons;
@property (strong, nonatomic) IBOutlet UIView *additionalOptions;

@end

