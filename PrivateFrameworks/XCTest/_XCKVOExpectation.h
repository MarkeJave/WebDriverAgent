/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTWebDriverAgentLib/XCTestExpectation.h>

@class NSLock, NSString;

@interface _XCKVOExpectation : XCTestExpectation
{
    id _observedObject;
    NSString *_keyPath;
    id _expectedValue;
    CDUnknownBlockType _handler;
    _Bool _hasUnregistered;
    NSLock *_lock;
}

@property (atomic, assign) _Bool hasUnregistered; // @synthesize hasUnregistered=_hasUnregistered;
@property (atomic, copy) CDUnknownBlockType handler;
@property (atomic, retain) id expectedValue;
@property (atomic, copy) NSString *keyPath;
@property (atomic, retain) id observedObject;
- (void)dealloc;
- (void)cleanup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_safelyUnregister;
- (void)startObserving;
- (id)_initForTestCase:(id)arg1 withDescription:(id)arg2;

@end