#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraPackedAssetUtils_PackedAssetKey.h"
#include "unitysdk/UnityEngine/Rendering/SerializedDictionary_2.h"

namespace LyraSector { class LyraPackedAsset; }

#define TESTLYRASECTORLOADER_KEYTOPACKEDASSETDICT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB6C0)

inline static constexpr unsigned int TestLyraSectorLoader_KeyToPackedAssetDict_TypeDefinitionIndex = 27870;

class TestLyraSectorLoader_KeyToPackedAssetDict : public ::UnityEngine::Rendering::SerializedDictionary_2<::LyraSector::LyraPackedAssetUtils_PackedAssetKey, ::LyraSector::LyraPackedAsset*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_KEYTOPACKEDASSETDICT__CTOR_OFFSET))(this);
	}
};
