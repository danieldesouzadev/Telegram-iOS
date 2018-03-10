#import <Foundation/Foundation.h>

#import <LegacyComponents/TGModernMediaListItem.h>

@protocol TGGenericPeerMediaListItem <TGModernMediaListItem>

@required

- (int64_t)peerId;
- (int32_t)messageId;
- (NSTimeInterval)date;

- (bool)hasThumbnailUri:(NSString *)thumbnailUri;

@end
