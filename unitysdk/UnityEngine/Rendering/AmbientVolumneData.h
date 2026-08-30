#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumeType.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_AMBIENTVOLUMNEDATA_ADDAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x1ED52560)
#define UNITYENGINE_RENDERING_AMBIENTVOLUMNEDATA_REMOVEAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x1ED52570)
#define UNITYENGINE_RENDERING_AMBIENTVOLUMNEDATA_SETGLOBALAMBIENTDIRTY_OFFSET UNITYSDK_OFFSET(0x1ED52580)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AmbientVolumneData_TypeDefinitionIndex = 4806;

	struct alignas(4) AmbientVolumneData
	{
		::UnityEngine::Bounds bounds; // 0x10
		::UnityEngine::Color LevelSkinLightColor; // 0x28
		::UnityEngine::Color LevelSkinShadowColor; // 0x38
		::UnityEngine::Color LevelHighLightColor; // 0x48
		::UnityEngine::Color LevelShadowColor; // 0x58
		::System::Single LevelShadow; // 0x68
		::System::Single LevelMid; // 0x6C
		::System::Single LevelHighLight; // 0x70
		::System::Int32 VolumneRender; // 0x74
		::UnityEngine::Rendering::AmbientVolumeType Type; // 0x78
		::System::Int16 Priority; // 0x7C
		::System::Byte CustomLightQualityFilter; // 0x7E
		::System::Boolean IsInverse; // 0x7F

		static ::System::Void AddAmbientVolumne(::System::Int32 a1, ::UnityEngine::Rendering::AmbientVolumneData& a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::AmbientVolumneData&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_AMBIENTVOLUMNEDATA_ADDAMBIENTVOLUMNE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveAmbientVolumne(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_AMBIENTVOLUMNEDATA_REMOVEAMBIENTVOLUMNE_OFFSET))(a1);
		}

		static ::System::Void SetGlobalAmbientDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_AMBIENTVOLUMNEDATA_SETGLOBALAMBIENTDIRTY_OFFSET))();
		}
	};
}
