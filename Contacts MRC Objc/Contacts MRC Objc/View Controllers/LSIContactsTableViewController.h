//
//  LSIContactsTableViewController.h
//  Contacts MRC Objc
//
//  Created by macbook on 1/29/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LSIContactController;

NS_ASSUME_NONNULL_BEGIN

@interface LSIContactsTableViewController : UITableViewController

@property (nonatomic) LSIContactController *contactController;

@end

NS_ASSUME_NONNULL_END
