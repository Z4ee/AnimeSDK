#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class TypeFilter; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MODULE_CREATENIE_OFFSET UNITYSDK_OFFSET(0x187568F0)
#define SYSTEM_REFLECTION_MODULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18756860)
#define SYSTEM_REFLECTION_MODULE_FILTER_BY_TYPE_NAME_IGNORE_CASE_OFFSET UNITYSDK_OFFSET(0x187567A0)
#define SYSTEM_REFLECTION_MODULE_FILTER_BY_TYPE_NAME_OFFSET UNITYSDK_OFFSET(0x18756680)
#define SYSTEM_REFLECTION_MODULE_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x18756A90)
#define SYSTEM_REFLECTION_MODULE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18756A50)
#define SYSTEM_REFLECTION_MODULE_GETGUIDINTERNAL_OFFSET UNITYSDK_OFFSET(0x18756660)
#define SYSTEM_REFLECTION_MODULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18756870)
#define SYSTEM_REFLECTION_MODULE_GETMODULEVERSIONID_OFFSET UNITYSDK_OFFSET(0x18756620)
#define SYSTEM_REFLECTION_MODULE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x187565C0)
#define SYSTEM_REFLECTION_MODULE_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x187568B0)
#define SYSTEM_REFLECTION_MODULE_GET_MODULEVERSIONID_OFFSET UNITYSDK_OFFSET(0x187569D0)
#define SYSTEM_REFLECTION_MODULE_GET_SCOPENAME_OFFSET UNITYSDK_OFFSET(0x18756990)
#define SYSTEM_REFLECTION_MODULE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x18756AD0)
#define SYSTEM_REFLECTION_MODULE_ISRESOURCE_OFFSET UNITYSDK_OFFSET(0x18756A10)
#define SYSTEM_REFLECTION_MODULE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18756880)
#define SYSTEM_REFLECTION_MODULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18756610)
#define SYSTEM_REFLECTION_MODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18756B10)
#define SYSTEM_REFLECTION_MODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x187565B0)

namespace System::Reflection
{
	inline static constexpr unsigned int Module_TypeDefinitionIndex = 607;

	class Module : public ::System::Object
	{
	public:
		static ::System::Reflection::TypeFilter** StaticGet_FilterTypeNameIgnoreCase()
		{
			return (::System::Reflection::TypeFilter**)Il2CppClass::FromTypeDefinitionIndex(Module_TypeDefinitionIndex)->GetStaticField(0x9AB0);
		}
		static ::System::Reflection::TypeFilter** StaticGet_FilterTypeName()
		{
			return (::System::Reflection::TypeFilter**)Il2CppClass::FromTypeDefinitionIndex(Module_TypeDefinitionIndex)->GetStaticField(0x9AB8);
		}
		// static const ::System::Reflection::BindingFlags defaultBindingFlags; // 0x0
		::System::IntPtr _impl; // 0x10
		::System::Reflection::Assembly* assembly; // 0x18
		::System::String* fqname; // 0x20
		::System::String* name; // 0x28
		::System::String* scopename; // 0x30
		::System::Boolean is_resource; // 0x38
		::System::Int32 token; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE__CCTOR_OFFSET))();
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_TOSTRING_OFFSET))(this);
		}

		::System::Guid GetModuleVersionId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETMODULEVERSIONID_OFFSET))(this);
		}

		static ::System::Boolean filter_by_type_name(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_FILTER_BY_TYPE_NAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean filter_by_type_name_ignore_case(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_FILTER_BY_TYPE_NAME_IGNORE_CASE_OFFSET))(a1, a2);
		}

		::System::String* GetGuidInternal()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETGUIDINTERNAL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::Module* a1, ::System::Reflection::Module* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::Module*, ::System::Reflection::Module*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Reflection::Assembly* get_Assembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GET_ASSEMBLY_OFFSET))(this);
		}

		::System::String* get_ScopeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GET_SCOPENAME_OFFSET))(this);
		}

		::System::Guid get_ModuleVersionId()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GET_MODULEVERSIONID_OFFSET))(this);
		}

		static ::System::Exception* CreateNIE()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_CREATENIE_OFFSET))();
		}

		::System::Boolean IsResource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_ISRESOURCE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_ISDEFINED_OFFSET))(this, a1, a2);
		}
	};
}
