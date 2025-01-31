//
//  TuyaSmartHomeAddMemberRequestModel.h
//  TuyaSmartDeviceKit
//
//  Created by Hemin Won on 2020/2/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TuyaSmartHomeAddMemberRequestModel : NSObject

/** 为受邀请者设置的昵称  Member name */
@property (nonatomic, copy) NSString *name;

/** 受邀请账号 Invited account */
@property (nonatomic, copy) NSString *account;

/** 受邀请者账号对应国家码 Country code */
@property (nonatomic, copy) NSString *countryCode;

/**
 * 成员角色 请正确设置你想设置的角色类型。
 * role，Please set the type of role you want to set.
 */
@property (nonatomic, assign) TYHomeRoleType role;

/** 为受邀请者设置的头像 nil时使用受邀请者个人头像 Head portraits of members Can be nil */
@property (nonatomic, strong) UIImage *headPic;

/**
 * 是否需要受邀请者同意接受邀请 YES-受邀请账号自动接受该家庭邀请，无需受邀请者确认 NO-需要受邀请者同意后才可加入该家庭
 * Is it necessary for the invitee to agree to accept the invitation? YES-The invited account automatically accepts the family invitation. No-need for the invitee to confirm.
 */
@property (nonatomic, assign) BOOL autoAccept;

@end

@interface TuyaSmartHomeInvitationCreateRequestModel : NSObject

/// 家庭 ID home ID
@property (nonatomic, assign) long long homeID;

/// 是否需要邀请文案信息 whether need invitation message
@property (nonatomic, assign) BOOL needMsgContent;

@end

@interface TuyaSmartHomeInvitationReinviteRequestModel : NSObject

/// 邀请 ID invitation ID
@property (nonatomic, strong) NSNumber *invitationID;

/// 是否需要邀请文案信息 whether need invitation message
@property (nonatomic, assign) BOOL needMsgContent;

@end

@interface TuyaSmartHomeInvitationInfoRequestModel : NSObject

/// 邀请 ID invitation ID
@property (nonatomic, strong) NSNumber *invitationID;

/// 邀请备注名 invitation name
@property (nonatomic, copy) NSString *name;

@end

@interface TuyaSmartHomeInvitationResultModel : NSObject

/// 邀请文案信息 invitation message
@property (nonatomic, copy) NSString *invitationMsgContent;

/// 邀请码 invitation code
@property (nonatomic, copy) NSString *invitationCode;

@end


@interface TuyaSmartHomeInvitationRecordModel : NSObject;

/// 邀请码有效时间 单位:小时 invitation code valid time. unit:hour
@property (nonatomic, assign) NSInteger validTime;

/// 邀请 ID invitation ID
@property (nonatomic, strong) NSNumber *invitationID;

/// 邀请码 invitation code
@property (nonatomic, copy) NSString *invitationCode;

/// 邀请备注名 invitation name
@property (nonatomic, copy) NSString *name;

@end
NS_ASSUME_NONNULL_END

