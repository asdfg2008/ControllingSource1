//
//  DetailViewController.h
//  ControllingSource
//
//  Created by crg on 14/12/5.
//  Copyright (c) 2014年 qz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

