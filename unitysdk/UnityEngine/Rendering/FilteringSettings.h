#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/SortingLayerRange.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x96E930)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x96E8F0)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96E9B0)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x2F1C00)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_EXCLUDEMOTIONVECTOROBJECTS_OFFSET UNITYSDK_OFFSET(0x96E8E0)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x50A4B0)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_NAPDRAWSET_OFFSET UNITYSDK_OFFSET(0x6866F0)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x46F550)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_RENDERQUEUERANGE_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define UNITYENGINE_RENDERING_FILTERINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x96E830)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FilteringSettings_TypeDefinitionIndex = 6217;

	struct alignas(4) FilteringSettings
	{
		::UnityEngine::Rendering::RenderQueueRange m_RenderQueueRange; // 0x10
		::System::Int32 m_LayerMask; // 0x18
		::System::UInt32 m_RenderingLayerMask; // 0x1C
		::System::Int32 m_ExcludeMotionVectorObjects; // 0x20
		::UnityEngine::Rendering::SortingLayerRange m_SortingLayerRange; // 0x24
		::System::Byte m_NapDrawSet; // 0x28

		/*
		::System::Void _ctor(::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange> renderQueueRange, ::System::Int32 layerMask, ::System::UInt32 renderingLayerMask, ::System::Int32 excludeMotionVectorObjects, ::System::Byte napDrawSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange>, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS__CTOR_OFFSET))(this, renderQueueRange, layerMask, renderingLayerMask, excludeMotionVectorObjects, napDrawSet);
		}
		*/

		::System::Void set_renderQueueRange(::UnityEngine::Rendering::RenderQueueRange value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderQueueRange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_RENDERQUEUERANGE_OFFSET))(this, value);
		}

		::System::Int32 get_layerMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_LAYERMASK_OFFSET))(this);
		}

		::System::Void set_layerMask(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_LAYERMASK_OFFSET))(this, value);
		}

		::System::UInt32 get_renderingLayerMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_GET_RENDERINGLAYERMASK_OFFSET))(this);
		}

		::System::Void set_renderingLayerMask(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_RENDERINGLAYERMASK_OFFSET))(this, value);
		}

		::System::Void set_excludeMotionVectorObjects(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_EXCLUDEMOTIONVECTOROBJECTS_OFFSET))(this, value);
		}

		::System::Void set_napDrawSet(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FILTERINGSETTINGS_SET_NAPDRAWSET_OFFSET))(this, value);
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
