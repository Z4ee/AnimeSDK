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
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeFieldInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x18340CD0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18340C40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x18340EA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18341340)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x18340B20)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x183412B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x183412A0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x18340E10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x18340A40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x18340A00)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18340B10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x18340BB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALGETVALUE_OFFSET UNITYSDK_OFFSET(0x18340F40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALSETVALUE_OFFSET UNITYSDK_OFFSET(0x18341110)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x18340D70)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18341040)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18340A60)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationFieldInfo_TypeDefinitionIndex = 1122;

	class SerializationFieldInfo : public ::System::Reflection::FieldInfo
	{
	public:
		::System::Reflection::RuntimeFieldInfo* m_field; // 0x10
		::System::String* m_serializationName; // 0x18

		::System::Void _ctor(::System::Reflection::RuntimeFieldInfo* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::RuntimeFieldInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_MODULE_OFFSET))(this);
		}

		::System::Int32 get_MetadataToken()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_METADATATOKEN_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::System::Type* get_FieldType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDTYPE_OFFSET))(this);
		}

		::System::Object* GetValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETVALUE_OFFSET))(this, a1);
		}

		::System::Object* InternalGetValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALGETVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2, ::System::Reflection::BindingFlags a3, ::System::Reflection::Binder* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_SETVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void InternalSetValue(::System::Object* a1, ::System::Object* a2, ::System::Reflection::BindingFlags a3, ::System::Reflection::Binder* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALSETVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Reflection::RuntimeFieldInfo* get_FieldInfo()
		{
			return ((::System::Reflection::RuntimeFieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDINFO_OFFSET))(this);
		}

		::System::RuntimeFieldHandle get_FieldHandle()
		{
			return ((::System::RuntimeFieldHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDHANDLE_OFFSET))(this);
		}

		::System::Reflection::FieldAttributes get_Attributes()
		{
			return ((::System::Reflection::FieldAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_ATTRIBUTES_OFFSET))(this);
		}
	};
}
