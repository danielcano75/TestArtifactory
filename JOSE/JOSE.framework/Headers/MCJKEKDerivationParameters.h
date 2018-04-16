/*******************************************************************************
 * Copyright (c) 2016, MasterCard International Incorporated and/or its
 * affiliates. All rights reserved.
 *
 * TO THE EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS", WITHOUT
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NON INFRINGEMENT. TO THE EXTENT PERMITTED BY LAW, IN NO EVENT SHALL
 * MASTERCARD OR ITS AFFILIATES BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *******************************************************************************/

#import <Foundation/Foundation.h>
#import "MCJKeyEncryptionAlgorithm.h"

/**
 Comprises the parameters used for deriving Key Encryption Key (KEK).
 */
@protocol MCJKEKDerivationParameters <NSObject>

/**
 Gets the parameters used for KEK derivation.
 */
- (NSMutableDictionary *)getMap;

/**
 Gets the key derivation algorithm.
 */
- (MCJKeyEncryptionAlgorithm)getKekDerivationAlgorithm;

@end
