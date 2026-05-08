#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x19A4EEE0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x19A4EDE0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19A4EDF0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x19A4EED0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x19A4EFF0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x19A4F0D0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A4EDA0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A4ED30)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeConverter_SimplePropertyDescriptor_TypeDefinitionIndex = 2989;

	class TypeConverter_SimplePropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor
	{
	public:
		::System::Type* componentType; // 0x88
		::System::Type* propertyType; // 0x90

		::System::Void _ctor(::System::Type* componentType, ::System::String* name, ::System::Type* propertyType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, componentType, name, propertyType);
		}

		::System::Void _ctor_1(::System::Type* componentType, ::System::String* name, ::System::Type* propertyType, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR__CTOR_1_OFFSET))(this, componentType, name, propertyType, attributes);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Boolean CanResetValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(this, component);
		}

		::System::Void ResetValue(::System::Object* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(this, component);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTER_SIMPLEPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(this, component);
		}
	};
}
