#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Resources/ResourceTypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RESOURCES_RESOURCELOCATOR_CANCACHE_OFFSET UNITYSDK_OFFSET(0x1A814B40)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_GET_DATAPOSITION_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define SYSTEM_RESOURCES_RESOURCELOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x6E5850)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceLocator_TypeDefinitionIndex = 526;

	struct alignas(8) ResourceLocator
	{
		::System::Object* _value; // 0x10
		::System::Int32 _dataPos; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_DataPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_GET_DATAPOSITION_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_SET_VALUE_OFFSET))(this, a1);
		}

		static ::System::Boolean CanCache(::System::Resources::ResourceTypeCode a1)
		{
			return ((::System::Boolean(*)(::System::Resources::ResourceTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_CANCACHE_OFFSET))(a1);
		}
	};
}
