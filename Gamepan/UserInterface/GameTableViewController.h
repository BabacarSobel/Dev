//
//  GameTableViewController.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GameSet.h"
@interface GameTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@end
