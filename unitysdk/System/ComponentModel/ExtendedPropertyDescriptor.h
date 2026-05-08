#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class IExtenderProvider; }
namespace System::ComponentModel { class ReflectPropertyDescriptor; }

#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x1AA94E70)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1AA95270)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AA94EA0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1AA94FD0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AA94ED0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1AA94FA0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1AA952A0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1AA952D0)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1AA95310)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA94D80)
#define SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA94B60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ExtendedPropertyDescriptor_TypeDefinitionIndex = 2883;

	class ExtendedPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor
	{
	public:
		::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo; // 0x88
		::System::ComponentModel::IExtenderProvider* provider; // 0x90

		::System::Void _ctor(::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo, ::System::Type* receiverType, ::System::ComponentModel::IExtenderProvider* provider, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ReflectPropertyDescriptor*, ::System::Type*, ::System::ComponentModel::IExtenderProvider*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, extenderInfo, receiverType, provider, attributes);
		}

		::System::Void _ctor_1(::System::ComponentModel::PropertyDescriptor* extender, ::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyDescriptor*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR__CTOR_1_OFFSET))(this, extender, attributes);
		}

		::System::Boolean CanResetValue(::System::Object* comp)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(this, comp);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Object* GetValue(::System::Object* comp)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(this, comp);
		}

		::System::Void ResetValue(::System::Object* comp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(this, comp);
		}

		::System::Void SetValue(::System::Object* component, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(this, component, value);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* comp)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXTENDEDPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(this, comp);
		}
	};
}
