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

#define SYSTEM_REFLECTION_MONOFIELD_CHECKGENERIC_OFFSET UNITYSDK_OFFSET(0x16379DF0)
#define SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x1637A160)
#define SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x16379BA0)
#define SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x16379B90)
#define SYSTEM_REFLECTION_MONOFIELD_GETFIELDOFFSET_OFFSET UNITYSDK_OFFSET(0x16379BB0)
#define SYSTEM_REFLECTION_MONOFIELD_GETPARENTTYPE_OFFSET UNITYSDK_OFFSET(0x16379B10)
#define SYSTEM_REFLECTION_MONOFIELD_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x1637A150)
#define SYSTEM_REFLECTION_MONOFIELD_GETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16379BE0)
#define SYSTEM_REFLECTION_MONOFIELD_GETVALUE_OFFSET UNITYSDK_OFFSET(0x16379C20)
#define SYSTEM_REFLECTION_MONOFIELD_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x16379AD0)
#define SYSTEM_REFLECTION_MONOFIELD_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x16379B50)
#define SYSTEM_REFLECTION_MONOFIELD_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x16379AE0)
#define SYSTEM_REFLECTION_MONOFIELD_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x16379B00)
#define SYSTEM_REFLECTION_MONOFIELD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16379B70)
#define SYSTEM_REFLECTION_MONOFIELD_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x16379B40)
#define SYSTEM_REFLECTION_MONOFIELD_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x16379B80)
#define SYSTEM_REFLECTION_MONOFIELD_RESOLVETYPE_OFFSET UNITYSDK_OFFSET(0x16379AF0)
#define SYSTEM_REFLECTION_MONOFIELD_SETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16379EB0)
#define SYSTEM_REFLECTION_MONOFIELD_SETVALUE_OFFSET UNITYSDK_OFFSET(0x16379EC0)
#define SYSTEM_REFLECTION_MONOFIELD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16379E60)
#define SYSTEM_REFLECTION_MONOFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1637A1E0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoField_TypeDefinitionIndex = 617;

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

		::System::Type* GetParentType(::System::Boolean declaring)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETPARENTTYPE_OFFSET))(this, declaring);
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

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Int32 GetFieldOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETFIELDOFFSET_OFFSET))(this);
		}

		::System::Object* GetValueInternal(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETVALUEINTERNAL_OFFSET))(this, obj);
		}

		::System::Object* GetValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_GETVALUE_OFFSET))(this, obj);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_TOSTRING_OFFSET))(this);
		}

		static ::System::Void SetValueInternal(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_SETVALUEINTERNAL_OFFSET))(fi, obj, value);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_SETVALUE_OFFSET))(this, obj, val, invokeAttr, binder, culture);
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
