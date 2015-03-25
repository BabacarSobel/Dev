//
//  CategorySet.m
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import "CategorySet.h"

@implementation CategorySet
-(void)addType:(GameCategory *)type
{
    [_list addObject:type];
}

-(void)removeType:(GameCategory *)type
{
    [_list removeObject:type];
}
@end
