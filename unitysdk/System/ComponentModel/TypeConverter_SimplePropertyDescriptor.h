#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1AF36E80)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF36E40)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeConverter_SimplePropertyDescriptor_TypeDefinitionIndex = 2620;

	class TypeConverter_SimplePropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor
	{
	public:
		::System::Type* componentType; // 0x80
		::System::Type* propertyType; // 0x88

		::System::Void _ctor(::System::Type* a1, ::System::String* a2, ::System::Type* a3, ::Il2CppArray<::System::Attribute*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(this);
		}
	};
}
