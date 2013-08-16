//
//  LOCAppDelegate.h
//  Locations
//
//  Created by Paul Young on 15/08/2013.
//  Copyright (c) 2013 Paul Young. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LOCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
