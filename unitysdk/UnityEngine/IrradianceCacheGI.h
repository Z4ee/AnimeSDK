#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_IRRADIANCECACHEGI_SETDEBUGPATHTRACINGINFO_OFFSET UNITYSDK_OFFSET(0x1B29CB30)

namespace UnityEngine
{
	inline static constexpr unsigned int IrradianceCacheGI_TypeDefinitionIndex = 4253;

	class IrradianceCacheGI : public ::System::Object
	{
	public:
		static ::System::Void SetDebugPathTracingInfo(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::ComputeBuffer* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_IRRADIANCECACHEGI_SETDEBUGPATHTRACINGINFO_OFFSET))(a1, a2, a3);
		}
	};
}
