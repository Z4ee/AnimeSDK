#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_EXPERIMENTAL_ASSETBUNDLEPATCHING_ASSETBUNDLEUTILITY_USEENGINEBUNDLEINDEX_OFFSET UNITYSDK_OFFSET(0x1FC52620)

namespace UnityEngine::Experimental::AssetBundlePatching
{
	inline static constexpr unsigned int AssetBundleUtility_TypeDefinitionIndex = 7686;

	class AssetBundleUtility : public ::System::Object
	{
	public:
		static ::System::Boolean UseEngineBundleIndex()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_ASSETBUNDLEPATCHING_ASSETBUNDLEUTILITY_USEENGINEBUNDLEINDEX_OFFSET))();
		}
	};
}
