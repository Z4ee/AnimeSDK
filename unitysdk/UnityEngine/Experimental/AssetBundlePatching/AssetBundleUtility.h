#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_EXPERIMENTAL_ASSETBUNDLEPATCHING_ASSETBUNDLEUTILITY_USEENGINEBUNDLEINDEX_OFFSET UNITYSDK_OFFSET(0x1E8760E0)

namespace UnityEngine::Experimental::AssetBundlePatching
{
	inline static constexpr unsigned int AssetBundleUtility_TypeDefinitionIndex = 7682;

	class AssetBundleUtility : public ::System::Object
	{
	public:
		static ::System::Boolean UseEngineBundleIndex()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_ASSETBUNDLEPATCHING_ASSETBUNDLEUTILITY_USEENGINEBUNDLEINDEX_OFFSET))();
		}
	};
}
