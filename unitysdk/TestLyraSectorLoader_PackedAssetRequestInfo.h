#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace LyraSector { class LyraPackedAsset; }

#define TESTLYRASECTORLOADER_PACKEDASSETREQUESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FC2A0)

inline static constexpr unsigned int TestLyraSectorLoader_PackedAssetRequestInfo_TypeDefinitionIndex = 26876;

class TestLyraSectorLoader_PackedAssetRequestInfo : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle handle; // 0x10
	::LyraSector::LyraPackedAsset* packedAsset; // 0x30
	::System::Int32 refCount; // 0x38
	::System::Boolean isDone; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_PACKEDASSETREQUESTINFO__CTOR_OFFSET))(this);
	}
};
