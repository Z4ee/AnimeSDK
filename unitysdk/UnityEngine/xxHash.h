#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_XXHASH_COMPUTEHASH64_OFFSET UNITYSDK_OFFSET(0x1E494E10)
#define UNITYENGINE_XXHASH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E494E20)

namespace UnityEngine
{
	inline static constexpr unsigned int xxHash_TypeDefinitionIndex = 5282;

	class xxHash : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XXHASH__CTOR_OFFSET))(this);
		}

		static ::System::UInt64 ComputeHash64(::System::String* str)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_XXHASH_COMPUTEHASH64_OFFSET))(str);
		}
	};
}
