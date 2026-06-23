#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class VideoMipGenerator; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER_CLEARUSEOFRT_OFFSET UNITYSDK_OFFSET(0x1C9BF140)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER_ONPRERENDERPROXYLIST_OFFSET UNITYSDK_OFFSET(0x1C9B7C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER_REGISTERPROXY_OFFSET UNITYSDK_OFFSET(0x1C9BEE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER_UNREGISTERPROXY_OFFSET UNITYSDK_OFFSET(0x1C9BEF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9BF660)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BF650)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VideoMipGeneratorManager_TypeDefinitionIndex = 26226;

	class VideoMipGeneratorManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::VideoMipGenerator*>** StaticGet_s_VideoMipGeneratorProxyList()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::VideoMipGenerator*>**)Il2CppClass::FromTypeDefinitionIndex(VideoMipGeneratorManager_TypeDefinitionIndex)->GetStaticField(0x217E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterProxy(::UnityEngine::Rendering::Universal::VideoMipGenerator* mipGenerator)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VideoMipGenerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER_REGISTERPROXY_OFFSET))(mipGenerator);
		}

		static ::System::Void UnRegisterProxy(::UnityEngine::Rendering::Universal::VideoMipGenerator* mipGenerator)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VideoMipGenerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER_UNREGISTERPROXY_OFFSET))(mipGenerator);
		}

		static ::System::Void OnPreRenderProxyList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER_ONPRERENDERPROXYLIST_OFFSET))();
		}

		static ::System::Void ClearUseOfRT(::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATORMANAGER_CLEARUSEOFRT_OFFSET))(tex);
		}
	};
}
