#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingComposite.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"

namespace System { class Object; }
namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1C086880)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1C086A40)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1C086870)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1C086860)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x1C086A60)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x1C086950)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C086B30)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int TwoModifiersComposite_TypeDefinitionIndex = 29440;

	class TwoModifiersComposite : public ::UnityEngine::InputSystem::InputBindingComposite
	{
	public:
		::System::Type* m_ValueType; // 0x10
		::System::Int32 binding; // 0x18
		::System::Int32 modifier2; // 0x1C
		::System::Int32 m_ValueSizeInBytes; // 0x20
		::System::Int32 modifier1; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE__CTOR_OFFSET))(this);
		}

		::System::Type* get_valueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_EVALUATEMAGNITUDE_OFFSET))(this, context);
		}

		::System::Void ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext& context, ::System::Void* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_READVALUE_OFFSET))(this, context, buffer, bufferSize);
		}

		::System::Void FinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_FINISHSETUP_OFFSET))(this, context);
		}

		::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_READVALUEASOBJECT_OFFSET))(this, context);
		}
	};
}
