#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class ExpandoClass; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GETALIGNEDSIZE_OFFSET UNITYSDK_OFFSET(0x1847F630)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1847C9C0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1847D7F0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1847F5A0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1847D280)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_UPDATECLASS_OFFSET UNITYSDK_OFFSET(0x1847D830)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1847F640)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1847F620)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1847F5B0)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_ExpandoData_TypeDefinitionIndex = 3665;

	class ExpandoObject_ExpandoData : public ::System::Object
	{
	public:
		static ::System::Dynamic::ExpandoObject_ExpandoData** StaticGet_Empty()
		{
			return (::System::Dynamic::ExpandoObject_ExpandoData**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_ExpandoData_TypeDefinitionIndex)->GetStaticField(0xE290);
		}
		::Il2CppArray<::System::Object*>* _dataArray; // 0x10
		::System::Dynamic::ExpandoClass* Class; // 0x18
		::System::Int32 _version; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Dynamic::ExpandoClass* klass, ::Il2CppArray<::System::Object*>* data, ::System::Int32 version)
		{
			return ((::System::Void(*)(::PVOID, ::System::Dynamic::ExpandoClass*, ::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CTOR_1_OFFSET))(this, klass, data, version);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CCTOR_OFFSET))();
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_VERSION_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_LENGTH_OFFSET))(this);
		}

		::System::Dynamic::ExpandoObject_ExpandoData* UpdateClass(::System::Dynamic::ExpandoClass* newClass)
		{
			return ((::System::Dynamic::ExpandoObject_ExpandoData*(*)(::PVOID, ::System::Dynamic::ExpandoClass*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_UPDATECLASS_OFFSET))(this, newClass);
		}

		static ::System::Int32 GetAlignedSize(::System::Int32 len)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GETALIGNEDSIZE_OFFSET))(len);
		}
	};
}
