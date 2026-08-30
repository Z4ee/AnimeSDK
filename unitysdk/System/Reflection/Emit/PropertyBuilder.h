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

#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETACCESSORS_OFFSET UNITYSDK_OFFSET(0x1CC1E960)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1CC1E9E0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CC1E9A0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1CC1EA20)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETINDEXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CC1E8D0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x1CC1EA60)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1CC1EAA0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CC1E6F0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1CC1E740)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1CC1E790)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1CC1E7E0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC1E830)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1CC1E880)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1CC1E920)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1CC1EAE0)
#define SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1CC1EB20)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int PropertyBuilder_TypeDefinitionIndex = 657;

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

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetAccessors(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETACCESSORS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Reflection::MethodInfo* GetGetMethod(::System::Boolean a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETGETMETHOD_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* GetSetMethod(::System::Boolean a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETSETMETHOD_OFFSET))(this, a1);
		}

		::System::Object* GetValue(::System::Object* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::Il2CppArray<::System::Object*>* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_GETVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2, ::System::Reflection::BindingFlags a3, ::System::Reflection::Binder* a4, ::Il2CppArray<::System::Object*>* a5, ::System::Globalization::CultureInfo* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_PROPERTYBUILDER_SETVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
