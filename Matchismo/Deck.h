//
//  Deck.h
//  Matchismo
//
//  Created by fmsurvey on 3/10/14.
//  Copyright (c) 2014 SMART FM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
