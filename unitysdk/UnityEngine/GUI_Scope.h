#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_GUI_SCOPE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1ACE9410)
#define UNITYENGINE_GUI_SCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ACE91A0)
#define UNITYENGINE_GUI_SCOPE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ACE9280)
#define UNITYENGINE_GUI_SCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE94C0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUI_Scope_TypeDefinitionIndex = 6356;

	class GUI_Scope : public ::System::Object
	{
	public:
		::System::Boolean m_Disposed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SCOPE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SCOPE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SCOPE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SCOPE_DISPOSE_1_OFFSET))(this);
		}
	};
}
