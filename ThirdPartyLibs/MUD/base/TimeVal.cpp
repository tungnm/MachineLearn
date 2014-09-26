/** 
 * Copyright 2013-2014 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * 
 * Licensed under the Amazon Software License (the "License"). You may not
 * use this file except in compliance with the License. A copy of the License
 *  is located at
 * 
 *       http://aws.amazon.com/asl/  
 *        
 * This Software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
 * CONDITIONS OF ANY KIND, express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 */

#include "TimeVal.h"

namespace mud
{

/**
 *  Time value class.
 */

/// Zero time value.
const TimeVal TimeVal::ZERO( (uint64_t) 0ULL );

/// Infinite time value.
const TimeVal TimeVal::INFIN( (uint64_t) 0xFFFFFFFFFFFFFFFFULL );

} //namespace mud
