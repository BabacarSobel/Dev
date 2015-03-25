//
//  EditorSet.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Editor+DataModel.h"


@interface EditorSet : NSObject
@property (strong, nonatomic) NSMutableOrderedSet *list;
- (void)addEditor:(Editor *)editor;
- (void)removeEditor:(Editor *)editor;

@end
