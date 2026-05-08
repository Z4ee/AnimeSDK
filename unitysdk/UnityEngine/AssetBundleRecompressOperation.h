#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

#define UNITYENGINE_ASSETBUNDLERECOMPRESSOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C544F90)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleRecompressOperation_TypeDefinitionIndex = 7594;

	class AssetBundleRecompressOperation : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLERECOMPRESSOPERATION__CTOR_OFFSET))(this);
		}
	};
}
