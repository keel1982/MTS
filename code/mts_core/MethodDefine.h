
/*****************************************************************************
* Copyright [2017-2019] [MTSQuant]
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
#include <QtCore/QJsonObject>

#define MemberMethodDefine(Type,name,setName)	public:\
				const Type& name() const{return _##name;};\
				void setName(const Type& t){_##name=t;}\
				const char* name##FieldName() const {return #name;} \
			private:\
				Type _##name;

#define MemberCopyMethodDefine(Type,name,setName)	public:\
				Type name() const{return _##name;};\
				void setName(const Type& t){_##name=t;}\
				const char* name##FieldName() const {return #name;} \
				void name##ToJson(QJsonObject& jsonObj) const {jsonObj.insert(#name,_##name);} \
			private:\
				Type _##name;
