//
//  MasterViewController.h
//  MasterDetail
//
//  Created by Ashu on 16/02/14.
//  Copyright (c) 2014 Ashu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
