#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Scripting/GarbageCollector_Mode.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_SCRIPTING_GARBAGECOLLECTOR_GETMODE_OFFSET UNITYSDK_OFFSET(0x1D58FA00)
#define UNITYENGINE_SCRIPTING_GARBAGECOLLECTOR_SETMODE_OFFSET UNITYSDK_OFFSET(0x1D58FA10)
#define UNITYENGINE_SCRIPTING_GARBAGECOLLECTOR_SET_GCMODE_OFFSET UNITYSDK_OFFSET(0x1D58F990)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int GarbageCollector_TypeDefinitionIndex = 5507;

	class GarbageCollector : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>** StaticGet_GCModeChanged()
		{
			return (::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>**)Il2CppClass::FromTypeDefinitionIndex(GarbageCollector_TypeDefinitionIndex)->GetStaticField(0x55C0);
		}

		static ::System::Void set_GCMode(::UnityEngine::Scripting::GarbageCollector_Mode value)
		{
			return ((::System::Void(*)(::UnityEngine::Scripting::GarbageCollector_Mode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_GARBAGECOLLECTOR_SET_GCMODE_OFFSET))(value);
		}

		static ::System::Void SetMode(::UnityEngine::Scripting::GarbageCollector_Mode mode)
		{
			return ((::System::Void(*)(::UnityEngine::Scripting::GarbageCollector_Mode))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_GARBAGECOLLECTOR_SETMODE_OFFSET))(mode);
		}

		static ::UnityEngine::Scripting::GarbageCollector_Mode GetMode()
		{
			return ((::UnityEngine::Scripting::GarbageCollector_Mode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_GARBAGECOLLECTOR_GETMODE_OFFSET))();
		}
	};
}
