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

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x163F3C40)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x163F3C10)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x163F3CD0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x163F3EE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x163F3BB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x163F3EB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDINFO_OFFSET UNITYSDK_OFFSET(0x163F3EA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x163F3CA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x163F3B30)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x163F3AC0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x163F3BA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x163F3BE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALGETVALUE_OFFSET UNITYSDK_OFFSET(0x163F3D00)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALSETVALUE_OFFSET UNITYSDK_OFFSET(0x163F3DE0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x163F3C70)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x163F3DA0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x163F3B50)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationFieldInfo_TypeDefinitionIndex = 1119;

	class SerializationFieldInfo : public ::System::Reflection::FieldInfo
	{
	public:
		::System::Reflection::RuntimeFieldInfo* m_field; // 0x10
		::System::String* m_serializationName; // 0x18

		::System::Void _ctor(::System::Reflection::RuntimeFieldInfo* field, ::System::String* namePrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::RuntimeFieldInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO__CTOR_OFFSET))(this, field, namePrefix);
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

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::System::Type* get_FieldType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GET_FIELDTYPE_OFFSET))(this);
		}

		::System::Object* GetValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_GETVALUE_OFFSET))(this, obj);
		}

		::System::Object* InternalGetValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALGETVALUE_OFFSET))(this, obj);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_SETVALUE_OFFSET))(this, obj, value, invokeAttr, binder, culture);
		}

		::System::Void InternalSetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONFIELDINFO_INTERNALSETVALUE_OFFSET))(this, obj, value, invokeAttr, binder, culture);
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
