#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The "Icon" asset catalog image resource.
static NSString * const ACImageNameIcon AC_SWIFT_PRIVATE = @"Icon";

/// The "TouchID" asset catalog image resource.
static NSString * const ACImageNameTouchID AC_SWIFT_PRIVATE = @"TouchID";

/// The "hide" asset catalog image resource.
static NSString * const ACImageNameHide AC_SWIFT_PRIVATE = @"hide";

/// The "iphone" asset catalog image resource.
static NSString * const ACImageNameIphone AC_SWIFT_PRIVATE = @"iphone";

/// The "menu" asset catalog image resource.
static NSString * const ACImageNameMenu AC_SWIFT_PRIVATE = @"menu";

/// The "show" asset catalog image resource.
static NSString * const ACImageNameShow AC_SWIFT_PRIVATE = @"show";

#undef AC_SWIFT_PRIVATE