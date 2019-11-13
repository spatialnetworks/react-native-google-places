#import <Foundation/Foundation.h>
#import <GoogleMaps/GoogleMaps.h>
#import <GooglePlaces/GooglePlaces.h>

@interface NSMutableDictionary (GMSPlace)

+ (instancetype)dictionaryWithGMSPlace:(GMSPlace*)place;

@end
