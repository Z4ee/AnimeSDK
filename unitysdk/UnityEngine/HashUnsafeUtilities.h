#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_1_OFFSET UNITYSDK_OFFSET(0x1B2D9540)
#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET UNITYSDK_OFFSET(0x1B2D94D0)

namespace UnityEngine
{
	inline static constexpr unsigned int HashUnsafeUtilities_TypeDefinitionIndex = 5279;

	class HashUnsafeUtilities : public ::System::Object
	{
	public:
		static ::System::Void ComputeHash128(::System::Void* data, ::System::UInt64 dataSize, ::System::UInt64* hash1, ::System::UInt64* hash2)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::System::UInt64*, ::System::UInt64*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET))(data, dataSize, hash1, hash2);
		}

		static ::System::Void ComputeHash128_1(::System::Void* data, ::System::UInt64 dataSize, ::UnityEngine::Hash128* hash)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::UnityEngine::Hash128*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_1_OFFSET))(data, dataSize, hash);
		}
	};
}
