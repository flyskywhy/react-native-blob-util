//
//  ReactNativeBlobUtil.h
//
//  Created by wkh237 on 2016/4/28.
//

//XXX: DO NO REMOVE THIS LINE IF YOU'RE USING IT ON RN > 0.40 PROJECT



#ifndef ReactNativeBlobUtil_h
#define ReactNativeBlobUtil_h


#if __has_include(<React/RCTAssert.h>)
#import <React/RCTLog.h>
#import <React/RCTRootView.h>
#import <React/RCTBridge.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#import "RCTLog.h"
#import "RCTRootView.h"
#import "RCTBridge.h"
#import "RCTEventDispatcher.h"
#endif

#import <UIKit/UIKit.h>

#if RCT_NEW_ARCH_ENABLED
#import <React-Codegen/ReactNativeBlobUtilSpec/ReactNativeBlobUtilSpec.h>
#endif


@interface ReactNativeBlobUtil : NSObject <RCTBridgeModule, UIDocumentInteractionControllerDelegate> {

    NSString * filePathPrefix;

}

@property (nonatomic) NSString * filePathPrefix;
@property (retain) UIDocumentInteractionController * documentController;

+ (RCTEventDispatcher *)getRCTEventDispatcher;

@end

#if RCT_NEW_ARCH_ENABLED
@interface ReactNativeBlobUtil () <NativeBlobUtilsSpec>
@end
#endif

#endif /* ReactNativeBlobUtil_h */
