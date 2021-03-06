//
//  FNGetBiSettingModel.h
//  FNMerchant
//
//  Created by 张苏亚 on 16/6/20.
//  Copyright © 2016年 suya. All rights reserved.
//
#import <MTLModel.h>
#import <MTLJSONAdapter.h>

@interface FNGetBiSettingModel : MTLModel<MTLJSONSerializing>

@property (nonatomic,strong) NSArray *dataList;

@end


@interface FNBiSettingModel : MTLModel<MTLJSONSerializing>

@property (nonatomic,copy) NSString *code;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,strong) NSNumber *isVisible;
@property (nonatomic,assign) NSInteger requestCount;
@end
