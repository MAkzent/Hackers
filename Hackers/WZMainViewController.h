//
//  WZMainViewController.h
//  Hackers
//
//  Created by Weiran Zhang on 05/11/2012.
//  Copyright (c) 2012 Weiran Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WZHackersData.h"

@interface WZMainViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic) WZNewsType newsType;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

@end
