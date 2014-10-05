//
//  NSString+Extension.h
//  HZExtensionKit
//
//  Created by History on 14-4-27.
//  Copyright (c) 2014年 History. All rights reserved.
//

@import Foundation;

@interface NSString (UUID)
+ (NSString *)stringForUUID;
@end

@interface NSString (URLEncode)
- (NSString *)stringByUTF8Encode;
- (NSString *)stringByUTF8Decode;
@end

@interface NSString (Encryption)
- (NSString *)md5;
- (NSString*)sha1;
@end

@interface NSString (URLQuery)
- (NSDictionary *)queryDictionary;
@end

@interface NSString (HTMLReplace)
- (NSString *)replaceHTMLEntities;
@end
