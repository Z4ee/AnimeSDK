#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingComposite.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"

namespace System { class Object; }
namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_DETERMINEVALUETYPEANDSIZE_OFFSET UNITYSDK_OFFSET(0x1D795310)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1D7951D0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D7952F0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1D7951C0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D7951B0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x1D7957A0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x1D795250)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D795820)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int OneModifierComposite_TypeDefinitionIndex = 32715;

	class OneModifierComposite : public ::UnityEngine::InputSystem::InputBindingComposite
	{
	public:
		::System::Type* m_ValueType; // 0x10
		::System::Int32 m_ValueSizeInBytes; // 0x18
		::System::Int32 binding; // 0x1C
		::System::Int32 modifier; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE__CTOR_OFFSET))(this);
		}

		::System::Type* get_valueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_EVALUATEMAGNITUDE_OFFSET))(this, context);
		}

		::System::Void ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext& context, ::System::Void* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_READVALUE_OFFSET))(this, context, buffer, bufferSize);
		}

		::System::Void FinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_FINISHSETUP_OFFSET))(this, context);
		}

		::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_READVALUEASOBJECT_OFFSET))(this, context);
		}

		static ::System::Void DetermineValueTypeAndSize(::UnityEngine::InputSystem::InputBindingCompositeContext& context, ::System::Int32 part, ::System::Type*& valueType, ::System::Int32& valueSizeInBytes)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&, ::System::Int32, ::System::Type*&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_DETERMINEVALUETYPEANDSIZE_OFFSET))(context, part, valueType, valueSizeInBytes);
		}
	};
}
