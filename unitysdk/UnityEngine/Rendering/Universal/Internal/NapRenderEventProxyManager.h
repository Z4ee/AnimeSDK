#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Rendering::Universal::Internal { class INapRenderEventProxy; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER_ONPRERENDER_OFFSET UNITYSDK_OFFSET(0x190C9360)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER_REGISTERPROXY_OFFSET UNITYSDK_OFFSET(0x190C9150)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER_UNREGISTERPROXY_OFFSET UNITYSDK_OFFSET(0x190C9230)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x190C9520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x190C9510)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapRenderEventProxyManager_TypeDefinitionIndex = 30433;

	class NapRenderEventProxyManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::INapRenderEventProxy*>** StaticGet_proxyMap()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::INapRenderEventProxy*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderEventProxyManager_TypeDefinitionIndex)->GetStaticField(0x24BC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterProxy(::UnityEngine::Rendering::Universal::Internal::INapRenderEventProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::INapRenderEventProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER_REGISTERPROXY_OFFSET))(proxy);
		}

		static ::System::Void UnRegisterProxy(::UnityEngine::Rendering::Universal::Internal::INapRenderEventProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::INapRenderEventProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER_UNREGISTERPROXY_OFFSET))(proxy);
		}

		static ::System::Void OnPreRender()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPRENDEREVENTPROXYMANAGER_ONPRERENDER_OFFSET))();
		}
	};
}
