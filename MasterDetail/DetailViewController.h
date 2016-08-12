//
//  DetailViewController.h
//  MasterDetail
//
//  Created by Ashu on 16/02/14.
//  Copyright (c) 2014 Ashu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
