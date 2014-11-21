// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

// @@protoc_insertion_point(imports)

@class WebSocketMessage;
@class WebSocketMessageBuilder;
@class WebSocketRequestMessage;
@class WebSocketRequestMessageBuilder;
@class WebSocketResponseMessage;
@class WebSocketResponseMessageBuilder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif

typedef enum {
  WebSocketMessageTypeUnknown = 0,
  WebSocketMessageTypeRequest = 1,
  WebSocketMessageTypeResponse = 2,
} WebSocketMessageType;

BOOL WebSocketMessageTypeIsValidValue(WebSocketMessageType value);


@interface SubProtocolRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface WebSocketRequestMessage : PBGeneratedMessage {
@private
  BOOL hasId_:1;
  BOOL hasVerb_:1;
  BOOL hasPath_:1;
  BOOL hasBody_:1;
  UInt64 id;
  NSString* verb;
  NSString* path;
  NSData* body;
}
- (BOOL) hasVerb;
- (BOOL) hasPath;
- (BOOL) hasBody;
- (BOOL) hasId;
@property (readonly, strong) NSString* verb;
@property (readonly, strong) NSString* path;
@property (readonly, strong) NSData* body;
@property (readonly) UInt64 id;

+ (WebSocketRequestMessage*) defaultInstance;
- (WebSocketRequestMessage*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (WebSocketRequestMessageBuilder*) builder;
+ (WebSocketRequestMessageBuilder*) builder;
+ (WebSocketRequestMessageBuilder*) builderWithPrototype:(WebSocketRequestMessage*) prototype;
- (WebSocketRequestMessageBuilder*) toBuilder;

+ (WebSocketRequestMessage*) parseFromData:(NSData*) data;
+ (WebSocketRequestMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketRequestMessage*) parseFromInputStream:(NSInputStream*) input;
+ (WebSocketRequestMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketRequestMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (WebSocketRequestMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface WebSocketRequestMessageBuilder : PBGeneratedMessageBuilder {
@private
  WebSocketRequestMessage* result;
}

- (WebSocketRequestMessage*) defaultInstance;

- (WebSocketRequestMessageBuilder*) clear;
- (WebSocketRequestMessageBuilder*) clone;

- (WebSocketRequestMessage*) build;
- (WebSocketRequestMessage*) buildPartial;

- (WebSocketRequestMessageBuilder*) mergeFrom:(WebSocketRequestMessage*) other;
- (WebSocketRequestMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (WebSocketRequestMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasVerb;
- (NSString*) verb;
- (WebSocketRequestMessageBuilder*) setVerb:(NSString*) value;
- (WebSocketRequestMessageBuilder*) clearVerb;

- (BOOL) hasPath;
- (NSString*) path;
- (WebSocketRequestMessageBuilder*) setPath:(NSString*) value;
- (WebSocketRequestMessageBuilder*) clearPath;

- (BOOL) hasBody;
- (NSData*) body;
- (WebSocketRequestMessageBuilder*) setBody:(NSData*) value;
- (WebSocketRequestMessageBuilder*) clearBody;

- (BOOL) hasId;
- (UInt64) id;
- (WebSocketRequestMessageBuilder*) setId:(UInt64) value;
- (WebSocketRequestMessageBuilder*) clearId;
@end

@interface WebSocketResponseMessage : PBGeneratedMessage {
@private
  BOOL hasId_:1;
  BOOL hasMessage_:1;
  BOOL hasBody_:1;
  BOOL hasStatus_:1;
  UInt64 id;
  NSString* message;
  NSData* body;
  UInt32 status;
}
- (BOOL) hasId;
- (BOOL) hasStatus;
- (BOOL) hasMessage;
- (BOOL) hasBody;
@property (readonly) UInt64 id;
@property (readonly) UInt32 status;
@property (readonly, strong) NSString* message;
@property (readonly, strong) NSData* body;

+ (WebSocketResponseMessage*) defaultInstance;
- (WebSocketResponseMessage*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (WebSocketResponseMessageBuilder*) builder;
+ (WebSocketResponseMessageBuilder*) builder;
+ (WebSocketResponseMessageBuilder*) builderWithPrototype:(WebSocketResponseMessage*) prototype;
- (WebSocketResponseMessageBuilder*) toBuilder;

+ (WebSocketResponseMessage*) parseFromData:(NSData*) data;
+ (WebSocketResponseMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketResponseMessage*) parseFromInputStream:(NSInputStream*) input;
+ (WebSocketResponseMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketResponseMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (WebSocketResponseMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface WebSocketResponseMessageBuilder : PBGeneratedMessageBuilder {
@private
  WebSocketResponseMessage* result;
}

- (WebSocketResponseMessage*) defaultInstance;

- (WebSocketResponseMessageBuilder*) clear;
- (WebSocketResponseMessageBuilder*) clone;

- (WebSocketResponseMessage*) build;
- (WebSocketResponseMessage*) buildPartial;

- (WebSocketResponseMessageBuilder*) mergeFrom:(WebSocketResponseMessage*) other;
- (WebSocketResponseMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (WebSocketResponseMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (UInt64) id;
- (WebSocketResponseMessageBuilder*) setId:(UInt64) value;
- (WebSocketResponseMessageBuilder*) clearId;

- (BOOL) hasStatus;
- (UInt32) status;
- (WebSocketResponseMessageBuilder*) setStatus:(UInt32) value;
- (WebSocketResponseMessageBuilder*) clearStatus;

- (BOOL) hasMessage;
- (NSString*) message;
- (WebSocketResponseMessageBuilder*) setMessage:(NSString*) value;
- (WebSocketResponseMessageBuilder*) clearMessage;

- (BOOL) hasBody;
- (NSData*) body;
- (WebSocketResponseMessageBuilder*) setBody:(NSData*) value;
- (WebSocketResponseMessageBuilder*) clearBody;
@end

@interface WebSocketMessage : PBGeneratedMessage {
@private
  BOOL hasRequest_:1;
  BOOL hasResponse_:1;
  BOOL hasType_:1;
  WebSocketRequestMessage* request;
  WebSocketResponseMessage* response;
  WebSocketMessageType type;
}
- (BOOL) hasType;
- (BOOL) hasRequest;
- (BOOL) hasResponse;
@property (readonly) WebSocketMessageType type;
@property (readonly, strong) WebSocketRequestMessage* request;
@property (readonly, strong) WebSocketResponseMessage* response;

+ (WebSocketMessage*) defaultInstance;
- (WebSocketMessage*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (WebSocketMessageBuilder*) builder;
+ (WebSocketMessageBuilder*) builder;
+ (WebSocketMessageBuilder*) builderWithPrototype:(WebSocketMessage*) prototype;
- (WebSocketMessageBuilder*) toBuilder;

+ (WebSocketMessage*) parseFromData:(NSData*) data;
+ (WebSocketMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketMessage*) parseFromInputStream:(NSInputStream*) input;
+ (WebSocketMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (WebSocketMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (WebSocketMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface WebSocketMessageBuilder : PBGeneratedMessageBuilder {
@private
  WebSocketMessage* result;
}

- (WebSocketMessage*) defaultInstance;

- (WebSocketMessageBuilder*) clear;
- (WebSocketMessageBuilder*) clone;

- (WebSocketMessage*) build;
- (WebSocketMessage*) buildPartial;

- (WebSocketMessageBuilder*) mergeFrom:(WebSocketMessage*) other;
- (WebSocketMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (WebSocketMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (WebSocketMessageType) type;
- (WebSocketMessageBuilder*) setType:(WebSocketMessageType) value;
- (WebSocketMessageBuilder*) clearType;

- (BOOL) hasRequest;
- (WebSocketRequestMessage*) request;
- (WebSocketMessageBuilder*) setRequest:(WebSocketRequestMessage*) value;
- (WebSocketMessageBuilder*) setRequestBuilder:(WebSocketRequestMessageBuilder*) builderForValue;
- (WebSocketMessageBuilder*) mergeRequest:(WebSocketRequestMessage*) value;
- (WebSocketMessageBuilder*) clearRequest;

- (BOOL) hasResponse;
- (WebSocketResponseMessage*) response;
- (WebSocketMessageBuilder*) setResponse:(WebSocketResponseMessage*) value;
- (WebSocketMessageBuilder*) setResponseBuilder:(WebSocketResponseMessageBuilder*) builderForValue;
- (WebSocketMessageBuilder*) mergeResponse:(WebSocketResponseMessage*) value;
- (WebSocketMessageBuilder*) clearResponse;
@end


// @@protoc_insertion_point(global_scope)