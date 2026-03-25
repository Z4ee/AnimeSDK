#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/DistanceRange.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/SortingLayerRange.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2118A90)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x2118A30)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2118B30)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_DISTANCERANGE_OFFSET UNITYSDK_OFFSET(0x2118A20)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_RENDERINGLAYERMASKEXCLUDE_OFFSET UNITYSDK_OFFSET(0x68F0)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x793A0)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_EXCLUDEMOTIONVECTOROBJECTS_OFFSET UNITYSDK_OFFSET(0x2118A10)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2118950)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FilteringSettings_TypeDefinitionIndex = 4561;

	struct alignas(4) FilteringSettings
	{
		::UnityEngine::Rendering::RenderQueueRange m_RenderQueueRange; // 0x10
		::System::Int32 m_LayerMask; // 0x18
		::System::UInt32 m_RenderingLayerMask; // 0x1C
		::System::UInt32 m_RenderingLayerMaskExclude; // 0x20
		::System::Int32 m_ExcludeMotionVectorObjects; // 0x24
		::UnityEngine::Rendering::SortingLayerRange m_SortingLayerRange; // 0x28
		::UnityEngine::Rendering::DistanceRange m_DistanceRange; // 0x2C
		::System::Single m_MinScreenSize; // 0x34

		/*
		::System::Void _ctor(::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange> renderQueueRange, ::System::Int32 layerMask, ::System::UInt32 renderingLayerMask, ::System::Int32 excludeMotionVectorObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange>, ::System::Int32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS__CTOR_OFFSET))(this, renderQueueRange, layerMask, renderingLayerMask, excludeMotionVectorObjects);
		}
		*/

		::System::Int32 get_layerMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_LAYERMASK_OFFSET))(this);
		}

		::System::UInt32 get_renderingLayerMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_RENDERINGLAYERMASK_OFFSET))(this);
		}

		::System::UInt32 get_renderingLayerMaskExclude()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_RENDERINGLAYERMASKEXCLUDE_OFFSET))(this);
		}

		::System::Void set_excludeMotionVectorObjects(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_EXCLUDEMOTIONVECTOROBJECTS_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::DistanceRange get_distanceRange()
		{
			return ((::UnityEngine::Rendering::DistanceRange(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_DISTANCERANGE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::FilteringSettings other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::FilteringSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_GETHASHCODE_OFFSET))(this);
		}
	};
}
