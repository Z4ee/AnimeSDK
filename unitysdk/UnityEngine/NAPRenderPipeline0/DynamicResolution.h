#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_APPLYSCALE_OFFSET UNITYSDK_OFFSET(0x1D72DAA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_GETDYNAMICRESOLUTION_1_OFFSET UNITYSDK_OFFSET(0x1D72DF10)
#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_GETDYNAMICRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D72DEB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_GETDYNAMICSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1D72DFC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D72E060)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DynamicResolution_TypeDefinitionIndex = 6029;

	class DynamicResolution : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION__CTOR_OFFSET))(this);
		}

		static ::System::Void ApplyScale(::UnityEngine::Vector2Int targetResolution)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_APPLYSCALE_OFFSET))(targetResolution);
		}

		static ::UnityEngine::Vector2Int GetDynamicResolution(::System::Int32 w, ::System::Int32 h, ::System::Single ws, ::System::Single hs)
		{
			return ((::UnityEngine::Vector2Int(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_GETDYNAMICRESOLUTION_OFFSET))(w, h, ws, hs);
		}

		static ::UnityEngine::Vector2Int GetDynamicResolution_1(::System::Int32 w, ::System::Int32 h, ::System::Boolean useDynamicScale)
		{
			return ((::UnityEngine::Vector2Int(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_GETDYNAMICRESOLUTION_1_OFFSET))(w, h, useDynamicScale);
		}

		static ::UnityEngine::Vector4 GetDynamicScreenSize(::System::Int32 w, ::System::Int32 h, ::System::Boolean useDynamicScale)
		{
			return ((::UnityEngine::Vector4(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_GETDYNAMICSCREENSIZE_OFFSET))(w, h, useDynamicScale);
		}
	};
}
