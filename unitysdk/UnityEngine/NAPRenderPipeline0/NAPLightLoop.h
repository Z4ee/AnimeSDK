#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapLightData.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B4D8490)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_GETLIGHTSFORCHAR_OFFSET UNITYSDK_OFFSET(0x1B4D84C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4D8470)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_INTERNAL_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B4D84A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_INTERNAL_GETLIGHTSFORCHAR_OFFSET UNITYSDK_OFFSET(0x1B4D84B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_INTERNAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4D8480)
#define UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D8510)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NAPLightLoop_TypeDefinitionIndex = 5708;

	class NAPLightLoop : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_INITIALIZE_OFFSET))();
		}

		static ::System::Void Internal_Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_INTERNAL_INITIALIZE_OFFSET))();
		}

		static ::System::Void Cleanup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_CLEANUP_OFFSET))();
		}

		static ::System::Void Internal_Cleanup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_INTERNAL_CLEANUP_OFFSET))();
		}

		static ::System::Void Internal_GetLightsForChar(::System::Int32& count, ::System::IntPtr& ptr)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_INTERNAL_GETLIGHTSFORCHAR_OFFSET))(count, ptr);
		}

		static ::Unity::Collections::NativeArray_1<::UnityEngine::NAPRenderPipeline0::NapLightData> GetLightsForChar()
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::NAPRenderPipeline0::NapLightData>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPLIGHTLOOP_GETLIGHTSFORCHAR_OFFSET))();
		}
	};
}
