#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SDFSectorCoord.h"

#define UNITYENGINE_SDFUTILS_GETSECTORCOORDHASH_OFFSET UNITYSDK_OFFSET(0x1A483750)

namespace UnityEngine
{
	inline static constexpr unsigned int SDFUtils_TypeDefinitionIndex = 4075;

	class SDFUtils : public ::System::Object
	{
	public:
		static ::System::UInt64 GetSectorCoordHash(::UnityEngine::SDFSectorCoord& coord)
		{
			return ((::System::UInt64(*)(::UnityEngine::SDFSectorCoord&))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFUTILS_GETSECTORCOORDHASH_OFFSET))(coord);
		}
	};
}
