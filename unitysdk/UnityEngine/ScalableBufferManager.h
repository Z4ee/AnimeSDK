#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SCALABLEBUFFERMANAGER_GET_HEIGHTSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1EBECDD0)
#define UNITYENGINE_SCALABLEBUFFERMANAGER_GET_WIDTHSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1EBECDC0)
#define UNITYENGINE_SCALABLEBUFFERMANAGER_RESIZEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1EBECDE0)

namespace UnityEngine
{
	inline static constexpr unsigned int ScalableBufferManager_TypeDefinitionIndex = 5182;

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

		static ::System::Void ResizeBuffers(::System::Single widthScale, ::System::Single heightScale)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SCALABLEBUFFERMANAGER_RESIZEBUFFERS_OFFSET))(widthScale, heightScale);
		}
	};
}
