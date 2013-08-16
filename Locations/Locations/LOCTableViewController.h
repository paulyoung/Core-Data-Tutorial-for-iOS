//
//  LOCTableViewController.h
//  Locations
//
//  Created by Paul Young on 15/08/2013.
//  Copyright (c) 2013 Paul Young. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface LOCTableViewController : UITableViewController <CLLocationManagerDelegate>

@property (nonatomic, retain) NSMutableArray *eventsArray;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) UIBarButtonItem *addButton;

@end
