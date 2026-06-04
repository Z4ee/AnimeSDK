#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SCRIPTINGUTILITY_ISMANAGEDCODEWORKING_OFFSET UNITYSDK_OFFSET(0x1B2D5AB0)

namespace UnityEngine
{
	inline static constexpr unsigned int ScriptingUtility_TypeDefinitionIndex = 4322;

	class ScriptingUtility : public ::System::Object
	{
	public:
		static ::System::Boolean IsManagedCodeWorking()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTINGUTILITY_ISMANAGEDCODEWORKING_OFFSET))();
		}
	};
}
