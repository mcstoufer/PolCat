//
//  ChildFilterViewController.h
//  PolCat
//
//  Created by Martin Stoufer on 5/26/16.
//  Copyright © 2016 Martin Stoufer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FeedFilterViewController.h"

@interface ChildFilterViewController : UIViewController

@property (nonatomic, weak) FeedFilterViewController *parent;

@end
