#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SCALABLEBUFFERMANAGER_GET_HEIGHTSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B2D41F0)
#define UNITYENGINE_SCALABLEBUFFERMANAGER_GET_WIDTHSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B2D41E0)
#define UNITYENGINE_SCALABLEBUFFERMANAGER_RESIZEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B2D4200)

namespace UnityEngine
{
	inline static constexpr unsigned int ScalableBufferManager_TypeDefinitionIndex = 4108;

	class ScalableBufferManager : public ::System::Object
	{
	public:
		static ::System::Single get_widthScaleFactor()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCALABLEBUFFERMANAGER_GET_WIDTHSCALEFACTOR_OFFSET))();
		}

		static ::System::Single get_heightScaleFactor()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCALABLEBUFFERMANAGER_GET_HEIGHTSCALEFACTOR_OFFSET))();
		}

		static ::System::Void ResizeBuffers(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SCALABLEBUFFERMANAGER_RESIZEBUFFERS_OFFSET))(a1, a2);
		}
	};
}
