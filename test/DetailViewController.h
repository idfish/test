//
//  DetailViewController.h
//  test
//
//  Created by sung on 2014. 12. 7..
//  Copyright (c) 2014년 sung. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

