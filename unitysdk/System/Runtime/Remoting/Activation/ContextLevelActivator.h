#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Remoting::Activation { class IActivator; }
namespace System::Runtime::Remoting::Activation { class IConstructionCallMessage; }
namespace System::Runtime::Remoting::Activation { class IConstructionReturnMessage; }

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1C45D110)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET UNITYSDK_OFFSET(0x1C45D100)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45C280)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int ContextLevelActivator_TypeDefinitionIndex = 1280;

	class ContextLevelActivator : public ::System::Object
	{
	public:
		::System::Runtime::Remoting::Activation::IActivator* m_NextActivator; // 0x10

		::System::Void _ctor(::System::Runtime::Remoting::Activation::IActivator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Activation::IActivator*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Activation::IActivator* get_NextActivator()
		{
			return ((::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET))(this);
		}

		::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* a1)
		{
			return ((::System::Runtime::Remoting::Activation::IConstructionReturnMessage*(*)(::PVOID, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_ACTIVATE_OFFSET))(this, a1);
		}
	};
}
