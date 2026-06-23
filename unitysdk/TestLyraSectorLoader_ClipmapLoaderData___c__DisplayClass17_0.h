#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class TestLyraSectorLoader_PackedAssetRequestInfo;
namespace UnityEngine { class Object; }

#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C141840)
#define TESTLYRASECTORLOADER_CLIPMAPLOADERDATA___C__DISPLAYCLASS17_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1C141850)

inline static constexpr unsigned int TestLyraSectorLoader_ClipmapLoaderData___c__DisplayClass17_0_TypeDefinitionIndex = 26872;

class TestLyraSectorLoader_ClipmapLoaderData___c__DisplayClass17_0 : public ::System::Object
{
public:
	::TestLyraSectorLoader_PackedAssetRequestInfo* requestInfo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::System::Void _Update_b__0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLIPMAPLOADERDATA___C__DISPLAYCLASS17_0__UPDATE_B__0_OFFSET))(this, asset, handle);
	}
};
