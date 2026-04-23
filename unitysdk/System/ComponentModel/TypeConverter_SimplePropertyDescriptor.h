#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1A0CEC60)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CEC20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeConverter_SimplePropertyDescriptor_TypeDefinitionIndex = 2620;

	class TypeConverter_SimplePropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor
	{
	public:
		::System::Type* propertyType; // 0x80
		::System::Type* componentType; // 0x88

		::System::Void _ctor(::System::Type* componentType, ::System::String* name, ::System::Type* propertyType, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, componentType, name, propertyType, attributes);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(this);
		}
	};
}
