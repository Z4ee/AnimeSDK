#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERSHADOWCULLINGDISTANCES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D30E700)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERSHADOWCULLINGDISTANCES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D30E780)
#define UNITYENGINE_RENDERING_UNIVERSAL_LAYERSHADOWCULLINGDISTANCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30E740)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LayerShadowCullingDistances_TypeDefinitionIndex = 26856;

	class LayerShadowCullingDistances : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* Distances; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERSHADOWCULLINGDISTANCES__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERSHADOWCULLINGDISTANCES__CTOR_1_OFFSET))(this, count);
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LAYERSHADOWCULLINGDISTANCES_GET_ITEM_OFFSET))(this, index);
		}
	};
}
