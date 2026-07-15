#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19165FB0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x191661A0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19164F40)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_MergedTypeDescriptor_TypeDefinitionIndex = 2634;

	class TypeDescriptor_MergedTypeDescriptor : public ::System::Object
	{
	public:
		::System::ComponentModel::ICustomTypeDescriptor* _secondary; // 0x10
		::System::ComponentModel::ICustomTypeDescriptor* _primary; // 0x18

		::System::Void _ctor(::System::ComponentModel::ICustomTypeDescriptor* a1, ::System::ComponentModel::ICustomTypeDescriptor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ICustomTypeDescriptor*, ::System::ComponentModel::ICustomTypeDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MERGEDTYPEDESCRIPTOR_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET))(this);
		}
	};
}
