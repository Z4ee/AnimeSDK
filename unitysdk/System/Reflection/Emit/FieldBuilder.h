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

#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1874E910)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1874E8D0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1874E800)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1874E6C0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1874E710)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x1874E850)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x1874E760)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1874E7B0)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1874E890)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1874E950)
#define SYSTEM_REFLECTION_EMIT_FIELDBUILDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1874E990)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int FieldBuilder_TypeDefinitionIndex = 642;

	class FieldBuilder : public ::System::Reflection::FieldInfo
	{
	public:
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

		::System::Object* GetValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETVALUE_OFFSET))(this, a1);
		}

		::System::RuntimeFieldHandle get_FieldHandle()
		{
			return ((::System::RuntimeFieldHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_FIELDHANDLE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2, ::System::Reflection::BindingFlags a3, ::System::Reflection::Binder* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_FIELDBUILDER_SETVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
