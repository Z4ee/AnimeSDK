#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Dynamic { class ExpandoClass; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GETALIGNEDSIZE_OFFSET UNITYSDK_OFFSET(0x17E1B040)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17E182B0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x17E19100)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x17E1AFB0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x17E18B00)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_UPDATECLASS_OFFSET UNITYSDK_OFFSET(0x17E19140)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E1B050)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E1B030)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17E1AFC0)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_ExpandoData_TypeDefinitionIndex = 3672;

	class ExpandoObject_ExpandoData : public ::System::Object
	{
	public:
		static ::System::Dynamic::ExpandoObject_ExpandoData** StaticGet_Empty()
		{
			return (::System::Dynamic::ExpandoObject_ExpandoData**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_ExpandoData_TypeDefinitionIndex)->GetStaticField(0x313B0);
		}
		::Il2CppArray<::System::Object*>* _dataArray; // 0x10
		::System::Dynamic::ExpandoClass* Class; // 0x18
		::System::Int32 _version; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Dynamic::ExpandoClass* a1, ::Il2CppArray<::System::Object*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Dynamic::ExpandoClass*, ::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA__CCTOR_OFFSET))();
		}

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_VERSION_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GET_LENGTH_OFFSET))(this);
		}

		::System::Dynamic::ExpandoObject_ExpandoData* UpdateClass(::System::Dynamic::ExpandoClass* a1)
		{
			return ((::System::Dynamic::ExpandoObject_ExpandoData*(*)(::PVOID, ::System::Dynamic::ExpandoClass*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_UPDATECLASS_OFFSET))(this, a1);
		}

		static ::System::Int32 GetAlignedSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDODATA_GETALIGNEDSIZE_OFFSET))(a1);
		}
	};
}
