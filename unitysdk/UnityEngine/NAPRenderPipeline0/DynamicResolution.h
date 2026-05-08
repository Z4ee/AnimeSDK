#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_APPLYSCALE_OFFSET UNITYSDK_OFFSET(0x1B3C2920)
#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_GETDYNAMICRESOLUTION_1_OFFSET UNITYSDK_OFFSET(0x1B3C2D90)
#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_GETDYNAMICRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B3C2D30)
#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION_GETDYNAMICSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1B3C2E40)
#define UNITYENGINE_NAPRENDERPIPELINE0_DYNAMICRESOLUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C2EE0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DynamicResolution_TypeDefinitionIndex = 6018;

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
