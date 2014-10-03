//
//  PlayingCard.h
//  Matchismo
//
//  Created by fmsurvey on 3/10/14.
//  Copyright (c) 2014 SMART FM. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
