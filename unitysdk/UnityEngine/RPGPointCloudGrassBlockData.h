#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RPGPOINTCLOUDGRASSBLOCKDATA_GETPREFABPATHSLOD0_OFFSET UNITYSDK_OFFSET(0x1A46B080)
#define UNITYENGINE_RPGPOINTCLOUDGRASSBLOCKDATA_GETPREFABSLOD0IMPL_OFFSET UNITYSDK_OFFSET(0x1A46B090)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGPointCloudGrassBlockData_TypeDefinitionIndex = 4092;

	class RPGPointCloudGrassBlockData : public ::UnityEngine::Object
	{
	public:
		::System::Void GetPrefabPathsLod0(::System::Collections::Generic::List_1<::System::String*>* lod0Paths)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGPOINTCLOUDGRASSBLOCKDATA_GETPREFABPATHSLOD0_OFFSET))(this, lod0Paths);
		}

		::System::Void GetPrefabsLod0Impl(::System::Object* lod0Paths)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGPOINTCLOUDGRASSBLOCKDATA_GETPREFABSLOD0IMPL_OFFSET))(this, lod0Paths);
		}
	};
}
