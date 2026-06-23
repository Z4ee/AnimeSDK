#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C99EDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C99EAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY_RESETRENDERERSPROP_OFFSET UNITYSDK_OFFSET(0x1C99EE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY_SETRENDERERSPROP_OFFSET UNITYSDK_OFFSET(0x1C99EB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C99EFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99EF70)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SpeedTreeProxy_TypeDefinitionIndex = 26426;

	class SpeedTreeProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__LeavesBottomColorInst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpeedTreeProxy_TypeDefinitionIndex)->GetStaticField(0x62C0);
		}
		static ::System::Int32* StaticGet__BaseColorInst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpeedTreeProxy_TypeDefinitionIndex)->GetStaticField(0x62C4);
		}
		static ::System::Int32* StaticGet__LeavesTipDyeColorInst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpeedTreeProxy_TypeDefinitionIndex)->GetStaticField(0x62C8);
		}
		static ::System::Int32* StaticGet__LeavesRootDyeColorInst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpeedTreeProxy_TypeDefinitionIndex)->GetStaticField(0x62CC);
		}
		static ::System::Int32* StaticGet__OverrideColor_Inst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SpeedTreeProxy_TypeDefinitionIndex)->GetStaticField(0x62D0);
		}
		::UnityEngine::Color LeavesBaseColor; // 0x18
		::UnityEngine::Color LeavesRootColor; // 0x28
		::UnityEngine::Color LeavesTipColor; // 0x38
		::UnityEngine::Color LeavesBottomColor; // 0x48
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x58
		::UnityEngine::MaterialPropertyBlock* props; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetRenderersProp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY_SETRENDERERSPROP_OFFSET))(this);
		}

		::System::Void ResetRenderersProp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPEEDTREEPROXY_RESETRENDERERSPROP_OFFSET))(this);
		}
	};
}
