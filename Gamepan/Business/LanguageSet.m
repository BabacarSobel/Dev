//
//  LanguageSet.m
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import "LanguageSet.h"

@implementation LanguageSet

-(void)addLanguage:(Language *)language
{
    [_list addObject:language];
}

-(void)removeLanguage:(Language *)language
{
    [_list removeObject:language];
}

@end
