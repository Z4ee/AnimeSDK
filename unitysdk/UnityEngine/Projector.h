#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_PROJECTOR_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1B4DC210)
#define UNITYENGINE_PROJECTOR_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1B4DC1F0)
#define UNITYENGINE_PROJECTOR_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x1B4DC200)
#define UNITYENGINE_PROJECTOR_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1B4DC1E0)
#define UNITYENGINE_PROJECTOR_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1B4DC220)
#define UNITYENGINE_PROJECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DC230)

namespace UnityEngine
{
	inline static constexpr unsigned int Projector_TypeDefinitionIndex = 5206;

	class Projector : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR__CTOR_OFFSET))(this);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Single get_fieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Single get_aspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_ASPECTRATIO_OFFSET))(this);
		}

		::System::Void set_aspectRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_ASPECTRATIO_OFFSET))(this, value);
		}
	};
}
