#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace LyraSector { class LyraPackedAsset; }

#define TESTLYRASECTORLOADER_PACKEDASSETREQUESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFED40)

inline static constexpr unsigned int TestLyraSectorLoader_PackedAssetRequestInfo_TypeDefinitionIndex = 29565;

class TestLyraSectorLoader_PackedAssetRequestInfo : public ::System::Object
{
public:
	::LyraSector::LyraPackedAsset* packedAsset; // 0x10
	::Foundation::AssetRequestHandle handle; // 0x18
	::System::Boolean isDone; // 0x38
	::System::Int32 refCount; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_PACKEDASSETREQUESTINFO__CTOR_OFFSET))(this);
	}
};
