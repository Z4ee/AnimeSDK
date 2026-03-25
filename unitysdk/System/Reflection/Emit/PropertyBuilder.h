#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/Reflection/PropertyInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETACCESSORS_OFFSET UNITYSDK_OFFSET(0x16372880)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x16372900)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x163728C0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x16372940)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETINDEXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x163727F0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x16372980)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x163729C0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x16372610)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x16372660)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x163726B0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x16372700)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16372750)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x163727A0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x16372840)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x16372A00)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x16372A40)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int PropertyBuilder_TypeDefinitionIndex = 655;

	class PropertyBuilder : public ::System::Reflection::PropertyInfo
	{
	public:
		::System::Reflection::PropertyAttributes get_Attributes()
		{
			return ((::System::Reflection::PropertyAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANWRITE_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetIndexParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETINDEXPARAMETERS_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetAccessors(::System::Boolean nonPublic)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETACCESSORS_OFFSET))(this, nonPublic);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Reflection::MethodInfo* GetGetMethod(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETGETMETHOD_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* GetSetMethod(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETSETMETHOD_OFFSET))(this, nonPublic);
		}

		::System::Object* GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETVALUE_OFFSET))(this, obj, invokeAttr, binder, index, culture);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_SETVALUE_OFFSET))(this, obj, value, invokeAttr, binder, index, culture);
		}
	};
}
