/*****************************************************************************
* Copyright [2018-2019] [3fellows]
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*  http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*****************************************************************************/
#pragma once
#include "ctp_ext/CTPCommonField.h"
#include "mts_core/const.h"

// ��װ CTP �� struct���ѳ�����Ҫ�õĵ��ֶΰ�װ�ɷ�������
class CTPCancelOrderField:public CTPCommonField<CThostFtdcInputOrderActionField>
{
public:
	CTPCancelOrderField(const QString& brokerId, const QString& investorId, const QString& userId);
	virtual ~CTPCancelOrderField();

	void initFromOrder(const CThostFtdcOrderField& activeOrder);

private:	
	void setExchangeLevelId(const QString& exchangeId, const QString& orderSysId);
	void setThostLevelId(int frontId, int sessionId, const QString& orderRef);
};
