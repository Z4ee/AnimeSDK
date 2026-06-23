#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SCRIPTINGUTILITY_ISMANAGEDCODEWORKING_OFFSET UNITYSDK_OFFSET(0x1D6AD390)
#define UNITYENGINE_SCRIPTINGUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AD3A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ScriptingUtility_TypeDefinitionIndex = 5358;

	class ScriptingUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTINGUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsManagedCodeWorking()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTINGUTILITY_ISMANAGEDCODEWORKING_OFFSET))();
		}
	};
}
