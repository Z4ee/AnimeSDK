#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/IMECompositionString__buffer_e__FixedBuffer.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x90D4A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x90D2F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x90D4A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90D490)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x90D360)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int IMECompositionString_TypeDefinitionIndex = 29251;

	struct alignas(4) IMECompositionString
	{
		::System::Int32 size; // 0x10
		::UnityEngine::InputSystem::LowLevel::IMECompositionString__buffer_e__FixedBuffer buffer; // 0x14

		::System::Void _ctor(::System::String* characters)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING__CTOR_OFFSET))(this, characters);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GET_COUNT_OFFSET))(this);
		}

		::System::Char get_Item(::System::Int32 index)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GET_ITEM_OFFSET))(this, index);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_TOSTRING_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Char>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Char>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IMECOMPOSITIONSTRING_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
