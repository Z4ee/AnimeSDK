#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AF27A00)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1AF27AD0)
#define SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF279F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CustomTypeDescriptor_TypeDefinitionIndex = 2562;

	class CustomTypeDescriptor : public ::System::Object
	{
	public:
		::System::ComponentModel::ICustomTypeDescriptor* _parent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR__CTOR_OFFSET))(this);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* GetConverter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET))(this);
		}
	};
}
