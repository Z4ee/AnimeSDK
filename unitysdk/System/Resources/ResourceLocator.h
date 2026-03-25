#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Resources/ResourceTypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RESOURCES_RESOURCELOCATOR_CANCACHE_OFFSET UNITYSDK_OFFSET(0x163865C0)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_GET_DATAPOSITION_OFFSET UNITYSDK_OFFSET(0xD250)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_RESOURCES_RESOURCELOCATOR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xBDD0)
#define SYSTEM_RESOURCES_RESOURCELOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1594CC0)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceLocator_TypeDefinitionIndex = 527;

	struct alignas(8) ResourceLocator
	{
		::System::Object* _value; // 0x10
		::System::Int32 _dataPos; // 0x18

		::System::Void _ctor(::System::Int32 dataPos, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR__CTOR_OFFSET))(this, dataPos, value);
		}

		::System::Int32 get_DataPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_GET_DATAPOSITION_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_SET_VALUE_OFFSET))(this, value);
		}

		static ::System::Boolean CanCache(::System::Resources::ResourceTypeCode value)
		{
			return ((::System::Boolean(*)(::System::Resources::ResourceTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_CANCACHE_OFFSET))(value);
		}
	};
}
