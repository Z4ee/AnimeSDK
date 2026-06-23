#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class AssetBundleInstanceRequest; }

#define UNITYENGINE_OBJECTINSTANCECACHE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E8763A0)
#define UNITYENGINE_OBJECTINSTANCECACHE_INSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1E876390)
#define UNITYENGINE_OBJECTINSTANCECACHE_LOADTEMPLATEASYNC_OFFSET UNITYSDK_OFFSET(0x1E876370)
#define UNITYENGINE_OBJECTINSTANCECACHE_LOADTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1E876380)
#define UNITYENGINE_OBJECTINSTANCECACHE_SET_USESWAPPABLE_OFFSET UNITYSDK_OFFSET(0x1E8763B0)
#define UNITYENGINE_OBJECTINSTANCECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8763C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ObjectInstanceCache_TypeDefinitionIndex = 7681;

	class ObjectInstanceCache : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE__CTOR_OFFSET))(this);
		}

		::UnityEngine::AssetBundleInstanceRequest* LoadTemplateAsync()
		{
			return ((::UnityEngine::AssetBundleInstanceRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE_LOADTEMPLATEASYNC_OFFSET))(this);
		}

		::System::Void LoadTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE_LOADTEMPLATE_OFFSET))(this);
		}

		::UnityEngine::AssetBundleInstanceRequest* InstanceAsync()
		{
			return ((::UnityEngine::AssetBundleInstanceRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE_INSTANCEASYNC_OFFSET))(this);
		}

		::UnityEngine::Object* get_instance()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE_GET_INSTANCE_OFFSET))(this);
		}

		static ::System::Void set_useSwappable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANCECACHE_SET_USESWAPPABLE_OFFSET))(value);
		}
	};
}
