#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SDFSectorCoord.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SDFStreamingParams_TypeDefinitionIndex = 4252;

	class SDFStreamingParams : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::SDFSectorCoord>* canUnloadSectors; // 0x10
		::Il2CppArray<::UnityEngine::SDFSectorCoord>* requestLoadSectors; // 0x18
		::System::Int32 canUnloadSectorCount; // 0x20
		::System::Int32 requestLoadSectorCount; // 0x24
	};
}
