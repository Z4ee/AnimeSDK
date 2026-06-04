#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_1_OFFSET UNITYSDK_OFFSET(0x1B29C8A0)
#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET UNITYSDK_OFFSET(0x1B29C830)

namespace UnityEngine
{
	inline static constexpr unsigned int HashUnsafeUtilities_TypeDefinitionIndex = 4190;

	class HashUnsafeUtilities : public ::System::Object
	{
	public:
		static ::System::Void ComputeHash128(::System::Void* a1, ::System::UInt64 a2, ::System::UInt64* a3, ::System::UInt64* a4)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::System::UInt64*, ::System::UInt64*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ComputeHash128_1(::System::Void* a1, ::System::UInt64 a2, ::UnityEngine::Hash128* a3)
		{
			return ((::System::Void(*)(::System::Void*, ::System::UInt64, ::UnityEngine::Hash128*))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_1_OFFSET))(a1, a2, a3);
		}
	};
}
