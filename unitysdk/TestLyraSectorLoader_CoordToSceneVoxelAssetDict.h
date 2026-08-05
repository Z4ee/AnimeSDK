#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/UnityEngine/Rendering/SerializedDictionary_2.h"

namespace LyraSector { class LyraSceneVoxelAsset; }

#define TESTLYRASECTORLOADER_COORDTOSCENEVOXELASSETDICT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB680)

inline static constexpr unsigned int TestLyraSectorLoader_CoordToSceneVoxelAssetDict_TypeDefinitionIndex = 27869;

class TestLyraSectorLoader_CoordToSceneVoxelAssetDict : public ::UnityEngine::Rendering::SerializedDictionary_2<::LyraSector::LyraSectorCoord, ::LyraSector::LyraSceneVoxelAsset*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_COORDTOSCENEVOXELASSETDICT__CTOR_OFFSET))(this);
	}
};
