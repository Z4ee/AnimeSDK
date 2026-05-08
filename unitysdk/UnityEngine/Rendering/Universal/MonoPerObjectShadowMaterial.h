#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class MonoPerObjectShadowRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_GET_CACHEDSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x19AB9F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x19ABA230)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_GET_SUPPORTPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x19AB9F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_INIT_OFFSET UNITYSDK_OFFSET(0x19ABA470)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x19ABA720)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_SET_SUPPORTPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x19AB9F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABA770)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoPerObjectShadowMaterial_TypeDefinitionIndex = 30069;

	class MonoPerObjectShadowMaterial : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::MonoPerObjectShadowRenderer* _renderer; // 0x10
		::System::Boolean _SupportPerObjectShadow_k__BackingField; // 0x18
		::System::Int32 _index; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_SupportPerObjectShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_GET_SUPPORTPEROBJECTSHADOW_OFFSET))(this);
		}

		::System::Void set_SupportPerObjectShadow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_SET_SUPPORTPEROBJECTSHADOW_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_CachedSharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_GET_CACHEDSHAREDMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::Universal::MonoPerObjectShadowRenderer* renderer, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::MonoPerObjectShadowRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_INIT_OFFSET))(this, renderer, index);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONOPEROBJECTSHADOWMATERIAL_ONRELEASE_OFFSET))(this);
		}
	};
}
