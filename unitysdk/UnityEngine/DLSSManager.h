#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_DLSSMANAGER_GET_NUMFRAMESACTUALLYPRESENTED_OFFSET UNITYSDK_OFFSET(0x1B2EE160)
#define UNITYENGINE_DLSSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EE170)

namespace UnityEngine
{
	inline static constexpr unsigned int DLSSManager_TypeDefinitionIndex = 5185;

	class DLSSManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DLSSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Int32 get_numFramesActuallyPresented()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DLSSMANAGER_GET_NUMFRAMESACTUALLYPRESENTED_OFFSET))();
		}
	};
}
