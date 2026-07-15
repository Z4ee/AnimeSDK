#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/Reflection/RtFieldInfo.h"
#include "unitysdk/System/RuntimeFieldHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_REFLECTION_MONOFIELD_CHECKGENERIC_OFFSET UNITYSDK_OFFSET(0x1AFD5E10)
#define SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x1AFD62E0)
#define SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1AFD5B00)
#define SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AFD5AF0)
#define SYSTEM_REFLECTION_MONOFIELD_GETFIELDOFFSET_OFFSET UNITYSDK_OFFSET(0x1AFD5B10)
#define SYSTEM_REFLECTION_MONOFIELD_GETPARENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFD5A70)
#define SYSTEM_REFLECTION_MONOFIELD_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x1AFD62D0)
#define SYSTEM_REFLECTION_MONOFIELD_GETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFD5B40)
#define SYSTEM_REFLECTION_MONOFIELD_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1AFD5B80)
#define SYSTEM_REFLECTION_MONOFIELD_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AFD5A30)
#define SYSTEM_REFLECTION_MONOFIELD_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1AFD5AB0)
#define SYSTEM_REFLECTION_MONOFIELD_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x1AFD5A40)
#define SYSTEM_REFLECTION_MONOFIELD_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x1AFD5A60)
#define SYSTEM_REFLECTION_MONOFIELD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AFD5AD0)
#define SYSTEM_REFLECTION_MONOFIELD_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1AFD5AA0)
#define SYSTEM_REFLECTION_MONOFIELD_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1AFD5AE0)
#define SYSTEM_REFLECTION_MONOFIELD_RESOLVETYPE_OFFSET UNITYSDK_OFFSET(0x1AFD5A50)
#define SYSTEM_REFLECTION_MONOFIELD_SETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFD5F30)
#define SYSTEM_REFLECTION_MONOFIELD_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1AFD5F40)
#define SYSTEM_REFLECTION_MONOFIELD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFD5EE0)
#define SYSTEM_REFLECTION_MONOFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6360)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoField_TypeDefinitionIndex = 616;

	class MonoField : public ::System::Reflection::RtFieldInfo
	{
	public:
		::System::IntPtr klass; // 0x10
		::System::RuntimeFieldHandle fhandle; // 0x18
		::System::String* name; // 0x20
		::System::Type* type; // 0x28
		::System::Reflection::FieldAttributes attrs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD__CTOR_OFFSET))(this);
		}

		::System::Reflection::FieldAttributes get_Attributes()
		{
			return ((::System::Reflection::FieldAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::RuntimeFieldHandle get_FieldHandle()
		{
			return ((::System::RuntimeFieldHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GET_FIELDHANDLE_OFFSET))(this);
		}

		::System::Type* ResolveType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_RESOLVETYPE_OFFSET))(this);
		}

		::System::Type* get_FieldType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GET_FIELDTYPE_OFFSET))(this);
		}

		::System::Type* GetParentType(::System::Boolean a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETPARENTTYPE_OFFSET))(this, a1);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GET_NAME_OFFSET))(this);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetFieldOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETFIELDOFFSET_OFFSET))(this);
		}

		::System::Object* GetValueInternal(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETVALUEINTERNAL_OFFSET))(this, a1);
		}

		::System::Object* GetValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETVALUE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_TOSTRING_OFFSET))(this);
		}

		static ::System::Void SetValueInternal(::System::Reflection::FieldInfo* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_SETVALUEINTERNAL_OFFSET))(a1, a2, a3);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2, ::System::Reflection::BindingFlags a3, ::System::Reflection::Binder* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_SETVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* GetRawConstantValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETRAWCONSTANTVALUE_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTESDATA_OFFSET))(this);
		}

		::System::Void CheckGeneric()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_CHECKGENERIC_OFFSET))(this);
		}
	};
}
