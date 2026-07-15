#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/DiagnosticSwitchFlags.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class EnumInfo; }

namespace UnityEngine
{
	inline static constexpr unsigned int DiagnosticSwitch_TypeDefinitionIndex = 4063;

	struct alignas(8) DiagnosticSwitch
	{
		::System::String* name; // 0x10
		::System::String* description; // 0x18
		::UnityEngine::DiagnosticSwitchFlags flags; // 0x20
		::System::Object* value; // 0x28
		::System::Object* minValue; // 0x30
		::System::Object* maxValue; // 0x38
		::System::Object* persistentValue; // 0x40
		::UnityEngine::EnumInfo* enumInfo; // 0x48
	};
}
