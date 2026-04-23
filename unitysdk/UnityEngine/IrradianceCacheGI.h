#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_IRRADIANCECACHEGI_SETDEBUGPATHTRACINGINFO_OFFSET UNITYSDK_OFFSET(0x1A44B7F0)

namespace UnityEngine
{
	inline static constexpr unsigned int IrradianceCacheGI_TypeDefinitionIndex = 4079;

	class IrradianceCacheGI : public ::System::Object
	{
	public:
		static ::System::Void SetDebugPathTracingInfo(::System::Int32 collectPixelX, ::System::Int32 collectPixelY, ::UnityEngine::ComputeBuffer* pathBuffer)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_IRRADIANCECACHEGI_SETDEBUGPATHTRACINGINFO_OFFSET))(collectPixelX, collectPixelY, pathBuffer);
		}
	};
}
