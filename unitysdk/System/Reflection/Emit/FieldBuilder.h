#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/Reflection/FieldInfo.h"
#include "unitysdk/System/RuntimeFieldHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }

#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1BA24EA0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BA24E60)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1BA24D80)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BA24C40)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BA24C90)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BA24DE0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x1BA24CE0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BA24D30)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BA24E20)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1BA24EE0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1BA24F20)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA24DD0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int FieldBuilder_TypeDefinitionIndex = 614;

	class FieldBuilder : public ::System::Reflection::FieldInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER__CTOR_OFFSET))(this);
		}

		::System::Reflection::FieldAttributes get_Attributes()
		{
			return ((::System::Reflection::FieldAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Type* get_FieldType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_NAME_OFFSET))(this);
		}

		::System::Object* GetValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETVALUE_OFFSET))(this, obj);
		}

		::System::RuntimeFieldHandle get_FieldHandle()
		{
			return ((::System::RuntimeFieldHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDHANDLE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_SETVALUE_OFFSET))(this, obj, val, invokeAttr, binder, culture);
		}
	};
}
