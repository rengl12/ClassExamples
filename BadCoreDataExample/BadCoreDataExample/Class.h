//
//  Class.h
//  BadCoreDataExample
//
//  Created by Jay Palat on 3/20/14.
//  Copyright (c) 2014 Jay Palat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Student;

@interface Class : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * classID;
@property (nonatomic, retain) Student *rosterIncludes;

@end
