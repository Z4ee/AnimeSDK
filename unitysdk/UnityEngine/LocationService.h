#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_LOCATIONSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3130E0)

namespace UnityEngine
{
	inline static constexpr unsigned int LocationService_TypeDefinitionIndex = 5257;

	class LocationService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOCATIONSERVICE__CTOR_OFFSET))(this);
		}
	};
}
