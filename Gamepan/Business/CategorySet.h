//
//  CategorySet.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Category+DataModel.h"

@interface CategorySet : NSObject
@property (strong, nonatomic) NSMutableOrderedSet *list;

// ===== METHODS =====

- (void)addType:(GameCategory *)type;
- (void)removeType:(GameCategory *)type;

@end
