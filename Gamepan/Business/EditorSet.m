//
//  EditorSet.m
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import "EditorSet.h"

@implementation EditorSet
-(void)addEditor:(Editor *)editor
{
    [_list removeObject:editor];
}

-(void)removeEditor:(Editor *)editor
{
    [_list removeObject:editor];
}

@end
