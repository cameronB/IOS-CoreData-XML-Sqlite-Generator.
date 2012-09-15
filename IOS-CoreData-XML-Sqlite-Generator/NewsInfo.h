//
//  NewsInfo.h
//  IOS-CoreData-XML-Sqlite-Generator
//
//  Created by Cameron Bradley on 16/09/12.
//  Copyright (c) 2012 Cameron Bradley. All rights reserved.
//

@class NewsDetails;

@interface NewsInfo : NSManagedObject

@property (nonatomic, retain) NSString * newsId;
@property (nonatomic, retain) NSString * newsName;
@property (nonatomic, retain) NewsDetails *details;

@end
