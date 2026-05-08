#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPECIALFOOTPRINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1968F210)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SpecialFootPrintConfig_TypeDefinitionIndex = 30491;

	class SpecialFootPrintConfig : public ::System::Object
	{
	public:
		::System::String* tips; // 0x10
		::System::String* matchName; // 0x18
		::UnityEngine::GameObject* footPrintSpawner; // 0x20
		::UnityEngine::Vector2 sizeScale; // 0x28
		::UnityEngine::Vector4 leftRightOffset; // 0x30
		::System::Boolean isLocalOffset; // 0x40
		::System::Single extraOffset; // 0x44
		::System::Single minForceDistance; // 0x48
		::System::Boolean useSpecialBoonName; // 0x4C
		::System::String* leftBoonName; // 0x50
		::System::String* rightBoonName; // 0x58
		::System::Boolean isWheelType; // 0x60
		::System::String* wheelBoonName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SPECIALFOOTPRINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
