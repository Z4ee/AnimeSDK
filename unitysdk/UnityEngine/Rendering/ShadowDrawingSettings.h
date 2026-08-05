#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/ShadowSplitData.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA7FC20)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA7FB40)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA7FC30)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_SET_DRAWLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA7FAD0)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_SET_SPLITDATA_OFFSET UNITYSDK_OFFSET(0xA7FAC0)
#define UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xA7FAE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowDrawingSettings_TypeDefinitionIndex = 6262;

	struct alignas(8) ShadowDrawingSettings
	{
		::UnityEngine::Rendering::CullingResults m_CullingResults; // 0x10
		::System::Int32 m_LightIndex; // 0x20
		::System::Int32 m_UseRenderingLayerMaskTest; // 0x24
		::UnityEngine::Rendering::ShadowSplitData m_SplitData; // 0x28
		::System::UInt32 m_DrawLayerMask; // 0x170

		::System::Void _ctor(::UnityEngine::Rendering::CullingResults cullingResults, ::System::Int32 lightIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullingResults, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS__CTOR_OFFSET))(this, cullingResults, lightIndex);
		}

		::System::Void set_splitData(::UnityEngine::Rendering::ShadowSplitData value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShadowSplitData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_SET_SPLITDATA_OFFSET))(this, value);
		}

		::System::Void set_drawLayerMask(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_SET_DRAWLAYERMASK_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::ShadowDrawingSettings other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ShadowDrawingSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWDRAWINGSETTINGS_GETHASHCODE_OFFSET))(this);
		}
	};
}
