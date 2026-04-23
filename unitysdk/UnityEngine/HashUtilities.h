#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

#define UNITYENGINE_HASHUTILITIES_APPENDHASH_OFFSET UNITYSDK_OFFSET(0x1A44B600)

namespace UnityEngine
{
	inline static constexpr unsigned int HashUtilities_TypeDefinitionIndex = 4015;

	class HashUtilities : public ::System::Object
	{
	public:
		static ::System::Void AppendHash(::UnityEngine::Hash128& inHash, ::UnityEngine::Hash128& outHash)
		{
			return ((::System::Void(*)(::UnityEngine::Hash128&, ::UnityEngine::Hash128&))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUTILITIES_APPENDHASH_OFFSET))(inHash, outHash);
		}
	};
}
