//
//  Type+DataModel.h
//  LudoTech
//
//  Created by Valentin Bercot on 13/03/2015.
//  Copyright (c) 2015 Valentin Bercot & Remy Tartiere. All rights reserved.
//

#import "Category.h"

// ===== DECLARATION =====

@interface GameCategory (DataModel)

// ===== METHODS =====

+(GameCategory *) getObjectWithName:(NSString *)name withEntityDescription:(NSEntityDescription *)entity inManagedObjectContext:(NSManagedObjectContext *)context;

@end
