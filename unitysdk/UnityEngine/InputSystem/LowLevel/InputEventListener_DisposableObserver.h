#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System { template <typename T> class IObserver_1; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_DISPOSABLEOBSERVER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7A7400)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_DISPOSABLEOBSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A75B0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventListener_DisposableObserver_TypeDefinitionIndex = 31915;

	class InputEventListener_DisposableObserver : public ::System::Object
	{
	public:
		::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_DISPOSABLEOBSERVER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTLISTENER_DISPOSABLEOBSERVER_DISPOSE_OFFSET))(this);
		}
	};
}
