#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/DataObjectMethodType.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19EE6320)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19EE6390)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x19EE6300)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_METHODTYPE_OFFSET UNITYSDK_OFFSET(0x19EE6310)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_MATCH_OFFSET UNITYSDK_OFFSET(0x19EE63A0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EE62F0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE62E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataObjectMethodAttribute_TypeDefinitionIndex = 2853;

	class DataObjectMethodAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _isDefault; // 0x10
		::System::ComponentModel::DataObjectMethodType _methodType; // 0x14

		::System::Void _ctor(::System::ComponentModel::DataObjectMethodType methodType)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DataObjectMethodType))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE__CTOR_OFFSET))(this, methodType);
		}

		::System::Void _ctor_1(::System::ComponentModel::DataObjectMethodType methodType, ::System::Boolean isDefault)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::DataObjectMethodType, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE__CTOR_1_OFFSET))(this, methodType, isDefault);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::ComponentModel::DataObjectMethodType get_MethodType()
		{
			return ((::System::ComponentModel::DataObjectMethodType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_METHODTYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Match(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_MATCH_OFFSET))(this, obj);
		}
	};
}
