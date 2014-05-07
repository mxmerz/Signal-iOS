#import <Foundation/Foundation.h>

@interface PropertyListPreferences : NSObject {
@private NSMutableDictionary* dictionary;
@private NSString* plistName;
}

+(PropertyListPreferences*) propertyListPreferencesWithName:(NSString*)name;

-(id) tryGetValueForKey:(NSString*)key;
-(void) setValueForKey:(NSString*)key toValue:(id)value;
-(id) adjustAndTryGetNewValueForKey:(NSString*)key afterAdjuster:(id (^)(id oldValue))adjuster;
-(void) clear;

-(NSData*) secureDataStoreAdjustAndTryGetNewValueForKey:(NSString *)key afterAdjuster:(id (^)(id))adjuster;
-(NSString*) secureStringStoreAdjustAndTryGetNewValueForKey:(NSString *)key afterAdjuster:(id (^)(id))adjuster;

@end
