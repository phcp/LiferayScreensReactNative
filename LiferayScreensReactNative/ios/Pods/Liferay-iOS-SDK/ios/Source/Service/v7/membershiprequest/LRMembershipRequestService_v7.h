/**
 * Copyright (c) 2000-present Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

#import "LRBaseService.h"

/**
 * @author Bruno Farache
 */
@interface LRMembershipRequestService_v7 : LRBaseService

- (NSDictionary *)addMembershipRequestWithGroupId:(long long)groupId comments:(NSString *)comments serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (void)updateStatusWithMembershipRequestId:(long long)membershipRequestId reviewComments:(NSString *)reviewComments statusId:(long long)statusId serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error CONVERT_ERROR_TO_THROWS;
- (void)deleteMembershipRequestsWithGroupId:(long long)groupId statusId:(long long)statusId error:(NSError **)error CONVERT_ERROR_TO_THROWS;
- (NSDictionary *)getMembershipRequestWithMembershipRequestId:(long long)membershipRequestId error:(NSError **)error;

@end