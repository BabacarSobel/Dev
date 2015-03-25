//
//  LanguageSet.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Language+DataModel.h"

@interface LanguageSet : NSObject

@property (strong, nonatomic) NSMutableOrderedSet *list;

// ===== METHODS =====

- (void)addLanguage:(Language *)language;
- (void)removeLanguage:(Language *)language;
@end
