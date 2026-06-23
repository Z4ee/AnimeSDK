#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering::Universal::Internal { class FootPrintSpawner; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF2C50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FootPrintManager_FootPrintArray_TypeDefinitionIndex = 26798;

	class FootPrintManager_FootPrintArray : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::FootPrintSpawner* m_Left; // 0x10
		::UnityEngine::Rendering::Universal::Internal::FootPrintSpawner* m_Right; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTMANAGER_FOOTPRINTARRAY__CTOR_OFFSET))(this);
		}
	};
}
