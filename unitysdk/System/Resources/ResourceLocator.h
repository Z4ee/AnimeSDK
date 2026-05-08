#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Resources/ResourceTypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RESOURCES_RESOURCELOCATOR_CANCACHE_OFFSET UNITYSDK_OFFSET(0x18C62950)
#define SYSTEM_RESOURCES_RESOURCELOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x34C180)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceLocator_TypeDefinitionIndex = 514;

	struct alignas(8) ResourceLocator
	{
		::System::Object* _value; // 0x10
		::System::Int32 _dataPos; // 0x18

		::System::Void _ctor(::System::Int32 dataPos, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR__CTOR_OFFSET))(this, dataPos, value);
		}

		static ::System::Boolean CanCache(::System::Resources::ResourceTypeCode value)
		{
			return ((::System::Boolean(*)(::System::Resources::ResourceTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCELOCATOR_CANCACHE_OFFSET))(value);
		}
	};
}
