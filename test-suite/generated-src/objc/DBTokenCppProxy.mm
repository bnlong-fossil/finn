// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from token.djinni

#import "DBTokenCppProxy+Private.h"
#import "DBToken.h"
#import "DJIDate.h"
#import "DJIError.h"
#include <exception>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@implementation DBTokenCppProxy

- (id)initWithCpp:(const std::shared_ptr<Token> &)cppRef
{
    if (self = [super init]) {
        _cppRef = cppRef;
    }
    return self;
}

- (void)dealloc
{
    djinni::DbxCppWrapperCache<Token> & cache = djinni::DbxCppWrapperCache<Token>::getInstance();
    cache.remove(_cppRef);
}

+ (id)tokenWithCpp:(const std::shared_ptr<Token> &)cppRef
{
    djinni::DbxCppWrapperCache<Token> & cache = djinni::DbxCppWrapperCache<Token>::getInstance();
    return cache.get(cppRef, [] (const std::shared_ptr<Token> & p) { return [[DBTokenCppProxy alloc] initWithCpp:p]; });
}

@end