#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleObjectType.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEOBJECTTYPETOENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8A4D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ConsoleObjectTypeToEnum_TypeDefinitionIndex = 5689;

	class ConsoleObjectTypeToEnum : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEOBJECTTYPETOENUM__CCTOR_OFFSET))();
		}
	};
}
