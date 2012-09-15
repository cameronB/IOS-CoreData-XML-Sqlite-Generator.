//
//  NewsDetails.h
//  IOS-CoreData-XML-Sqlite-Generator
//
//  Created by Cameron Bradley on 16/09/12.
//  Copyright (c) 2012 Cameron Bradley. All rights reserved.
//

@class NewsInfo;

@interface NewsDetails : NSManagedObject

@property (nonatomic, retain) NSString * newsDescription;
@property (nonatomic, retain) NSString * newsLink;
@property (nonatomic, retain) NewsInfo *info;

@end
