//
//  ThemeSet.m
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import "ThemeSet.h"

@implementation ThemeSet

-(void)addTheme:(Theme *)theme
{
    [_list addObject:theme];
}

-(void)removeTheme:(Theme *)theme
{
    [_list removeObject:theme];
}
@end
