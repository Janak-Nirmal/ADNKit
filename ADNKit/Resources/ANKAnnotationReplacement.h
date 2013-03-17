//
//  ANKAnnotationReplacement.h
//  ADNKit
//
//  Created by Levin, Joel A on 3/17/13.
//  Copyright (c) 2013 Afterwork Studios. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol ANKAnnotationReplacement <NSObject>

@required
+ (NSString *)annotationValueWrapperKey;
- (NSDictionary *)annotationValue;

@end
