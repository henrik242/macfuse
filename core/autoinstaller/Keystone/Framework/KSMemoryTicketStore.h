//
//  KSMemoryTicketStore.h
//  Keystone
//
//  Created by Greg Miller on 7/7/08.
//  Copyright 2008 Google Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KSTicketStore.h"


// KSMemoryTicketStore
//
// This KSTicketStore subclass represents an in-memory, temporary ticket store
// that does not persist across invocations of the application. The tickets
// stored in this store are only stored as long as the KSMemoryTicketStore
// instance exists. This is simply a KSTicketStore that is backed by an
// in-memory NSDictionary rather than disk. The arg passed to -initWithPath:
// MUST be nil.
//
// Sample usage:
//
//   KSTicket *t = ...
//   KSTicketStore *ts = [[KSMemoryTicketStore alloc] init];
//   [ts storeTicket:t];        // [ts ticketCount] == 1
//   [ts storeDeleteTicket:t];  // [ts ticketCount] == 0
//   
@interface KSMemoryTicketStore : KSTicketStore {
 @private
  NSMutableDictionary *tickets_;
}

// No new methods added. See KSTicketStore.h for API.

@end
