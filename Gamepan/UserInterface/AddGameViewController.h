//
//  AddGameViewController.h
//  Gamepan
//
//  Created by Babacar-sobel Thiaw on 25/03/2015.
//  Copyright (c) 2015 Babacar&Othmane. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddGameViewController : UIViewController


// ===== PROPERTIES =====

@property (weak, nonatomic) IBOutlet UITextField *name;
- (IBAction)SaveGame:(id)sender;
- (IBAction)cancelGame:(id)sender;

@end
