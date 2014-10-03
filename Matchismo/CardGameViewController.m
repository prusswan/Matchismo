//
//  CardGameViewController.m
//  Matchismo
//
//  Created by fmsurvey on 2/10/14.
//  Copyright (c) 2014 SMART FM. All rights reserved.
//

#import "CardGameViewController.h"

@interface CardGameViewController ()

@end

@implementation CardGameViewController


- (IBAction)touchCardButton:(UIButton *)sender {
    if ([sender.currentTitle length]) {
        
    }
    [sender setBackgroundImage:[UIImage imageNamed:@"cardback"] forState:UIControlStateNormal];
    [sender setTitle:@"" forState:UIControlStateNormal];
}

@end
