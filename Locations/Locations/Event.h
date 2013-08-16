//
//  Event.h
//  Locations
//
//  Created by Paul Young on 15/08/2013.
//  Copyright (c) 2013 Paul Young. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;

@end
