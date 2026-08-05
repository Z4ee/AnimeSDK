#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_FAKEREFLECTIONCUBEARRAYREQHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4DDB20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_FAKEREFLECTIONCUBEARRAYREQHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DDB10)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLightMapData_FakeReflectionCubeArrayReqHandle_TypeDefinitionIndex = 27794;

	class NapLightMapData_FakeReflectionCubeArrayReqHandle : public ::System::Object
	{
	public:
		::Foundation::AssetRequestHandle m_Handle; // 0x10

		::System::Void _ctor(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_FAKEREFLECTIONCUBEARRAYREQHANDLE__CTOR_OFFSET))(this, handle);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPDATA_FAKEREFLECTIONCUBEARRAYREQHANDLE__CTOR_1_OFFSET))(this);
		}
	};
}
