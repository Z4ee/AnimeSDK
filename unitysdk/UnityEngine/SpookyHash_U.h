#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_SPOOKYHASH_U__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace UnityEngine
{
	inline static constexpr unsigned int SpookyHash_U_TypeDefinitionIndex = 4207;

	struct alignas(8) SpookyHash_U
	{
		::System::UInt16* p8; // 0x10
		::System::UInt32* p32; // 0x10
		::System::UInt64* p64; // 0x10
		::System::UInt64 i; // 0x10

		::System::Void _ctor(::System::UInt16* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPOOKYHASH_U__CTOR_OFFSET))(this, a1);
		}
	};
}
